(lambda (groundRelparam nbSol numSol) 

(progn

  ;create a ground relation from the paraml list passed as arguments

  (setq tupleList (cl-user::getTuplesFromScoreParam groundRelparam))
  (setq lubC (cl-user::createGroundRelFromTupleList tupleList))
  (setq glbC (cl-user::createGroundRelFromTupleList tupleList))
  

  ;space
    (setq sp (cl-user::new_GlSpace))

    ;ground relations
    
    (setq glbA (cl-user::new_GRelation 3))
    (setq lubA (cl-user::createBoundedFullGroundRelation '(64 78 0 7 1 1)))

    (setq glbB (cl-user::new_GRelation 3))
    (setq lubB (cl-user::createBoundedFullGroundRelation '(64 78 0 7 1 1)))

    ;create the decision variable
    (setq relA (cl-user::GlSpace_newCPRelVar sp glbA lubA))
    (setq relB (cl-user::GlSpace_newCPRelVar sp glbB lubB))
    (setq relC (cl-user::GlSpace_newCPRelVar sp glbC lubC))

    (cl-user::union_rel sp relA relB relC)

    (cl-user::disjoint sp relA relB)

    (cl-user::glspace_debug sp)

    

    (cl-user::GlSpace_branch sp)
	
    (setq v (cl-user::GlSpace_createGlSpaceVector sp))
	
    (cl-user::GlSpace_run sp nbSol v)
	
    (setq sol (cl-user::GlSpace_getGlSpaceFromVector sp v numSol))

    ;(cl-user::GlSpace_debug sol)

    (list (cl-user::getScoreParamFromSol 3 sol relA) (cl-user::getScoreParamFromSol 3 sol relB))
    
   
    

)
)