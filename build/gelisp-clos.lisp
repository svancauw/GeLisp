
(clos:defclass gl-space()
  ((ff :reader ff-pointer)))

(clos:defmethod new-int-var ((obj gl-space) (self gl-space) (lb cl:integer) (ub cl:integer))
  (GlSpace_newIntVar_minmax (ff-pointer obj) (ff-pointer self) lb ub))

(clos:defmethod new-int-var ((obj gl-space) (self gl-space) d)
  (GlSpace_newIntVar_fromset (ff-pointer obj) (ff-pointer self) d))

(clos:defmethod new-bool-var ((obj gl-space) (self gl-space) (lb cl:integer) (ub cl:integer))
  (GlSpace_newBoolVar (ff-pointer obj) (ff-pointer self) lb ub))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space))
  (GlSpace_newSetVar_home (ff-pointer obj) (ff-pointer self)))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) (lubMin cl:integer) (lubMax cl:integer) (cardMin cl:integer) (cardMax cl:integer))
  (GlSpace_newSetVar_minmax_minmax_2option (ff-pointer obj) (ff-pointer self) glbMin glbMax lubMin lubMax cardMin cardMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) (lubMin cl:integer) (lubMax cl:integer) (cardMin cl:integer))
  (GlSpace_newSetVar_minmax_minmax_1option (ff-pointer obj) (ff-pointer self) glbMin glbMax lubMin lubMax cardMin))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) (lubMin cl:integer) (lubMax cl:integer))
  (GlSpace_newSetVar_minmax_minmax_default (ff-pointer obj) (ff-pointer self) glbMin glbMax lubMin lubMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD (lubMin cl:integer) (lubMax cl:integer) (cardMin cl:integer) (cardMax cl:integer))
  (GlSpace_newSetVar_set_minmax_2option (ff-pointer obj) (ff-pointer self) glbD lubMin lubMax cardMin cardMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD (lubMin cl:integer) (lubMax cl:integer) (cardMin cl:integer))
  (GlSpace_newSetVar_set_minmax_1option (ff-pointer obj) (ff-pointer self) glbD lubMin lubMax cardMin))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD (lubMin cl:integer) (lubMax cl:integer))
  (GlSpace_newSetVar_set_minmax_default (ff-pointer obj) (ff-pointer self) glbD lubMin lubMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) lubD (cardMin cl:integer) (cardMax cl:integer))
  (GlSpace_newSetVar_minmax_set_2option (ff-pointer obj) (ff-pointer self) glbMin glbMax lubD cardMin cardMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) lubD (cardMin cl:integer))
  (GlSpace_newSetVar_minmax_set_1option (ff-pointer obj) (ff-pointer self) glbMin glbMax lubD cardMin))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) (glbMin cl:integer) (glbMax cl:integer) lubD)
  (GlSpace_newSetVar_minmax_set_default (ff-pointer obj) (ff-pointer self) glbMin glbMax lubD))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD lubD (cardMin cl:integer) (cardMax cl:integer))
  (GlSpace_newSetVar_set_set_2option (ff-pointer obj) (ff-pointer self) glbD lubD cardMin cardMax))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD lubD (cardMin cl:integer))
  (GlSpace_newSetVar_set_set_1option (ff-pointer obj) (ff-pointer self) glbD lubD cardMin))

(clos:defmethod new-set-var ((obj gl-space) (self gl-space) glbD lubD)
  (GlSpace_newSetVar_set_set_default (ff-pointer obj) (ff-pointer self) glbD lubD))

(clos:defmethod new-cprel-var ((obj gl-space) (self gl-space) l u)
  (GlSpace_newCPRelVar (ff-pointer obj) (ff-pointer self) l u))

(clos:defmethod status ((obj gl-space) (self gl-space))
  (GlSpace_status (ff-pointer obj) (ff-pointer self)))

(clos:defmethod print ((obj gl-space) (self gl-space) os)
  (GlSpace_print (ff-pointer obj) (ff-pointer self) os))

(clos:defmethod debug ((obj gl-space) (self gl-space))
  (GlSpace_debug (ff-pointer obj) (ff-pointer self)))

