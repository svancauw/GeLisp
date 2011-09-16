

;;load CFFI. to comment when using GeLisp in OpenMusic (OpenMusic load this by default)
;(load "/Users/saschavancauwelaert/Documents/EPL/PhD/code/quicklisp/quicklisp.lisp")
;(load "/Users/saschavancauwelaert/quicklisp/setup.lisp")
;(ql:quickload "cffi")

;load the foreign library of GeLisp
;(cffi:load-foreign-library "/Users/saschavancauwelaert/Documents/EPL/Memoire/gelisp/build/libgelisp.so")
(cffi:load-foreign-library "/Users/saschavancauwelaert/Documents/EPL/PhD/code/GeLisp/build/libgelisp.so")
;load the foreign functions
;(load "/Users/saschavancauwelaert/Documents/EPL/Memoire/gelisp/build/gelisp.lisp")
(load "/Users/saschavancauwelaert/Documents/EPL/PhD/code/GeLisp/build/gelisp.lisp")