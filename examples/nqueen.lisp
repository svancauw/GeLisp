;load GeLisp
(load "/Users/saschavancauwelaert/Documents/EPL/Memoire/gelisp/setup.lisp")

(defun n-queens (n)

  ;GlSpace creation
  (setq sp (new_GlSpace))

  ; declare the array of decision variables
  (setq queen (new_IntVarList_minmax sp n 0 (- n 1)))

  ;create IntArgs objects, useful for the linear constraint (linear expressions haven't been interfaced)
  (setq intlist1 (new_IntList_sizeAndStartAndInc n 0 1))
  (setq intlist2 (new_IntList_sizeAndStartAndInc n 0 -1))

  ; post all different constraint on queen
  (distinct_default sp (IntVarList_get queen))
  (distinct_constant_added_to_var_default sp (IntList_get intlist1) (IntVarList_get queen))
  (distinct_constant_added_to_var_default sp (IntList_get intlist2) (IntVarList_get queen))

  ;branch on all variables with default branchers of GeLisp
  (GlSpace_branch sp)

  ;create a vector of GlSpaces to save the desired number of solutions (allows to use the values assigned to the different variables afterwards)
  (setq v (GlSpace_createGlSpaceVector sp))

  ;do the search for one solution and save it in the vector
  (GlSpace_run sp 1 v)

)