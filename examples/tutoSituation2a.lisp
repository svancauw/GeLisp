(lambda (nobj ppts npts idst cnstr xdst)

 (progn
   
   ;cree l'espace de recherche
   (setq sp (cl-user::new_GlSpace))
   
   ;boucle pour creer les accords .
   (setq chords (list (cl-user::new_IntVarList_minmax sp npts (first ppts) (first (rest ppts)))))
   (loop for x from 1 to (- nobj 1) do
       (setq chords (append chords (list (cl-user::new_IntVarList_minmax sp npts (first ppts) (first (rest ppts))))))
    )
    
   ;cree une liste d'intervalles verticaux interdit (les intervalles redoubles ne sont pas pris en compte par situation 3)
   (setq forbiddenVerticalIntervals nil)
   (setq tempRestOfIdst (rest idst)) 
   (loop for x from (+ (first idst) 1) to (first (last idst)) do
         (if (= x (first tempRestOfIdst))
             (setq tempRestOfIdst (rest tempRestOfIdst))
           (setq forbiddenVerticalIntervals (cons x forbiddenVerticalIntervals)))
    )


   ;cree une liste d'intervalles horizontaux interdit (les intervalles redoubles ne sont pas pris en compte par situation 3)
   (setq forbiddenHorizontalIntervals nil)
   (setq tempRestOfXdst (rest xdst)) 
   (loop for x from (+ (first xdst) 1) to (first (last xdst)) do
         (if (= x (first tempRestOfXdst))
             (setq tempRestOfXdst (rest tempRestOfXdst))
           (setq forbiddenHorizontalIntervals (cons x forbiddenHorizontalIntervals)))
    )

   ;tableau destine a contenir les notes de la voix superieure
   (setq notesUpperVoice (cl-user::new_IntVarList)) 

    ;post des contraintes
   (dolist (tempChord chords nil)
       
      ;enregistrement de la note superieur de l'accord
       (cl-user::IntVarList_add notesUpperVoice (cl-user::IntVarList_getVar tempChord (- npts 1))) 

       ;contrainte d'ordonnancement des notes d'un accord (casse la symmetrie, et de plus les renversements d'accords ne sont pas pris en compte car les intervalles redoubles ne sont pas pris en compte)
       
       (cl-user::rel_onIVA_default sp (cl-user::IntVarList_get tempChord) :IRT_LE)
       
       ;contraintes intervalles verticaux

       ;retrait des intervalles interdits et imposition de borne superieur et inferieur pour les intervalles
       (loop for x from 0 to (- npts 2) do
       	
       	;liste des coefficients de l'expression reguliere exprimee a l'aide de la contrainte linear
       	 (setq coeffList (cl-user::new_IntList_sizeAndDefaultValue npts 0))
       	 ;les deux notes qu'on veut contraindre ont pour coefficient -1 et 1, les autres 0
       	 (cl-user::IntList_setVar coeffList x -1)
       	 (cl-user::IntList_setVar coeffList (+ x 1) 1)
         
         ;retrait des intervalles interdits
          (dolist (tempForbidInter forbiddenVerticalIntervals nil)
            (cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get tempChord) :IRT_NQ tempForbidInter)
            )

               ;imposition de bornes superieur et inferieur pour les intervalles
		(cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get tempChord) :IRT_GQ (first idst))
		(cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get tempChord) :IRT_LQ (first (last idst)))
 
            )
       

       )

   
      ; contraintes intervalles horizontaux
    (loop for x from 0 to (- nobj 2) do
       	
       	;liste des coefficients de l'expression reguliere exprimee a l'aide de la contrainte linear
        	 (setq coeffList (cl-user::new_IntList_sizeAndDefaultValue nobj 0))
        	 ;les deux notes qu'on veut contraindre ont pour coefficient -1 et 1, les autres 0 
        	 (cl-user::IntList_setVar coeffList x -1)
        	 (cl-user::IntList_setVar coeffList (+ x 1) 1)
                 
                 ;retrait des intervalles interdits
                 (dolist (tempForbidInter forbiddenHorizontalIntervals nil)
                   (cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get notesUpperVoice) :IRT_NQ tempForbidInter)
                   )
 		
             ;imposition de bornes superieur et inferieur pour les intervalles
             (cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get notesUpperVoice) :IRT_GQ (first xdst))
             (cl-user::linear_onIntArgsAndIVAAndInt_default sp (cl-user::IntList_get coeffList) (cl-user::IntVarList_get notesUpperVoice) :IRT_LQ (first (last xdst)))
  
           )


	;resolution du MCSP

    (setq solVec (cl-user::GlSpace_createGlSpaceVector sp))
        
        
	(cl-user::GlSpace_branch sp)
	(cl-user::GlSpace_run sp 1 solVec)

        ;recupere le premier espace solution
        (setq solSpace (cl-user::GlSpace_getGlSpaceFromVector sp solVec 0))
        
        ; enregistrement de la solution dans un format qu'OpenMusic peut utiliser.
	(setq sol nil)
        (dolist (tempChord chords nil)
          
          (setq tempSolChord nil)
          (loop for x from 0 to (- npts 1) do
           
                
  		(setq tempSolChord (cons (* (cl-user::IntVar_val (cl-user::GlSpace_getIntVar solSpace (cl-user::IntVarList_getIndexOfAVarInVector tempChord x)) ) 100) tempSolChord ))
                )
          (setq sol (cons (reverse tempSolChord) sol))
          )

  	(setq sol (reverse sol) )


 )  
 )