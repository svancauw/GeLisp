

;;;SWIG wrapper code starts here

(cl:defmacro defanonenum (&body enums)
   "Converts anonymous enums to defconstants."
  `(cl:progn ,@(cl:loop for value in enums
                        for index = 0 then (cl:1+ index)
                        when (cl:listp value) do (cl:setf index (cl:second value)
                                                          value (cl:first value))
                        collect `(cl:defconstant ,value ,index))))

(cl:eval-when (:compile-toplevel :load-toplevel)
  (cl:unless (cl:fboundp 'swig-lispify)
    (cl:defun swig-lispify (name flag cl:&optional (package cl:*package*))
      (cl:labels ((helper (lst last rest cl:&aux (c (cl:car lst)))
                    (cl:cond
                      ((cl:null lst)
                       rest)
                      ((cl:upper-case-p c)
                       (helper (cl:cdr lst) 'upper
                               (cl:case last
                                 ((lower digit) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:lower-case-p c)
                       (helper (cl:cdr lst) 'lower (cl:cons (cl:char-upcase c) rest)))
                      ((cl:digit-char-p c)
                       (helper (cl:cdr lst) 'digit 
                               (cl:case last
                                 ((upper lower) (cl:list* c #\- rest))
                                 (cl:t (cl:cons c rest)))))
                      ((cl:char-equal c #\_)
                       (helper (cl:cdr lst) '_ (cl:cons #\- rest)))
                      (cl:t
                       (cl:error "Invalid character: ~A" c)))))
        (cl:let ((fix (cl:case flag
                        ((constant enumvalue) "+")
                        (variable "*")
                        (cl:t ""))))
          (cl:intern
           (cl:concatenate
            'cl:string
            fix
            (cl:nreverse (helper (cl:concatenate 'cl:list name) cl:nil cl:nil))
            fix)
           package))))))

;;;SWIG wrapper code ends here


(cffi:defcfun ("_wrap_new_GlSpace" new_GlSpace) :pointer)

(cffi:defcfun ("_wrap_delete_GlSpace" delete_GlSpace) :void
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_newIntVar_minmax" GlSpace_newIntVar_minmax) :pointer
  (self :pointer)
  (lb :int)
  (ub :int))

(cffi:defcfun ("_wrap_GlSpace_newIntVar_fromset" GlSpace_newIntVar_fromset) :pointer
  (self :pointer)
  (d :pointer))

(cffi:defcfun ("_wrap_GlSpace_newBoolVar" GlSpace_newBoolVar) :pointer
  (self :pointer)
  (lb :int)
  (ub :int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_home" GlSpace_newSetVar_home) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_minmax_2option" GlSpace_newSetVar_minmax_minmax_2option) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_minmax_1option" GlSpace_newSetVar_minmax_minmax_1option) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_minmax_default" GlSpace_newSetVar_minmax_minmax_default) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_minmax_2option" GlSpace_newSetVar_set_minmax_2option) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_minmax_1option" GlSpace_newSetVar_set_minmax_1option) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_minmax_default" GlSpace_newSetVar_set_minmax_default) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_set_2option" GlSpace_newSetVar_minmax_set_2option) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_set_1option" GlSpace_newSetVar_minmax_set_1option) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_minmax_set_default" GlSpace_newSetVar_minmax_set_default) :pointer
  (self :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_set_2option" GlSpace_newSetVar_set_set_2option) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_set_1option" GlSpace_newSetVar_set_set_1option) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_GlSpace_newSetVar_set_set_default" GlSpace_newSetVar_set_set_default) :pointer
  (self :pointer)
  (glbD :pointer)
  (lubD :pointer))

(cffi:defcfun ("_wrap_GlSpace_newCPRelVar" GlSpace_newCPRelVar) :pointer
  (self :pointer)
  (l :pointer)
  (u :pointer))

(cffi:defcfun ("_wrap_GlSpace_status" GlSpace_status) :string
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_print" GlSpace_print) :void
  (self :pointer)
  (os :pointer))

(cffi:defcfun ("_wrap_GlSpace_debug" GlSpace_debug) :string
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_branch" GlSpace_branch) :void
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_run" GlSpace_run) :string
  (self :pointer)
  (nbSolutions :int)
  (solutionsVector :pointer))

(cffi:defcfun ("_wrap_GlSpace_copy" GlSpace_copy) :pointer
  (self :pointer)
  (share :pointer))

(cffi:defcfun ("_wrap_GlSpace_getIntVar" GlSpace_getIntVar) :pointer
  (self :pointer)
  (indexInVector :int))

(cffi:defcfun ("_wrap_GlSpace_getBoolVar" GlSpace_getBoolVar) :pointer
  (self :pointer)
  (indexInVector :int))

(cffi:defcfun ("_wrap_GlSpace_getSetVar" GlSpace_getSetVar) :pointer
  (self :pointer)
  (indexInVector :int))

(cffi:defcfun ("_wrap_GlSpace_getCPRelVar" GlSpace_getCPRelVar) :pointer
  (self :pointer)
  (indexInVector :int))

(cffi:defcfun ("_wrap_GlSpace_createGlSpaceVector" GlSpace_createGlSpaceVector) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_GlSpace_getGlSpaceFromVector" GlSpace_getGlSpaceFromVector) :pointer
  (self :pointer)
  (vec :pointer)
  (index :int))

(cffi:defcfun ("_wrap_new_GlIntVar" new_GlIntVar) :pointer)

(cffi:defcfun ("_wrap_new_GlIntVar_minmax" new_GlIntVar_minmax) :pointer
  (home :pointer)
  (lb :int)
  (ub :int))

(cffi:defcfun ("_wrap_new_GlIntVar_set" new_GlIntVar_set) :pointer
  (home :pointer)
  (d :pointer))

(cffi:defcfun ("_wrap_GlIntVar_getIndexInVector" GlIntVar_getIndexInVector) :int
  (self :pointer))

(cffi:defcfun ("_wrap_GlIntVar_setIndexInVector" GlIntVar_setIndexInVector) :void
  (self :pointer)
  (newIndex :int))

(cffi:defcfun ("_wrap_delete_GlIntVar" delete_GlIntVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_GlBoolVar" new_GlBoolVar) :pointer)

(cffi:defcfun ("_wrap_new_GlBoolVar_minmax" new_GlBoolVar_minmax) :pointer
  (home :pointer)
  (lb :int)
  (ub :int))

(cffi:defcfun ("_wrap_GlBoolVar_getIndexInVector" GlBoolVar_getIndexInVector) :int
  (self :pointer))

(cffi:defcfun ("_wrap_GlBoolVar_setIndexInVector" GlBoolVar_setIndexInVector) :void
  (self :pointer)
  (newIndex :int))

(cffi:defcfun ("_wrap_delete_GlBoolVar" delete_GlBoolVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_GlSetVar" new_GlSetVar) :pointer)

(cffi:defcfun ("_wrap_new_GlSetVar_home" new_GlSetVar_home) :pointer
  (home :pointer))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_minmax_2option" new_GlSetVar_minmax_minmax_2option) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_minmax_1option" new_GlSetVar_minmax_minmax_1option) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_minmax_default" new_GlSetVar_minmax_minmax_default) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_new_GlSetVar_set_minmax_2option" new_GlSetVar_set_minmax_2option) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_set_minmax_1option" new_GlSetVar_set_minmax_1option) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_set_minmax_default" new_GlSetVar_set_minmax_default) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_set_2option" new_GlSetVar_minmax_set_2option) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_set_1option" new_GlSetVar_minmax_set_1option) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_minmax_set_default" new_GlSetVar_minmax_set_default) :pointer
  (home :pointer)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer))

(cffi:defcfun ("_wrap_new_GlSetVar_set_set_2option" new_GlSetVar_set_set_2option) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_set_set_1option" new_GlSetVar_set_set_1option) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_GlSetVar_set_set_default" new_GlSetVar_set_set_default) :pointer
  (home :pointer)
  (glbD :pointer)
  (lubD :pointer))

(cffi:defcfun ("_wrap_GlSetVar_getIndexInVector" GlSetVar_getIndexInVector) :int
  (self :pointer))

(cffi:defcfun ("_wrap_GlSetVar_setIndexInVector" GlSetVar_setIndexInVector) :void
  (self :pointer)
  (newIndex :int))

(cffi:defcfun ("_wrap_delete_GlSetVar" delete_GlSetVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_GlCPRelVar" new_GlCPRelVar) :pointer)

(cffi:defcfun ("_wrap_new_GlCPRelVar_grelation" new_GlCPRelVar_grelation) :pointer
  (home :pointer)
  (l :pointer)
  (u :pointer))

(cffi:defcfun ("_wrap_GlCPRelVar_getIndexInVector" GlCPRelVar_getIndexInVector) :int
  (self :pointer))

(cffi:defcfun ("_wrap_GlCPRelVar_setIndexInVector" GlCPRelVar_setIndexInVector) :void
  (self :pointer)
  (newIndex :int))

(cffi:defcfun ("_wrap_delete_GlCPRelVar" delete_GlCPRelVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_IntVarList" new_IntVarList) :pointer)

(cffi:defcfun ("_wrap_new_IntVarList_minmax" new_IntVarList_minmax) :pointer
  (home :pointer)
  (n :int)
  (min :int)
  (max :int))

(cffi:defcfun ("_wrap_new_IntVarList_set" new_IntVarList_set) :pointer
  (home :pointer)
  (n :int)
  (d :pointer))

(cffi:defcfun ("_wrap_IntVarList_size" IntVarList_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVarList_add" IntVarList_add) :void
  (self :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_IntVarList_get" IntVarList_get) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_IntVarList_getVar" IntVarList_getVar) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_IntVarList_getIndexOfAVarInVector" IntVarList_getIndexOfAVarInVector) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_delete_IntVarList" delete_IntVarList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_BoolVarList_minmax" new_BoolVarList_minmax) :pointer
  (home :pointer)
  (n :int)
  (min :int)
  (max :int))

(cffi:defcfun ("_wrap_BoolVarList_size" BoolVarList_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVarList_add" BoolVarList_add) :void
  (self :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_BoolVarList_get" BoolVarList_get) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVarList_getVar" BoolVarList_getVar) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_BoolVarList_getIndexOfAVarInVector" BoolVarList_getIndexOfAVarInVector) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_delete_BoolVarList" delete_BoolVarList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_SetVarList_home" new_SetVarList_home) :pointer
  (home :pointer)
  (n :int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_minmax_2option" new_SetVarList_minmax_minmax_2option) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_minmax_1option" new_SetVarList_minmax_minmax_1option) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_minmax_default" new_SetVarList_minmax_minmax_default) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_new_SetVarList_set_minmax_2option" new_SetVarList_set_minmax_2option) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_set_minmax_1option" new_SetVarList_set_minmax_1option) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_set_minmax_default" new_SetVarList_set_minmax_default) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubMin :int)
  (lubMax :int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_set_2option" new_SetVarList_minmax_set_2option) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_set_1option" new_SetVarList_minmax_set_1option) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_minmax_set_default" new_SetVarList_minmax_set_default) :pointer
  (home :pointer)
  (n :int)
  (glbMin :int)
  (glbMax :int)
  (lubD :pointer))

(cffi:defcfun ("_wrap_new_SetVarList_set_set_2option" new_SetVarList_set_set_2option) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int)
  (cardMax :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_set_set_1option" new_SetVarList_set_set_1option) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubD :pointer)
  (cardMin :unsigned-int))

(cffi:defcfun ("_wrap_new_SetVarList_set_set_default" new_SetVarList_set_set_default) :pointer
  (home :pointer)
  (n :int)
  (glbD :pointer)
  (lubD :pointer))

(cffi:defcfun ("_wrap_SetVarList_size" SetVarList_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVarList_add" SetVarList_add) :void
  (self :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_SetVarList_get" SetVarList_get) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_SetVarList_getVar" SetVarList_getVar) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_SetVarList_getIndexOfAVarInVector" SetVarList_getIndexOfAVarInVector) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_delete_SetVarList" delete_SetVarList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_delete_CPRelVarList" delete_CPRelVarList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_IntList_size" new_IntList_size) :pointer
  (n :int))

(cffi:defcfun ("_wrap_new_IntList_sizeAndDefaultValue" new_IntList_sizeAndDefaultValue) :pointer
  (n :int)
  (defaultValue :int))

(cffi:defcfun ("_wrap_new_IntList_sizeAndStartAndInc" new_IntList_sizeAndStartAndInc) :pointer
  (n :int)
  (start :int)
  (inc :int))

(cffi:defcfun ("_wrap_IntList_get" IntList_get) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_IntList_size" IntList_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntList_getVar" IntList_getVar) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_IntList_setVar" IntList_setVar) :void
  (self :pointer)
  (i :int)
  (value :int))

(cffi:defcfun ("_wrap_IntList_print" IntList_print) :string
  (self :pointer))

(cffi:defcfun ("_wrap_delete_IntList" delete_IntList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_IntSetList" new_IntSetList) :pointer
  (n :int)
  (min :int)
  (max :int))

(cffi:defcfun ("_wrap_IntSetList_get" IntSetList_get) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_IntSetList_getElement" IntSetList_getElement) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_delete_IntSetList" delete_IntSetList) :void
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_min" IntVar_min) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_max" IntVar_max) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_med" IntVar_med) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_val" IntVar_val) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_size" IntVar_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_width" IntVar_width) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_regret_min" IntVar_regret_min) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_regret_max" IntVar_regret_max) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_range" IntVar_range) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_assigned" IntVar_assigned) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_IntVar_in" IntVar_in) :boolean
  (self :pointer)
  (n :int))

(cffi:defcfun ("_wrap_new_IntVar" new_IntVar) :pointer)

(cffi:defcfun ("_wrap_delete_IntVar" delete_IntVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_min" BoolVar_min) :int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_max" BoolVar_max) :int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_med" BoolVar_med) :int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_val" BoolVar_val) :int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_size" BoolVar_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_width" BoolVar_width) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_regret_min" BoolVar_regret_min) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_regret_max" BoolVar_regret_max) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_range" BoolVar_range) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_in" BoolVar_in) :boolean
  (self :pointer)
  (n :int))

