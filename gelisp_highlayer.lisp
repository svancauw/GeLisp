;;load the low layer
(load "/Users/saschavancauwelaert/Documents/EPL/PhD/code/GeLisp/setup.lisp")


;;rename g_distinct by g-distinct in order to match with the old name
;;TODO : fix how to get rid of the space...
(defun g-distinct (sp x)
	(distinct_default sp x)
)


































#| PAS POUR LE MOMENT CAR POUR UN NIVEAU PLUS HAUT
(defun +g (&rest values)

	;empty expression
	(defvar exprToReturn (new_LinExpr))
	
	(loop for i in values until (null i) do 
		(
			progn
				(if (typep i 'integer) 
					(
						setq exprToReturn (add_lin_expr exprToReturn (new_const_LinExpr (coerce i 'double-float)) )
					)
				)
				(if (typep i 'pointer_void) //DOES NOT WORK : HOW TO KNOW TYPE DEFINED BY SWIG ???
					(
						setq exprToReturn (add_lin_expr exprToReturn (new_var_LinExpr i) )
					)
				)
		)
	)
	(PRINT "ya")
	(RETURN-FROM +g exprToReturn)


)
|#