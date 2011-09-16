
;load GeLisp
(load "/Users/saschavancauwelaert/Documents/EPL/Memoire/gelisp/setup.lisp")

(defun allint ()

    ;GlSpace creation
    (setq sp (new_GlSpace))

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;decision variables;;;;;;;;;;;;;;;;;;;;;;;;;;
    (setq pitchClasses (new_IntVarList_minmax sp 12 0 11))
    (setq intervals (new_IntVarList_minmax sp 11 1 11))

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;auxiliary variables;;;;;;;;;;;;;;;;;;;;;;;;;

    ; only used for mod divisor
    (setq divisor (GlSpace_newIntVar_minmax sp 12 12)) 
    ; only used to express the mod constraint. It will contains the true pitch differences.
    (setq diffpitch (new_IntVarList_minmax sp 11 -11 11)) 
    ;used because domain must be shifted because Gecode doesn't manage modulo with negative dividend
    (setq diffpitchshifted (new_IntVarList_minmax sp 11 1 23)) 
    
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;constraints;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

    ;coeff used to shift pitch differences
    (setq coeffListForShift (new_IntList_sizeAndDefaultValue 2 1))

    ;inversionalEquivalentInterval
    (loop for x from 0 to 10 do

	  ;establish needed coefficients
	  (setq coeffList (new_IntList_sizeAndDefaultValue 12 0))
	  (IntList_setVar coeffList x -1)
	  (IntList_setVar coeffList (+ x 1) 1)
	  
	  ;diffpitch(i) = pitchClasses(i+1) - pitchClasses(i)
	  (linear_onIntArgsAndIVAAndIntVar_default sp (IntList_get coeffList) (IntVarList_get pitchClasses) :IRT_EQ (IntVarList_getVar diffpitch x)) 

	  ;diffpitchshifted(i) = diffpitch(i) + 12
	  (setq tempVarList (new_IntVarList))
	  (IntVarList_add tempVarList (IntVarList_getVar diffpitch x)) 
	  (IntVarList_add tempVarList divisor)
	  (linear_onIntArgsAndIVAAndIntVar_default sp (IntList_get coeffListForShift) (IntVarList_get tempVarList) :IRT_EQ (IntVarList_getVar diffpitchshifted x))

	  ;intervals(i) = diffpitchshifted(i) mod 12
	  (mod_default sp (IntVarList_getVar diffpitchshifted x) divisor (IntVarList_getVar intervals x))

	  ;additionnal constraint to have a symmetric serie : intervals(i) + intervals(11 - 1 -i) = 12
	  (setq tempVarList (new_IntVarList))
	  (IntVarList_add tempVarList (IntVarList_getVar intervals x)) 
	  (IntVarList_add tempVarList (IntVarList_getVar intervals (- 10 x)))
	  (linear_onIntArgsAndIVAAndIntVar_default sp (IntList_get coeffListForShift) (IntVarList_get tempVarList) :IRT_EQ divisor)
 
    )

    ;distinctPitchClasses
    (distinct_default sp (IntVarList_get pitchClasses))
    
    ;distinctIntervals
    (distinct_default sp (IntVarList_get intervals))

    ;symmetry break (avoid transposition) : pitchClasses(0) = 0
    (dom_onIntVar_default sp (IntVarList_getVar pitchClasses 0) 0)

    ;redundant constraint (allows to prune more) :  pitchClasses(11) = 6
    (dom_onIntVar_default sp (IntVarList_getVar pitchClasses 11) 6)
    

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;branching and search;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    
    (GlSpace_branch sp)
    (setq solVec (GlSpace_createGlSpaceVector sp))
    (GlSpace_run sp 1 solVec)

)