(cffi:defcfun ("_wrap_BoolVar_zero" BoolVar_zero) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_one" BoolVar_one) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_BoolVar_none" BoolVar_none) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_new_BoolVar" new_BoolVar) :pointer)

(cffi:defcfun ("_wrap_delete_BoolVar" delete_BoolVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_new_IntSet" new_IntSet) :pointer)

(cffi:defcfun ("_wrap_new_IntSet_minmax" new_IntSet_minmax) :pointer
  (n :int)
  (m :int))

(cffi:defcfun ("_wrap_new_IntSet_n_element_of_array" new_IntSet_n_element_of_array) :pointer
  (r :pointer)
  (n :int))

(cffi:defcfun ("_wrap_new_IntSet_n_element_of_array_minmax" new_IntSet_n_element_of_array_minmax) :pointer
  (r :pointer)
  (n :int))

(cffi:defcfun ("_wrap_IntSet_ranges" IntSet_ranges) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntSet_min_index" IntSet_min_index) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_IntSet_max_index" IntSet_max_index) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_IntSet_width_index" IntSet_width_index) :unsigned-int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_IntSet_in" IntSet_in) :boolean
  (self :pointer)
  (n :int))

(cffi:defcfun ("_wrap_IntSet_size" IntSet_size) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntSet_width" IntSet_width) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_IntSet_min" IntSet_min) :int
  (self :pointer))