(clos:defmethod branch ((obj gl-space) (self gl-space))
  (GlSpace_branch (ff-pointer obj) (ff-pointer self)))

(clos:defmethod run ((obj gl-space) (self gl-space) (nbSolutions cl:integer) solutionsVector)
  (GlSpace_run (ff-pointer obj) (ff-pointer self) nbSolutions solutionsVector))

(clos:defmethod copy ((obj gl-space) (self gl-space) (share t))
  (GlSpace_copy (ff-pointer obj) (ff-pointer self) share))

(clos:defmethod get-int-var ((obj gl-space) (self gl-space) (indexInVector cl:integer))
  (GlSpace_getIntVar (ff-pointer obj) (ff-pointer self) indexInVector))

(clos:defmethod get-bool-var ((obj gl-space) (self gl-space) (indexInVector cl:integer))
  (GlSpace_getBoolVar (ff-pointer obj) (ff-pointer self) indexInVector))

(clos:defmethod get-set-var ((obj gl-space) (self gl-space) (indexInVector cl:integer))
  (GlSpace_getSetVar (ff-pointer obj) (ff-pointer self) indexInVector))

(clos:defmethod get-cprel-var ((obj gl-space) (self gl-space) (indexInVector cl:integer))
  (GlSpace_getCPRelVar (ff-pointer obj) (ff-pointer self) indexInVector))