(cffi:defcfun ("_wrap_IntSet_max" IntSet_max) :int
  (self :pointer))

(cffi:defcvar ("IntSet_empty" IntSet_empty)
 :pointer)

(cffi:defcfun ("_wrap_delete_IntSet" delete_IntSet) :void
  (self :pointer))

(cffi:defcenum IntRelType
	:IRT_EQ
	:IRT_NQ
	:IRT_LQ
	:IRT_LE
	:IRT_GQ
	:IRT_GR)

(cffi:defcenum BoolOpType
	:BOT_AND
	:BOT_OR
	:BOT_IMP
	:BOT_EQV
	:BOT_XOR)

(cffi:defcenum IntConLevel
	:ICL_VAL
	:ICL_BND
	:ICL_DOM
	:ICL_DEF)

(cffi:defcfun ("_wrap_dom_onIntVar_option" dom_onIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVar_default" dom_onIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (n :int))

(cffi:defcfun ("_wrap_dom_onIVA_option" dom_onIVA_option) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIVA_default" dom_onIVA_default) :void
  (home :pointer)
  (x :pointer)
  (n :int))

(cffi:defcfun ("_wrap_dom_onIntVarWithBounds_option" dom_onIntVarWithBounds_option) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVarWithBounds_default" dom_onIntVarWithBounds_default) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int))

(cffi:defcfun ("_wrap_dom_onIVAWithBounds_option" dom_onIVAWithBounds_option) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIVAWithBounds_default" dom_onIVAWithBounds_default) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntSet_option" dom_onIntVarAndIntSet_option) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntSet_default" dom_onIntVarAndIntSet_default) :void
  (home :pointer)
  (x :pointer)
  (s :pointer))

(cffi:defcfun ("_wrap_dom_onIVAAndIntSet_option" dom_onIVAAndIntSet_option) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIVAAndIntSet_default" dom_onIVAAndIntSet_default) :void
  (home :pointer)
  (x :pointer)
  (s :pointer))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntAndBoolVar_option" dom_onIntVarAndIntAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntAndBoolVar_default" dom_onIntVarAndIntAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (b :pointer))

(cffi:defcfun ("_wrap_dom_onIntVarAndBoolVarWithBounds_option" dom_onIntVarAndBoolVarWithBounds_option) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVarAndBoolVarWithBounds_default" dom_onIntVarAndBoolVarWithBounds_default) :void
  (home :pointer)
  (x :pointer)
  (l :int)
  (m :int)
  (b :pointer))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntSetAndBoolVarWithBounds_option" dom_onIntVarAndIntSetAndBoolVarWithBounds_option) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_dom_onIntVarAndIntSetAndBoolVarWithBounds_default" dom_onIntVarAndIntSetAndBoolVarWithBounds_default) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onIntVar_option" rel_onIntVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIntVar_default" rel_onIntVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndIVA_option" rel_onIntVarAndIVA_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIntVarAndIVA_default" rel_onIntVarAndIVA_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndInt_option" rel_onIntVarAndInt_option) :void
  (arg0 :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIntVarAndInt_default" rel_onIntVarAndInt_default) :void
  (arg0 :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_rel_onIVAAndInt_option" rel_onIVAAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIVAAndInt_default" rel_onIVAAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_rel_on2IntVarAndBoolVar_option" rel_on2IntVarAndBoolVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on2IntVarAndBoolVar_default" rel_on2IntVarAndBoolVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndIntAndBoolVar_option" rel_onIntVarAndIntAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIntVarAndIntAndBoolVar_default" rel_onIntVarAndIntAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onIVA_option" rel_onIVA_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIVA_default" rel_onIVA_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType))

(cffi:defcfun ("_wrap_rel_onIVAAndIVA_option" rel_onIVAAndIVA_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onIVAAndIVA_default" rel_onIVAAndIVA_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_on2BoolVar_option" rel_on2BoolVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on2BoolVar_default" rel_on2BoolVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer))

(cffi:defcfun ("_wrap_rel_on3BoolVar_option" rel_on3BoolVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on3BoolVar_default" rel_on3BoolVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (r IntRelType)
  (x1 :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onBVAAndBoolVar_option" rel_onBVAAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBVAAndBoolVar_default" rel_onBVAAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onBoolVarAndInt_option" rel_onBoolVarAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBoolVarAndInt_default" rel_onBoolVarAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int))

(cffi:defcfun ("_wrap_rel_on2BoolVarAndInt_option" rel_on2BoolVarAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on2BoolVarAndInt_default" rel_on2BoolVarAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onBVAAndInt_option" rel_onBVAAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBVAAndInt_default" rel_onBVAAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (n :int))

(cffi:defcfun ("_wrap_rel_on2BVA_option" rel_on2BVA_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on2BVA_default" rel_on2BVA_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onBVA_option" rel_onBVA_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBVA_default" rel_onBVA_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType))

(cffi:defcfun ("_wrap_rel_on3BoolVarWithBoolOpType_option" rel_on3BoolVarWithBoolOpType_option) :void
  (home :pointer)
  (x0 :pointer)
  (o BoolOpType)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on3BoolVarWithBoolOpType_default" rel_on3BoolVarWithBoolOpType_default) :void
  (home :pointer)
  (x0 :pointer)
  (o BoolOpType)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_rel_on2BoolVarAndIntWithBoolOpType_option" rel_on2BoolVarAndIntWithBoolOpType_option) :void
  (home :pointer)
  (x0 :pointer)
  (o BoolOpType)
  (x1 :pointer)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_on2BoolVarAndIntWithBoolOpType_default" rel_on2BoolVarAndIntWithBoolOpType_default) :void
  (home :pointer)
  (x0 :pointer)
  (o BoolOpType)
  (x1 :pointer)
  (n :int))

(cffi:defcfun ("_wrap_rel_onBVAAndBoolVarWithBoolOpType_option" rel_onBVAAndBoolVarWithBoolOpType_option) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBVAAndBoolVarWithBoolOpType_default" rel_onBVAAndBoolVarWithBoolOpType_default) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onBVAAndIntWithBoolOpType_option" rel_onBVAAndIntWithBoolOpType_option) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_rel_onBVAAndIntWithBoolOpType_default" rel_onBVAAndIntWithBoolOpType_default) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (n :int))

(cffi:defcfun ("_wrap_clause_onBoolVar_option" clause_onBoolVar_option) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_clause_onBoolVar_default" clause_onBoolVar_default) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_clause_onInt_option" clause_onInt_option) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer)
  (n :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_clause_onInt_default" clause_onInt_default) :void
  (home :pointer)
  (o BoolOpType)
  (x :pointer)
  (y :pointer)
  (n :int))

(cffi:defcfun ("_wrap_element_onIVAAnd2IntVar_option" element_onIVAAnd2IntVar_option) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onIVAAnd2IntVar_default" element_onIVAAnd2IntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :pointer))

(cffi:defcfun ("_wrap_element_onIVAAndIntVarAndInt_option" element_onIVAAndIntVarAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onIVAAndIntVarAndInt_default" element_onIVAAndIntVarAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :int))

(cffi:defcfun ("_wrap_element_onBVAAndIntVarAndBoolVar_option" element_onBVAAndIntVarAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onBVAAndIntVarAndBoolVar_default" element_onBVAAndIntVarAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :pointer))

(cffi:defcfun ("_wrap_element_onBVAAndIntVarAndInt_option" element_onBVAAndIntVarAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onBVAAndIntVarAndInt_default" element_onBVAAndIntVarAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (y0 :pointer)
  (y1 :int))

(cffi:defcfun ("_wrap_element_onIVAAnd3IntVarAnd2Int_option" element_onIVAAnd3IntVarAnd2Int_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onIVAAnd3IntVarAnd2Int_default" element_onIVAAnd3IntVarAnd2Int_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onBVAAnd2IntVarAnd2IntAndBoolVar_option" element_onBVAAnd2IntVarAnd2IntAndBoolVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_element_onBVAAnd2IntVarAnd2IntAndBoolVar_default" element_onBVAAnd2IntVarAnd2IntAndBoolVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer))

(cffi:defcfun ("_wrap_distinct_option" distinct_option) :void
  (home :pointer)
  (x :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_distinct_default" distinct_default) :void
  (home :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_distinct_constant_added_to_var_option" distinct_constant_added_to_var_option) :void
  (home :pointer)
  (n :pointer)
  (x :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_distinct_constant_added_to_var_default" distinct_constant_added_to_var_default) :void
  (home :pointer)
  (n :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_channel_onIVAAndIVA_option" channel_onIVAAndIVA_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_channel_onIVAAndIVA_default" channel_onIVAAndIVA_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_channel_on2IVAAnd2IntVar_option" channel_on2IVAAnd2IntVar_option) :void
  (home :pointer)
  (x :pointer)
  (xoff :int)
  (y :pointer)
  (yoff :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_channel_on2IVAAnd2IntVar_default" channel_on2IVAAnd2IntVar_default) :void
  (home :pointer)
  (x :pointer)
  (xoff :int)
  (y :pointer)
  (yoff :int))

(cffi:defcfun ("_wrap_channel_onBoolVarAndIntVar_option" channel_onBoolVarAndIntVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_channel_onBoolVarAndIntVar_default" channel_onBoolVarAndIntVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer))

(cffi:defcfun ("_wrap_channel_onIntVarAndBoolVar_option" channel_onIntVarAndBoolVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_channel_onIntVarAndBoolVar_default" channel_onIntVarAndBoolVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer))

(cffi:defcfun ("_wrap_channel_onBVAAndIntVar_2option" channel_onBVAAndIntVar_2option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (o :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_channel_onBVAAndIntVar_1option" channel_onBVAAndIntVar_1option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (o :int))

(cffi:defcfun ("_wrap_channel_onBVAAndIntVar_default" channel_onBVAAndIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_sorted_onIVAAndIVA_option" sorted_onIVAAndIVA_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sorted_onIVAAndIVA_default" sorted_onIVAAndIVA_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_sorted_on3IVA_option" sorted_on3IVA_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sorted_on3IVA_default" sorted_on3IVA_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_count_onIVAAnd2Int_option" count_onIVAAnd2Int_option) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (r IntRelType)
  (m :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAnd2Int_default" count_onIVAAnd2Int_default) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (r IntRelType)
  (m :int))

(cffi:defcfun ("_wrap_count_onIVAAndIntVarAndInt_option" count_onIVAAndIntVarAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (m :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndIntVarAndInt_default" count_onIVAAndIntVarAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (m :int))

(cffi:defcfun ("_wrap_count_onIVAAndIntArgsAndInt_option" count_onIVAAndIntArgsAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (m :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndIntArgsAndInt_default" count_onIVAAndIntArgsAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (m :int))

(cffi:defcfun ("_wrap_count_onIVAAndIntAndIntVar_option" count_onIVAAndIntAndIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (r IntRelType)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndIntAndIntVar_default" count_onIVAAndIntAndIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (n :int)
  (r IntRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_count_onIVAAnd2IntVar_option" count_onIVAAnd2IntVar_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAnd2IntVar_default" count_onIVAAnd2IntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_count_onIVAAndIntArgsAndIntVar_option" count_onIVAAndIntArgsAndIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (z :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndIntArgsAndIntVar_default" count_onIVAAndIntArgsAndIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (r IntRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_count_on2IVA_option" count_on2IVA_option) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_on2IVA_default" count_on2IVA_default) :void
  (home :pointer)
  (x :pointer)
  (c :pointer))

(cffi:defcfun ("_wrap_count_onIVAAndISA_option" count_onIVAAndISA_option) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndISA_default" count_onIVAAndISA_default) :void
  (home :pointer)
  (x :pointer)
  (c :pointer))

(cffi:defcfun ("_wrap_count_on2IVAAndIntArgs_option" count_on2IVAAndIntArgs_option) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_on2IVAAndIntArgs_default" count_on2IVAAndIntArgs_default) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer))

(cffi:defcfun ("_wrap_count_onIVAAndISAIntArgs_option" count_onIVAAndISAIntArgs_option) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndISAIntArgs_default" count_onIVAAndISAIntArgs_default) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer))

(cffi:defcfun ("_wrap_count_onIVAAndIntSetIntArgs_option" count_onIVAAndIntSetIntArgs_option) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_count_onIVAAndIntSetIntArgs_default" count_onIVAAndIntSetIntArgs_default) :void
  (home :pointer)
  (x :pointer)
  (c :pointer)
  (v :pointer))

(cffi:defcfun ("_wrap_sequence_IVA_option" sequence_IVA_option) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (q :int)
  (l :int)
  (u :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sequence_IVA_default" sequence_IVA_default) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (q :int)
  (l :int)
  (u :int))

(cffi:defcfun ("_wrap_sequence_BVA_option" sequence_BVA_option) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (q :int)
  (l :int)
  (u :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sequence_BVA_default" sequence_BVA_default) :void
  (home :pointer)
  (x :pointer)
  (s :pointer)
  (q :int)
  (l :int)
  (u :int))

(cffi:defcfun ("_wrap_min_on3IntVar_option" min_on3IntVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_min_on3IntVar_default" min_on3IntVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_min_onIVAANDIntVar_option" min_onIVAANDIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_min_onIVAANDIntVar_default" min_onIVAANDIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_max_on3IntVar_option" max_on3IntVar_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_max_on3IntVar_default" max_on3IntVar_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_max_onIVAANDIntVar_option" max_onIVAANDIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_max_onIVAANDIntVar_default" max_onIVAANDIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_abs_option" abs_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_abs_default" abs_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer))

(cffi:defcfun ("_wrap_mult_option" mult_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_mult_default" mult_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_sqr_option" sqr_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sqr_default" sqr_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer))

(cffi:defcfun ("_wrap_sqrt_option" sqrt_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_sqrt_default" sqrt_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer))

(cffi:defcfun ("_wrap_divmod_option" divmod_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (x3 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_divmod_default" divmod_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (x3 :pointer))

(cffi:defcfun ("_wrap_div_option" div_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_div_default" div_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_mod_option" mod_option) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_mod_default" mod_default) :void
  (home :pointer)
  (x0 :pointer)
  (x1 :pointer)
  (x2 :pointer))

(cffi:defcfun ("_wrap_linear_onIVAAndInt_option" linear_onIVAAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIVAAndInt_default" linear_onIVAAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_linear_onIVAAndIntVar_option" linear_onIVAAndIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIVAAndIntVar_default" linear_onIVAAndIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_linear_onIVAAndIntAndBoolVar_option" linear_onIVAAndIntAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIVAAndIntAndBoolVar_default" linear_onIVAAndIntAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onIVAAndIntVarAndBoolVar_option" linear_onIVAAndIntVarAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIVAAndIntVarAndBoolVar_default" linear_onIVAAndIntVarAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndInt_option" linear_onIntArgsAndIVAAndInt_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndInt_default" linear_onIntArgsAndIVAAndInt_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntVar_option" linear_onIntArgsAndIVAAndIntVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntVar_default" linear_onIntArgsAndIVAAndIntVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntAndBoolVar_option" linear_onIntArgsAndIVAAndIntAndBoolVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntAndBoolVar_default" linear_onIntArgsAndIVAAndIntAndBoolVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntVarAndBoolVar_option" linear_onIntArgsAndIVAAndIntVarAndBoolVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndIVAAndIntVarAndBoolVar_default" linear_onIntArgsAndIVAAndIntVarAndBoolVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onBVAAndInt_option" linear_onBVAAndInt_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onBVAAndInt_default" linear_onBVAAndInt_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_linear_onBVAAndBoolVar_option" linear_onBVAAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onBVAAndBoolVar_default" linear_onBVAAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onBVAAndIntVar_option" linear_onBVAAndIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onBVAAndIntVar_default" linear_onBVAAndIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_linear_onBVAAndIntVarAndBoolVar_option" linear_onBVAAndIntVarAndBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onBVAAndIntVarAndBoolVar_default" linear_onBVAAndIntVarAndBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndInt_option" linear_onIntArgsAndBVAAndInt_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndInt_default" linear_onIntArgsAndBVAAndInt_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntAndBoolVar_option" linear_onIntArgsAndBVAAndIntAndBoolVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntAndBoolVar_default" linear_onIntArgsAndBVAAndIntAndBoolVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (c :int)
  (b :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntVar_option" linear_onIntArgsAndBVAAndIntVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntVar_default" linear_onIntArgsAndBVAAndIntVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntVarAndBoolVar_option" linear_onIntArgsAndBVAAndIntVarAndBoolVar_option) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer)
  (icl IntConLevel))

(cffi:defcfun ("_wrap_linear_onIntArgsAndBVAAndIntVarAndBoolVar_default" linear_onIntArgsAndBVAAndIntVarAndBoolVar_default) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (r IntRelType)
  (y :pointer)
  (b :pointer))

(cffi:defcenum IntVarBranch
	(:INT_VAR_NONE 0)
	:INT_VAR_RND
	:INT_VAR_DEGREE_MIN
	:INT_VAR_DEGREE_MAX
	:INT_VAR_AFC_MIN
	:INT_VAR_AFC_MAX
	:INT_VAR_MIN_MIN
	:INT_VAR_MIN_MAX
	:INT_VAR_MAX_MIN
	:INT_VAR_MAX_MAX
	:INT_VAR_SIZE_MIN
	:INT_VAR_SIZE_MAX
	:INT_VAR_SIZE_DEGREE_MIN
	:INT_VAR_SIZE_DEGREE_MAX
	:INT_VAR_SIZE_AFC_MIN
	:INT_VAR_SIZE_AFC_MAX
	:INT_VAR_REGRET_MIN_MIN
	:INT_VAR_REGRET_MIN_MAX
	:INT_VAR_REGRET_MAX_MIN
	:INT_VAR_REGRET_MAX_MAX)

(cffi:defcenum IntValBranch
	:INT_VAL_MIN
	:INT_VAL_MED
	:INT_VAL_MAX
	:INT_VAL_RND
	:INT_VAL_SPLIT_MIN
	:INT_VAL_SPLIT_MAX
	:INT_VAL_RANGE_MIN
	:INT_VAL_RANGE_MAX
	:INT_VALUES_MIN
	:INT_VALUES_MAX)

(cffi:defcfun ("_wrap_branch_onIVA_2option" branch_onIVA_2option) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch)
  (o_vars :pointer)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onIVA_1option" branch_onIVA_1option) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch)
  (o_vars :pointer))

(cffi:defcfun ("_wrap_branch_onIVA_default" branch_onIVA_default) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch))

(cffi:defcfun ("_wrap_branch_onIntVar_option" branch_onIntVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntValBranch)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onIntVar_default" branch_onIntVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntValBranch))

(cffi:defcfun ("_wrap_branch_onBVA_2option" branch_onBVA_2option) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch)
  (o_vars :pointer)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onBVA_1option" branch_onBVA_1option) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch)
  (o_vars :pointer))

(cffi:defcfun ("_wrap_branch_onBVA_default" branch_onBVA_default) :void
  (home :pointer)
  (x :pointer)
  (vars IntVarBranch)
  (vals IntValBranch))

(cffi:defcfun ("_wrap_branch_onBoolVar_option" branch_onBoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntValBranch)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onBoolVar_default" branch_onBoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntValBranch))

(cffi:defcenum IntAssign
	:INT_ASSIGN_MIN
	:INT_ASSIGN_MED
	:INT_ASSIGN_MAX
	:INT_ASSIGN_RND)

(cffi:defcfun ("_wrap_assign_IntVarArgs_option" assign_IntVarArgs_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_IntVarArgs_default" assign_IntVarArgs_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign))

(cffi:defcfun ("_wrap_assign_IntVar_option" assign_IntVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_IntVar_default" assign_IntVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign))

(cffi:defcfun ("_wrap_assign_BoolVarArgs_option" assign_BoolVarArgs_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_BoolVarArgs_default" assign_BoolVarArgs_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign))

(cffi:defcfun ("_wrap_assign_BoolVar_option" assign_BoolVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_BoolVar_default" assign_BoolVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals IntAssign))

(cffi:defcfun ("_wrap_SetVar_glbSize" SetVar_glbSize) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_lubSize" SetVar_lubSize) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_unknownSize" SetVar_unknownSize) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_cardMin" SetVar_cardMin) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_cardMax" SetVar_cardMax) :unsigned-int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_lubMin" SetVar_lubMin) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_lubMax" SetVar_lubMax) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_glbMin" SetVar_glbMin) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_glbMax" SetVar_glbMax) :int
  (self :pointer))

(cffi:defcfun ("_wrap_SetVar_contains" SetVar_contains) :boolean
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_SetVar_notContains" SetVar_notContains) :boolean
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_new_SetVar" new_SetVar) :pointer)

(cffi:defcfun ("_wrap_delete_SetVar" delete_SetVar) :void
  (self :pointer))

(cffi:defcenum SetRelType
	:SRT_EQ
	:SRT_NQ
	:SRT_SUB
	:SRT_SUP
	:SRT_DISJ
	:SRT_CMPL)

(cffi:defcenum SetOpType
	:SOT_UNION
	:SOT_DUNION
	:SOT_INTER
	:SOT_MINUS)

(cffi:defcfun ("_wrap_dom_onSetVarAndInt" dom_onSetVarAndInt) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (i :int))

(cffi:defcfun ("_wrap_dom_onSetVarAnd2Int" dom_onSetVarAnd2Int) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (i :int)
  (j :int))

(cffi:defcfun ("_wrap_dom_onSetVarAndIntSet" dom_onSetVarAndIntSet) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (s :pointer))

(cffi:defcfun ("_wrap_dom_onSetVarAndIntAndBoolVar" dom_onSetVarAndIntAndBoolVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (i :int)
  (b :pointer))

(cffi:defcfun ("_wrap_dom_onSetVarAnd2IntAndBoolVar" dom_onSetVarAnd2IntAndBoolVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (i :int)
  (j :int)
  (b :pointer))

(cffi:defcfun ("_wrap_dom_onSetVarAndIntSetAndBoolVar" dom_onSetVarAndIntSetAndBoolVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (s :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_cardinality_onSetVarAnd2Int" cardinality_onSetVarAnd2Int) :void
  (home :pointer)
  (x :pointer)
  (i :unsigned-int)
  (j :unsigned-int))

(cffi:defcfun ("_wrap_rel_on2SetVar" rel_on2SetVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_on2SetVarAndBoolVar" rel_on2SetVarAndBoolVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (y :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onSetVarAndIntVar" rel_onSetVarAndIntVar) :void
  (home :pointer)
  (s :pointer)
  (r SetRelType)
  (x :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndSetVar" rel_onIntVarAndSetVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (s :pointer))

(cffi:defcfun ("_wrap_rel_onSetVarAndIntVarAndBoolVar" rel_onSetVarAndIntVarAndBoolVar) :void
  (home :pointer)
  (s :pointer)
  (r SetRelType)
  (x :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndSetVarAndBoolVar" rel_onIntVarAndSetVarAndBoolVar) :void
  (home :pointer)
  (x :pointer)
  (r SetRelType)
  (s :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_rel_onSetVarAndIntVarForAll" rel_onSetVarAndIntVarForAll) :void
  (home :pointer)
  (s :pointer)
  (r IntRelType)
  (x :pointer))

(cffi:defcfun ("_wrap_rel_onIntVarAndSetVarForAll" rel_onIntVarAndSetVarForAll) :void
  (home :pointer)
  (x :pointer)
  (r IntRelType)
  (s :pointer))

(cffi:defcfun ("_wrap_rel_on3SetVar" rel_on3SetVar) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_rel_onSVAAndSetVar" rel_onSVAAndSetVar) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onSVAAndIntSetAndSetVar" rel_onSVAAndIntSetAndSetVar) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (z :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onIVAAndIntSetAndSetVar" rel_onIVAAndIntSetAndSetVar) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (z :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onIVAAndSetVar" rel_onIVAAndSetVar) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_rel_onIntSetAnd2SetVar" rel_onIntSetAnd2SetVar) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_rel_onSetVarAndIntSetAndSetVar" rel_onSetVarAndIntSetAndSetVar) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_rel_on2SetVarAndIntSet" rel_on2SetVarAndIntSet) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_rel_onIntSetAndSetVarAndIntSet" rel_onIntSetAndSetVarAndIntSet) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_rel_onSetVarAndIntSetAndIntSet" rel_onSetVarAndIntSetAndIntSet) :void
  (home :pointer)
  (x :pointer)
  (op SetOpType)
  (y :pointer)
  (r SetRelType)
  (z :pointer))

(cffi:defcfun ("_wrap_convex_onSetVar" convex_onSetVar) :void
  (home :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_convex_on2SetVar" convex_on2SetVar) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_sequence_onSVA" sequence_onSVA) :void
  (home :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_sequence_onSVAAndSetVar" sequence_onSVAAndSetVar) :void
  (home :pointer)
  (y :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_atmostOne" atmostOne) :void
  (home :pointer)
  (x :pointer)
  (c :unsigned-int))

(cffi:defcfun ("_wrap_min_onSetVarAndIntVar" min_onSetVarAndIntVar) :void
  (home :pointer)
  (s :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_notMin" notMin) :void
  (home :pointer)
  (s :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_min_onSetVarAndIntVarAndBoolVar" min_onSetVarAndIntVarAndBoolVar) :void
  (home :pointer)
  (s :pointer)
  (x :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_max_onSetVarAndIntVar" max_onSetVarAndIntVar) :void
  (home :pointer)
  (s :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_notMax" notMax) :void
  (home :pointer)
  (s :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_max_onSetVarAndIntVarAndBoolVar" max_onSetVarAndIntVarAndBoolVar) :void
  (home :pointer)
  (s :pointer)
  (x :pointer)
  (b :pointer))

(cffi:defcfun ("_wrap_channel_onIVAAndSetVar" channel_onIVAAndSetVar) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_channel_onIVAAndSVA" channel_onIVAAndSVA) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_channel_onBVAAndSetVar" channel_onBVAAndSetVar) :void
  (home :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_cardinality_onSetVarAndIntVar" cardinality_onSetVarAndIntVar) :void
  (home :pointer)
  (s :pointer)
  (x :pointer))

(cffi:defcfun ("_wrap_weights" weights) :void
  (home :pointer)
  (elements :pointer)
  (weights :pointer)
  (x :pointer)
  (y :pointer))

(cffi:defcfun ("_wrap_element_onSVAAnd2SetVar_option" element_onSVAAnd2SetVar_option) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer)
  (u :pointer))

(cffi:defcfun ("_wrap_element_onSVAAnd2SetVar_default" element_onSVAAnd2SetVar_default) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onISAAnd2SetVar_option" element_onISAAnd2SetVar_option) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer)
  (u :pointer))

(cffi:defcfun ("_wrap_element_onISAAnd2SetVar_default" element_onISAAnd2SetVar_default) :void
  (home :pointer)
  (op SetOpType)
  (x :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onSVAAndIntVarAndSetVar" element_onSVAAndIntVarAndSetVar) :void
  (home :pointer)
  (x :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onISAAndIntVarAndSetVar" element_onISAAndIntVarAndSetVar) :void
  (home :pointer)
  (s :pointer)
  (y :pointer)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onISAAnd2IntVarAnd2IntAndSetVar" element_onISAAnd2IntVarAnd2IntAndSetVar) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer))

(cffi:defcfun ("_wrap_element_onSVAAnd2IntVarAnd2IntAndSetVar" element_onSVAAnd2IntVarAnd2IntAndSetVar) :void
  (home :pointer)
  (a :pointer)
  (x :pointer)
  (w :int)
  (y :pointer)
  (h :int)
  (z :pointer))

(cffi:defcenum SetVarBranch
	(:SET_VAR_NONE 0)
	:SET_VAR_RND
	:SET_VAR_DEGREE_MIN
	:SET_VAR_DEGREE_MAX
	:SET_VAR_AFC_MIN
	:SET_VAR_AFC_MAX
	:SET_VAR_MIN_MIN
	:SET_VAR_MIN_MAX
	:SET_VAR_MAX_MIN
	:SET_VAR_MAX_MAX
	:SET_VAR_SIZE_MIN
	:SET_VAR_SIZE_MAX
	:SET_VAR_SIZE_DEGREE_MIN
	:SET_VAR_SIZE_DEGREE_MAX
	:SET_VAR_SIZE_AFC_MIN
	:SET_VAR_SIZE_AFC_MAX)

(cffi:defcenum SetValBranch
	:SET_VAL_MIN_INC
	:SET_VAL_MIN_EXC
	:SET_VAL_MED_INC
	:SET_VAL_MED_EXC
	:SET_VAL_MAX_INC
	:SET_VAL_MAX_EXC
	:SET_VAL_RND_INC
	:SET_VAL_RND_EXC)

(cffi:defcfun ("_wrap_branch_onSVA_2option" branch_onSVA_2option) :void
  (home :pointer)
  (x :pointer)
  (vars SetVarBranch)
  (vals SetValBranch)
  (o_vars :pointer)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onSVA_1option" branch_onSVA_1option) :void
  (home :pointer)
  (x :pointer)
  (vars SetVarBranch)
  (vals SetValBranch)
  (o_vars :pointer))

(cffi:defcfun ("_wrap_branch_onSVA_default" branch_onSVA_default) :void
  (home :pointer)
  (x :pointer)
  (vars SetVarBranch)
  (vals SetValBranch))

(cffi:defcfun ("_wrap_branch_onSetVar_option" branch_onSetVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals SetValBranch)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_branch_onSetVar_default" branch_onSetVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals SetValBranch))

(cffi:defcenum SetAssign
	:SET_ASSIGN_MIN_INC
	:SET_ASSIGN_MIN_EXC
	:SET_ASSIGN_MED_INC
	:SET_ASSIGN_MED_EXC
	:SET_ASSIGN_MAX_INC
	:SET_ASSIGN_MAX_EXC
	:SET_ASSIGN_RND_INC
	:SET_ASSIGN_RND_EXC)

(cffi:defcfun ("_wrap_assign_onSVA_option" assign_onSVA_option) :void
  (home :pointer)
  (x :pointer)
  (vals SetAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_onSVA_default" assign_onSVA_default) :void
  (home :pointer)
  (x :pointer)
  (vals SetAssign))

(cffi:defcfun ("_wrap_assign_onSetVar_option" assign_onSetVar_option) :void
  (home :pointer)
  (x :pointer)
  (vals SetAssign)
  (o_vals :pointer))

(cffi:defcfun ("_wrap_assign_onSetVar_default" assign_onSetVar_default) :void
  (home :pointer)
  (x :pointer)
  (vals SetAssign))

(cffi:defcfun ("_wrap_new_Tuple_arity" new_Tuple_arity) :pointer
  (k :int))

(cffi:defcfun ("_wrap_new_Tuple_binary" new_Tuple_binary) :pointer
  (a :int)
  (b :int))

(cffi:defcfun ("_wrap_new_Tuple_ternary" new_Tuple_ternary) :pointer
  (a :int)
  (b :int)
  (c :int))

(cffi:defcfun ("_wrap_delete_Tuple" delete_Tuple) :void
  (self :pointer))

(cffi:defcfun ("_wrap_Tuple___aref__" Tuple___aref__) :pointer
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_Tuple_at" Tuple_at) :int
  (self :pointer)
  (i :int))

(cffi:defcfun ("_wrap_Tuple_arity" Tuple_arity) :int
  (self :pointer))

(cffi:defcfun ("_wrap___lshift__" __lshift__) :pointer
  (os :pointer)
  (t_arg1 :pointer))

(cffi:defcfun ("_wrap_new_GRelation" new_GRelation) :pointer
  (a :int))

(cffi:defcfun ("_wrap_delete_GRelation" delete_GRelation) :void
  (self :pointer))

(cffi:defcfun ("_wrap_GRelation_create_full" GRelation_create_full) :pointer
  (a :int))

(cffi:defcfun ("_wrap_GRelation_add" GRelation_add) :boolean
  (self :pointer)
  (t_arg1 :pointer))

(cffi:defcfun ("_wrap_GRelation_unionAssign" GRelation_unionAssign) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_differenceAssign" GRelation_differenceAssign) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_difference" GRelation_difference) :pointer
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_intersect" GRelation_intersect) :pointer
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_complement" GRelation_complement) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_GRelation_subsetEq" GRelation_subsetEq) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_superset" GRelation_superset) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_disjoint" GRelation_disjoint) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_eq" GRelation_eq) :boolean
  (self :pointer)
  (r :pointer))

(cffi:defcfun ("_wrap_GRelation_arity" GRelation_arity) :int
  (self :pointer))

(cffi:defcfun ("_wrap_GRelation_cardinality" GRelation_cardinality) :double
  (self :pointer))

(cffi:defcfun ("_wrap_new_GRelationIter" new_GRelationIter) :pointer
  (r :pointer))

(cffi:defcfun ("_wrap_delete_GRelationIter" delete_GRelationIter) :void
  (self :pointer))

(cffi:defcfun ("_wrap_GRelationIter___funcall__" GRelationIter___funcall__) :boolean
  (self :pointer))

(cffi:defcfun ("_wrap_GRelationIter_val" GRelationIter_val) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_GRelationIter___preincr__" GRelationIter___preincr__) :void
  (self :pointer))

(cffi:defcfun ("_wrap_CPRelVar_glb" CPRelVar_glb) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_CPRelVar_lub" CPRelVar_lub) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_CPRelVar_unk" CPRelVar_unk) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_CPRelVar_oob" CPRelVar_oob) :pointer
  (self :pointer))

(cffi:defcfun ("_wrap_new_CPRelVar" new_CPRelVar) :pointer)

(cffi:defcfun ("_wrap_delete_CPRelVar" delete_CPRelVar) :void
  (self :pointer))

(cffi:defcfun ("_wrap_equal_rel" equal_rel) :void
  (home :pointer)
  (A :pointer)
  (B :pointer))

(cffi:defcfun ("_wrap_comp_rel" comp_rel) :void
  (home :pointer)
  (A :pointer)
  (B :pointer))

(cffi:defcfun ("_wrap_intersect" intersect) :void
  (home :pointer)
  (A :pointer)
  (B :pointer)
  (C :pointer))

(cffi:defcfun ("_wrap_union_rel" union_rel) :void
  (home :pointer)
  (A :pointer)
  (B :pointer)
  (C :pointer))

(cffi:defcfun ("_wrap_subset" subset) :void
  (home :pointer)
  (A :pointer)
  (B :pointer))

(cffi:defcfun ("_wrap_disjoint" disjoint) :void
  (home :pointer)
  (A :pointer)
  (B :pointer))

(cffi:defcfun ("_wrap_implies" implies) :void
  (home :pointer)
  (A :pointer)
  (B :pointer)
  (C :pointer))