(clos:defmethod create-gl-space-vector ((obj gl-space) (self gl-space))
  (GlSpace_createGlSpaceVector (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-gl-space-from-vector ((obj gl-space) (self gl-space) vec (index cl:integer))
  (GlSpace_getGlSpaceFromVector (ff-pointer obj) (ff-pointer self) vec index))


(clos:defclass gl-int-var()
  ((ff :reader ff-pointer)))

(clos:defmethod get-index-in-vector ((obj gl-int-var) (self gl-int-var))
  (GlIntVar_getIndexInVector (ff-pointer obj) (ff-pointer self)))

(clos:defmethod set-index-in-vector ((obj gl-int-var) (self gl-int-var) (newIndex cl:integer))
  (GlIntVar_setIndexInVector (ff-pointer obj) (ff-pointer self) newIndex))


(clos:defclass gl-bool-var()
  ((ff :reader ff-pointer)))

(clos:defmethod get-index-in-vector ((obj gl-bool-var) (self gl-bool-var))
  (GlBoolVar_getIndexInVector (ff-pointer obj) (ff-pointer self)))

(clos:defmethod set-index-in-vector ((obj gl-bool-var) (self gl-bool-var) (newIndex cl:integer))
  (GlBoolVar_setIndexInVector (ff-pointer obj) (ff-pointer self) newIndex))


(clos:defclass gl-set-var()
  ((ff :reader ff-pointer)))

(clos:defmethod get-index-in-vector ((obj gl-set-var) (self gl-set-var))
  (GlSetVar_getIndexInVector (ff-pointer obj) (ff-pointer self)))

(clos:defmethod set-index-in-vector ((obj gl-set-var) (self gl-set-var) (newIndex cl:integer))
  (GlSetVar_setIndexInVector (ff-pointer obj) (ff-pointer self) newIndex))


(clos:defclass gl-cprel-var()
  ((ff :reader ff-pointer)))

(clos:defmethod get-index-in-vector ((obj gl-cprel-var) (self gl-cprel-var))
  (GlCPRelVar_getIndexInVector (ff-pointer obj) (ff-pointer self)))

(clos:defmethod set-index-in-vector ((obj gl-cprel-var) (self gl-cprel-var) (newIndex cl:integer))
  (GlCPRelVar_setIndexInVector (ff-pointer obj) (ff-pointer self) newIndex))


(clos:defclass int-var-list()
  ((ff :reader ff-pointer)))

(clos:defmethod size ((obj int-var-list) (self int-var-list))
  (IntVarList_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod add ((obj int-var-list) (self int-var-list) (x gl-int-var))
  (IntVarList_add (ff-pointer obj) (ff-pointer self) x))

(clos:defmethod get ((obj int-var-list) (self int-var-list))
  (IntVarList_get (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-var ((obj int-var-list) (self int-var-list) (i cl:integer))
  (IntVarList_getVar (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod get-index-of-avar-in-vector ((obj int-var-list) (self int-var-list) (i cl:integer))
  (IntVarList_getIndexOfAVarInVector (ff-pointer obj) (ff-pointer self) i))


(clos:defclass bool-var-list()
  ((ff :reader ff-pointer)))

(clos:defmethod size ((obj bool-var-list) (self bool-var-list))
  (BoolVarList_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod add ((obj bool-var-list) (self bool-var-list) (x gl-bool-var))
  (BoolVarList_add (ff-pointer obj) (ff-pointer self) x))

(clos:defmethod get ((obj bool-var-list) (self bool-var-list))
  (BoolVarList_get (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-var ((obj bool-var-list) (self bool-var-list) (i cl:integer))
  (BoolVarList_getVar (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod get-index-of-avar-in-vector ((obj bool-var-list) (self bool-var-list) (i cl:integer))
  (BoolVarList_getIndexOfAVarInVector (ff-pointer obj) (ff-pointer self) i))


(clos:defclass set-var-list()
  ((ff :reader ff-pointer)))

(clos:defmethod size ((obj set-var-list) (self set-var-list))
  (SetVarList_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod add ((obj set-var-list) (self set-var-list) (x gl-set-var))
  (SetVarList_add (ff-pointer obj) (ff-pointer self) x))

(clos:defmethod get ((obj set-var-list) (self set-var-list))
  (SetVarList_get (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-var ((obj set-var-list) (self set-var-list) (i cl:integer))
  (SetVarList_getVar (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod get-index-of-avar-in-vector ((obj set-var-list) (self set-var-list) (i cl:integer))
  (SetVarList_getIndexOfAVarInVector (ff-pointer obj) (ff-pointer self) i))


(clos:defclass cprel-var-list()
  ((ff :reader ff-pointer)))


(clos:defclass int-list()
  ((ff :reader ff-pointer)))

(clos:defmethod get ((obj int-list) (self int-list))
  (IntList_get (ff-pointer obj) (ff-pointer self)))

(clos:defmethod size ((obj int-list) (self int-list))
  (IntList_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-var ((obj int-list) (self int-list) (i cl:integer))
  (IntList_getVar (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod set-var ((obj int-list) (self int-list) (i cl:integer) (value cl:integer))
  (IntList_setVar (ff-pointer obj) (ff-pointer self) i value))

(clos:defmethod print ((obj int-list) (self int-list))
  (IntList_print (ff-pointer obj) (ff-pointer self)))


(clos:defclass int-set-list()
  ((ff :reader ff-pointer)))

(clos:defmethod get ((obj int-set-list) (self int-set-list))
  (IntSetList_get (ff-pointer obj) (ff-pointer self)))

(clos:defmethod get-element ((obj int-set-list) (self int-set-list) (i cl:integer))
  (IntSetList_getElement (ff-pointer obj) (ff-pointer self) i))


(clos:defclass int-var()
  ((ff :reader ff-pointer)))

(clos:defmethod min ((obj int-var) (self int-var))
  (IntVar_min (ff-pointer obj) (ff-pointer self)))

(clos:defmethod max ((obj int-var) (self int-var))
  (IntVar_max (ff-pointer obj) (ff-pointer self)))

(clos:defmethod med ((obj int-var) (self int-var))
  (IntVar_med (ff-pointer obj) (ff-pointer self)))

(clos:defmethod val ((obj int-var) (self int-var))
  (IntVar_val (ff-pointer obj) (ff-pointer self)))

(clos:defmethod size ((obj int-var) (self int-var))
  (IntVar_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod width ((obj int-var) (self int-var))
  (IntVar_width (ff-pointer obj) (ff-pointer self)))

(clos:defmethod regret-min ((obj int-var) (self int-var))
  (IntVar_regret_min (ff-pointer obj) (ff-pointer self)))

(clos:defmethod regret-max ((obj int-var) (self int-var))
  (IntVar_regret_max (ff-pointer obj) (ff-pointer self)))

(clos:defmethod range ((obj int-var) (self int-var))
  (IntVar_range (ff-pointer obj) (ff-pointer self)))

(clos:defmethod assigned ((obj int-var) (self int-var))
  (IntVar_assigned (ff-pointer obj) (ff-pointer self)))

(clos:defmethod in ((obj int-var) (self int-var) (n cl:integer))
  (IntVar_in (ff-pointer obj) (ff-pointer self) n))


(clos:defclass bool-var()
  ((ff :reader ff-pointer)))

(clos:defmethod min ((obj bool-var) (self bool-var))
  (BoolVar_min (ff-pointer obj) (ff-pointer self)))

(clos:defmethod max ((obj bool-var) (self bool-var))
  (BoolVar_max (ff-pointer obj) (ff-pointer self)))

(clos:defmethod med ((obj bool-var) (self bool-var))
  (BoolVar_med (ff-pointer obj) (ff-pointer self)))

(clos:defmethod val ((obj bool-var) (self bool-var))
  (BoolVar_val (ff-pointer obj) (ff-pointer self)))

(clos:defmethod size ((obj bool-var) (self bool-var))
  (BoolVar_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod width ((obj bool-var) (self bool-var))
  (BoolVar_width (ff-pointer obj) (ff-pointer self)))

(clos:defmethod regret-min ((obj bool-var) (self bool-var))
  (BoolVar_regret_min (ff-pointer obj) (ff-pointer self)))

(clos:defmethod regret-max ((obj bool-var) (self bool-var))
  (BoolVar_regret_max (ff-pointer obj) (ff-pointer self)))

(clos:defmethod range ((obj bool-var) (self bool-var))
  (BoolVar_range (ff-pointer obj) (ff-pointer self)))

(clos:defmethod in ((obj bool-var) (self bool-var) (n cl:integer))
  (BoolVar_in (ff-pointer obj) (ff-pointer self) n))

(clos:defmethod zero ((obj bool-var) (self bool-var))
  (BoolVar_zero (ff-pointer obj) (ff-pointer self)))

(clos:defmethod one ((obj bool-var) (self bool-var))
  (BoolVar_one (ff-pointer obj) (ff-pointer self)))

(clos:defmethod none ((obj bool-var) (self bool-var))
  (BoolVar_none (ff-pointer obj) (ff-pointer self)))


(clos:defclass int-set()
  ((ff :reader ff-pointer)))

(clos:defmethod ranges ((obj int-set) (self int-set))
  (IntSet_ranges (ff-pointer obj) (ff-pointer self)))

(clos:defmethod min ((obj int-set) (self int-set) (i cl:integer))
  (IntSet_min_index (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod max ((obj int-set) (self int-set) (i cl:integer))
  (IntSet_max_index (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod width ((obj int-set) (self int-set) (i cl:integer))
  (IntSet_width_index (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod in ((obj int-set) (self int-set) (n cl:integer))
  (IntSet_in (ff-pointer obj) (ff-pointer self) n))

(clos:defmethod size ((obj int-set) (self int-set))
  (IntSet_size (ff-pointer obj) (ff-pointer self)))

(clos:defmethod width ((obj int-set) (self int-set))
  (IntSet_width (ff-pointer obj) (ff-pointer self)))

(clos:defmethod min ((obj int-set) (self int-set))
  (IntSet_min (ff-pointer obj) (ff-pointer self)))

(clos:defmethod max ((obj int-set) (self int-set))
  (IntSet_max (ff-pointer obj) (ff-pointer self)))


(clos:defclass set-var()
  ((ff :reader ff-pointer)))

(clos:defmethod glb-size ((obj set-var) (self set-var))
  (SetVar_glbSize (ff-pointer obj) (ff-pointer self)))

(clos:defmethod lub-size ((obj set-var) (self set-var))
  (SetVar_lubSize (ff-pointer obj) (ff-pointer self)))

(clos:defmethod unknown-size ((obj set-var) (self set-var))
  (SetVar_unknownSize (ff-pointer obj) (ff-pointer self)))

(clos:defmethod card-min ((obj set-var) (self set-var))
  (SetVar_cardMin (ff-pointer obj) (ff-pointer self)))

(clos:defmethod card-max ((obj set-var) (self set-var))
  (SetVar_cardMax (ff-pointer obj) (ff-pointer self)))

(clos:defmethod lub-min ((obj set-var) (self set-var))
  (SetVar_lubMin (ff-pointer obj) (ff-pointer self)))

(clos:defmethod lub-max ((obj set-var) (self set-var))
  (SetVar_lubMax (ff-pointer obj) (ff-pointer self)))

(clos:defmethod glb-min ((obj set-var) (self set-var))
  (SetVar_glbMin (ff-pointer obj) (ff-pointer self)))

(clos:defmethod glb-max ((obj set-var) (self set-var))
  (SetVar_glbMax (ff-pointer obj) (ff-pointer self)))

(clos:defmethod contains ((obj set-var) (self set-var) (i cl:integer))
  (SetVar_contains (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod not-contains ((obj set-var) (self set-var) (i cl:integer))
  (SetVar_notContains (ff-pointer obj) (ff-pointer self) i))


(clos:defclass tuple()
  ((ff :reader ff-pointer)))

(cl:shadow "[]")
(clos:defmethod [] ((obj tuple) (self tuple) (i cl:integer))
  (Tuple___aref__ (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod at ((obj tuple) (self tuple) (i cl:integer))
  (Tuple_at (ff-pointer obj) (ff-pointer self) i))

(clos:defmethod arity ((obj tuple) (self tuple))
  (Tuple_arity (ff-pointer obj) (ff-pointer self)))


(clos:defclass grelation()
  ((ff :reader ff-pointer)))

(clos:defmethod add ((obj grelation) (self grelation) (t-arg1 tuple))
  (GRelation_add (ff-pointer obj) (ff-pointer self) t-arg1))

(clos:defmethod union-assign ((obj grelation) (self grelation) (r grelation))
  (GRelation_unionAssign (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod difference-assign ((obj grelation) (self grelation) (r grelation))
  (GRelation_differenceAssign (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod difference ((obj grelation) (self grelation) (r grelation))
  (GRelation_difference (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod intersect ((obj grelation) (self grelation) (r grelation))
  (GRelation_intersect (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod complement ((obj grelation) (self grelation))
  (GRelation_complement (ff-pointer obj) (ff-pointer self)))

(clos:defmethod subset-eq ((obj grelation) (self grelation) (r grelation))
  (GRelation_subsetEq (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod superset ((obj grelation) (self grelation) (r grelation))
  (GRelation_superset (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod disjoint ((obj grelation) (self grelation) (r grelation))
  (GRelation_disjoint (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod eq ((obj grelation) (self grelation) (r grelation))
  (GRelation_eq (ff-pointer obj) (ff-pointer self) (ff-pointer r)))

(clos:defmethod arity ((obj grelation) (self grelation))
  (GRelation_arity (ff-pointer obj) (ff-pointer self)))

(clos:defmethod cardinality ((obj grelation) (self grelation))
  (GRelation_cardinality (ff-pointer obj) (ff-pointer self)))


(clos:defclass grelation-iter()
  ((ff :reader ff-pointer)))

(cl:shadow "()")
(clos:defmethod () ((obj grelation-iter) (self grelation-iter))
  (GRelationIter___funcall__ (ff-pointer obj) (ff-pointer self)))

(clos:defmethod val ((obj grelation-iter) (self grelation-iter))
  (GRelationIter_val (ff-pointer obj) (ff-pointer self)))

(cl:shadow "++")
(clos:defmethod ++ ((obj grelation-iter) (self grelation-iter))
  (GRelationIter___preincr__ (ff-pointer obj) (ff-pointer self)))


(clos:defclass cprel-var()
  ((ff :reader ff-pointer)))

(clos:defmethod glb ((obj cprel-var) (self cprel-var))
  (CPRelVar_glb (ff-pointer obj) (ff-pointer self)))

(clos:defmethod lub ((obj cprel-var) (self cprel-var))
  (CPRelVar_lub (ff-pointer obj) (ff-pointer self)))

(clos:defmethod unk ((obj cprel-var) (self cprel-var))
  (CPRelVar_unk (ff-pointer obj) (ff-pointer self)))

(clos:defmethod oob ((obj cprel-var) (self cprel-var))
  (CPRelVar_oob (ff-pointer obj) (ff-pointer self)))

