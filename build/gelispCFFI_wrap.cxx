
#ifdef __cplusplus
template<class T> class SwigValueWrapper {
    T *tt;
public:
    SwigValueWrapper() : tt(0) { }
    SwigValueWrapper(const SwigValueWrapper<T>& rhs) : tt(new T(*rhs.tt)) { }
    SwigValueWrapper(const T& t) : tt(new T(t)) { }
    ~SwigValueWrapper() { delete tt; } 
    SwigValueWrapper& operator=(const T& t) { delete tt; tt = new T(t); return *this; }
    operator T&() const { return *tt; }
    T *operator&() { return tt; }
private:
    SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
};
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC)
#   if (__SUNPRO_CC <= 0x560)
#     define SWIGTEMPLATEDISAMBIGUATOR template
#   else
#     define SWIGTEMPLATEDISAMBIGUATOR 
#   endif
# else
#   define SWIGTEMPLATEDISAMBIGUATOR 
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif



#ifdef __cplusplus
#  define EXTERN   extern "C"
#else
#  define EXTERN   extern
#endif

#define EXPORT   EXTERN SWIGEXPORT

#include <string.h>



#ifdef __cplusplus
#  define EXTERN   extern "C"
#else
#  define EXTERN   extern
#endif

#define EXPORT   EXTERN SWIGEXPORT

#include <string.h>
#include <stdlib.h>


#include <gecode/kernel.hh>
#include <gecode/int.hh>
#include <gecode/set.hh>
#include <cprel/cprel.hh>

#include <cprel/prop/equality.hh>
#include <cprel/prop/and.hh>

#include <gelisp.hpp>

using namespace Gecode;
using namespace MPG;
using namespace CPRel;
using namespace Prop;


EXPORT GeLisp::GlSpace *_wrap_new_GlSpace () {
  GeLisp::GlSpace * lresult = (GeLisp::GlSpace *)0 ;
  GeLisp::GlSpace *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::GlSpace *)new GeLisp::GlSpace();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSpace *)0;
  }
}


EXPORT void _wrap_delete_GlSpace (GeLisp::GlSpace *larg1) {
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::GlIntVar *_wrap_GlSpace_newIntVar_minmax (GeLisp::GlSpace *larg1, int larg2, int larg3) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        {
          GeLisp::GlIntVar &_result_ref = (arg1)->newIntVar(arg2,arg3);
          result = (GeLisp::GlIntVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_GlSpace_newIntVar_fromset (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlIntVar &_result_ref = (arg1)->newIntVar((Gecode::IntSet const &)*arg2);
          result = (GeLisp::GlIntVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT GeLisp::GlBoolVar *_wrap_GlSpace_newBoolVar (GeLisp::GlSpace *larg1, int larg2, int larg3) {
  GeLisp::GlBoolVar * lresult = (GeLisp::GlBoolVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  GeLisp::GlBoolVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        {
          GeLisp::GlBoolVar &_result_ref = (arg1)->newBoolVar(arg2,arg3);
          result = (GeLisp::GlBoolVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlBoolVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_home (GeLisp::GlSpace *larg1) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar();
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_minmax_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, unsigned int larg6, unsigned int larg7) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  unsigned int arg7 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,arg4,arg5,arg6,arg7);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_minmax_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,arg4,arg5,arg6);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_minmax_default (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,arg4,arg5);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_minmax_2option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4, unsigned int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,arg3,arg4,arg5,arg6);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_minmax_1option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,arg3,arg4,arg5);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_minmax_default (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,arg3,arg4);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_set_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4, unsigned int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,(Gecode::IntSet const &)*arg4,arg5,arg6);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_set_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,(Gecode::IntSet const &)*arg4,arg5);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_minmax_set_default (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar(arg2,arg3,(Gecode::IntSet const &)*arg4);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_set_2option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3, unsigned int larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  unsigned int arg4 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3,arg4,arg5);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_set_1option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3, unsigned int larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  unsigned int arg4 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3,arg4);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_newSetVar_set_set_default (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->newSetVar((Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlCPRelVar *_wrap_GlSpace_newCPRelVar (GeLisp::GlSpace *larg1, MPG::CPRel::GRelation *larg2, MPG::CPRel::GRelation *larg3) {
  GeLisp::GlCPRelVar * lresult = (GeLisp::GlCPRelVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  MPG::CPRel::GRelation *arg3 = 0 ;
  GeLisp::GlCPRelVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        {
          GeLisp::GlCPRelVar &_result_ref = (arg1)->newCPRelVar((MPG::CPRel::GRelation const &)*arg2,(MPG::CPRel::GRelation const &)*arg3);
          result = (GeLisp::GlCPRelVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlCPRelVar *)0;
  }
}


EXPORT char *_wrap_GlSpace_status (GeLisp::GlSpace *larg1) {
  char * lresult = (char *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  char *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (char *)(arg1)->status();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (char *)0;
  }
}


EXPORT void _wrap_GlSpace_print (GeLisp::GlSpace *larg1, std::ostream *larg2) {
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  std::ostream *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        ((GeLisp::GlSpace const *)arg1)->print(*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT char *_wrap_GlSpace_debug (GeLisp::GlSpace *larg1) {
  char * lresult = (char *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  char *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (char *)((GeLisp::GlSpace const *)arg1)->debug();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (char *)0;
  }
}


EXPORT void _wrap_GlSpace_branch (GeLisp::GlSpace *larg1) {
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        (arg1)->branch();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT char *_wrap_GlSpace_run (GeLisp::GlSpace *larg1, int larg2, std::vector<GeLisp::GlSpace * > *larg3) {
  char * lresult = (char *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  std::vector<GeLisp::GlSpace * > *arg3 = 0 ;
  char *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (char *)(arg1)->run(arg2,*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (char *)0;
  }
}


EXPORT Gecode::Space *_wrap_GlSpace_copy (GeLisp::GlSpace *larg1, int larg2) {
  Gecode::Space * lresult = (Gecode::Space *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  bool arg2 ;
  Gecode::Space *result = 0 ;
  
  arg1 = larg1;
  arg2 = (bool)larg2;
  try {
    {
      try {
        result = (Gecode::Space *)(arg1)->copy(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::Space *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_GlSpace_getIntVar (GeLisp::GlSpace *larg1, int larg2) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlIntVar &_result_ref = (arg1)->getIntVar(arg2);
          result = (GeLisp::GlIntVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT GeLisp::GlBoolVar *_wrap_GlSpace_getBoolVar (GeLisp::GlSpace *larg1, int larg2) {
  GeLisp::GlBoolVar * lresult = (GeLisp::GlBoolVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  GeLisp::GlBoolVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlBoolVar &_result_ref = (arg1)->getBoolVar(arg2);
          result = (GeLisp::GlBoolVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlBoolVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_GlSpace_getSetVar (GeLisp::GlSpace *larg1, int larg2) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlSetVar &_result_ref = (arg1)->getSetVar(arg2);
          result = (GeLisp::GlSetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlCPRelVar *_wrap_GlSpace_getCPRelVar (GeLisp::GlSpace *larg1, int larg2) {
  GeLisp::GlCPRelVar * lresult = (GeLisp::GlCPRelVar *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  int arg2 ;
  GeLisp::GlCPRelVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlCPRelVar &_result_ref = (arg1)->getCPRelVar(arg2);
          result = (GeLisp::GlCPRelVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlCPRelVar *)0;
  }
}


EXPORT std::vector<GeLisp::GlSpace * > *_wrap_GlSpace_createGlSpaceVector (GeLisp::GlSpace *larg1) {
  std::vector<GeLisp::GlSpace * > * lresult = (std::vector<GeLisp::GlSpace * > *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  SwigValueWrapper<std::vector<GeLisp::GlSpace * > > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (arg1)->createGlSpaceVector();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new std::vector<GeLisp::GlSpace * >(result);
    return lresult;
  } catch (...) {
    return (std::vector<GeLisp::GlSpace * > *)0;
  }
}


EXPORT GeLisp::GlSpace *_wrap_GlSpace_getGlSpaceFromVector (GeLisp::GlSpace *larg1, std::vector<GeLisp::GlSpace * > *larg2, int larg3) {
  GeLisp::GlSpace * lresult = (GeLisp::GlSpace *)0 ;
  GeLisp::GlSpace *arg1 = (GeLisp::GlSpace *) 0 ;
  std::vector<GeLisp::GlSpace * > *arg2 = 0 ;
  int arg3 ;
  GeLisp::GlSpace *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::GlSpace *)(arg1)->getGlSpaceFromVector(*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSpace *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_new_GlIntVar () {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlIntVar *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::GlIntVar *)new GeLisp::GlIntVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_new_GlIntVar_minmax (GeLisp::GlSpace *larg1, int larg2, int larg3) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::GlIntVar *)new GeLisp::GlIntVar(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_new_GlIntVar_set (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (GeLisp::GlIntVar *)new GeLisp::GlIntVar(*arg1,(Gecode::IntSet const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT int _wrap_GlIntVar_getIndexInVector (GeLisp::GlIntVar *larg1) {
  int lresult = (int)0 ;
  GeLisp::GlIntVar *arg1 = (GeLisp::GlIntVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)(arg1)->getIndexInVector();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_GlIntVar_setIndexInVector (GeLisp::GlIntVar *larg1, int larg2) {
  GeLisp::GlIntVar *arg1 = (GeLisp::GlIntVar *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->setIndexInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_GlIntVar (GeLisp::GlIntVar *larg1) {
  GeLisp::GlIntVar *arg1 = (GeLisp::GlIntVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::GlBoolVar *_wrap_new_GlBoolVar () {
  GeLisp::GlBoolVar * lresult = (GeLisp::GlBoolVar *)0 ;
  GeLisp::GlBoolVar *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::GlBoolVar *)new GeLisp::GlBoolVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlBoolVar *)0;
  }
}


EXPORT GeLisp::GlBoolVar *_wrap_new_GlBoolVar_minmax (GeLisp::GlSpace *larg1, int larg2, int larg3) {
  GeLisp::GlBoolVar * lresult = (GeLisp::GlBoolVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  GeLisp::GlBoolVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::GlBoolVar *)new GeLisp::GlBoolVar(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlBoolVar *)0;
  }
}


EXPORT int _wrap_GlBoolVar_getIndexInVector (GeLisp::GlBoolVar *larg1) {
  int lresult = (int)0 ;
  GeLisp::GlBoolVar *arg1 = (GeLisp::GlBoolVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)(arg1)->getIndexInVector();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_GlBoolVar_setIndexInVector (GeLisp::GlBoolVar *larg1, int larg2) {
  GeLisp::GlBoolVar *arg1 = (GeLisp::GlBoolVar *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->setIndexInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_GlBoolVar (GeLisp::GlBoolVar *larg1) {
  GeLisp::GlBoolVar *arg1 = (GeLisp::GlBoolVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar () {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_home (GeLisp::GlSpace *larg1) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_minmax_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, unsigned int larg6, unsigned int larg7) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  unsigned int arg7 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_minmax_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_minmax_default (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_minmax_2option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4, unsigned int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_minmax_1option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_minmax_default (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, int larg3, int larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_set_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4, unsigned int larg5, unsigned int larg6) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,(Gecode::IntSet const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_set_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,(Gecode::IntSet const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_minmax_set_default (GeLisp::GlSpace *larg1, int larg2, int larg3, Gecode::IntSet *larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  Gecode::IntSet *arg4 = 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,arg2,arg3,(Gecode::IntSet const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_set_2option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3, unsigned int larg4, unsigned int larg5) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  unsigned int arg4 ;
  unsigned int arg5 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_set_1option (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3, unsigned int larg4) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  unsigned int arg4 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT GeLisp::GlSetVar *_wrap_new_GlSetVar_set_set_default (GeLisp::GlSpace *larg1, Gecode::IntSet *larg2, Gecode::IntSet *larg3) {
  GeLisp::GlSetVar * lresult = (GeLisp::GlSetVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  Gecode::IntSet *arg2 = 0 ;
  Gecode::IntSet *arg3 = 0 ;
  GeLisp::GlSetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::GlSetVar *)new GeLisp::GlSetVar(*arg1,(Gecode::IntSet const &)*arg2,(Gecode::IntSet const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlSetVar *)0;
  }
}


EXPORT int _wrap_GlSetVar_getIndexInVector (GeLisp::GlSetVar *larg1) {
  int lresult = (int)0 ;
  GeLisp::GlSetVar *arg1 = (GeLisp::GlSetVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)(arg1)->getIndexInVector();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_GlSetVar_setIndexInVector (GeLisp::GlSetVar *larg1, int larg2) {
  GeLisp::GlSetVar *arg1 = (GeLisp::GlSetVar *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->setIndexInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_GlSetVar (GeLisp::GlSetVar *larg1) {
  GeLisp::GlSetVar *arg1 = (GeLisp::GlSetVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::GlCPRelVar *_wrap_new_GlCPRelVar () {
  GeLisp::GlCPRelVar * lresult = (GeLisp::GlCPRelVar *)0 ;
  GeLisp::GlCPRelVar *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::GlCPRelVar *)new GeLisp::GlCPRelVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlCPRelVar *)0;
  }
}


EXPORT GeLisp::GlCPRelVar *_wrap_new_GlCPRelVar_grelation (GeLisp::GlSpace *larg1, MPG::CPRel::GRelation *larg2, MPG::CPRel::GRelation *larg3) {
  GeLisp::GlCPRelVar * lresult = (GeLisp::GlCPRelVar *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  MPG::CPRel::GRelation *arg3 = 0 ;
  GeLisp::GlCPRelVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::GlCPRelVar *)new GeLisp::GlCPRelVar(*arg1,(MPG::CPRel::GRelation const &)*arg2,(MPG::CPRel::GRelation const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlCPRelVar *)0;
  }
}


EXPORT int _wrap_GlCPRelVar_getIndexInVector (GeLisp::GlCPRelVar *larg1) {
  int lresult = (int)0 ;
  GeLisp::GlCPRelVar *arg1 = (GeLisp::GlCPRelVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)(arg1)->getIndexInVector();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_GlCPRelVar_setIndexInVector (GeLisp::GlCPRelVar *larg1, int larg2) {
  GeLisp::GlCPRelVar *arg1 = (GeLisp::GlCPRelVar *) 0 ;
  int arg2 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->setIndexInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_GlCPRelVar (GeLisp::GlCPRelVar *larg1) {
  GeLisp::GlCPRelVar *arg1 = (GeLisp::GlCPRelVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::IntVarList *_wrap_new_IntVarList () {
  GeLisp::IntVarList * lresult = (GeLisp::IntVarList *)0 ;
  GeLisp::IntVarList *result = 0 ;
  
  try {
    {
      try {
        result = (GeLisp::IntVarList *)new GeLisp::IntVarList();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntVarList *)0;
  }
}


EXPORT GeLisp::IntVarList *_wrap_new_IntVarList_minmax (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4) {
  GeLisp::IntVarList * lresult = (GeLisp::IntVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  GeLisp::IntVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::IntVarList *)new GeLisp::IntVarList(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntVarList *)0;
  }
}


EXPORT GeLisp::IntVarList *_wrap_new_IntVarList_set (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3) {
  GeLisp::IntVarList * lresult = (GeLisp::IntVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  GeLisp::IntVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::IntVarList *)new GeLisp::IntVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntVarList *)0;
  }
}


EXPORT unsigned int _wrap_IntVarList_size (GeLisp::IntVarList *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)(arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT void _wrap_IntVarList_add (GeLisp::IntVarList *larg1, GeLisp::GlIntVar *larg2) {
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  GeLisp::GlIntVar *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->add(*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT Gecode::IntVarArgs *_wrap_IntVarList_get (GeLisp::IntVarList *larg1) {
  Gecode::IntVarArgs * lresult = (Gecode::IntVarArgs *)0 ;
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  Gecode::IntVarArgs *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          Gecode::IntVarArgs const &_result_ref = (arg1)->get();
          result = (Gecode::IntVarArgs *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::IntVarArgs *)0;
  }
}


EXPORT GeLisp::GlIntVar *_wrap_IntVarList_getVar (GeLisp::IntVarList *larg1, int larg2) {
  GeLisp::GlIntVar * lresult = (GeLisp::GlIntVar *)0 ;
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  int arg2 ;
  GeLisp::GlIntVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlIntVar const &_result_ref = (arg1)->getVar(arg2);
          result = (GeLisp::GlIntVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlIntVar *)0;
  }
}


EXPORT int _wrap_IntVarList_getIndexOfAVarInVector (GeLisp::IntVarList *larg1, int larg2) {
  int lresult = (int)0 ;
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)(arg1)->getIndexOfAVarInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_IntVarList (GeLisp::IntVarList *larg1) {
  GeLisp::IntVarList *arg1 = (GeLisp::IntVarList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::BoolVarList *_wrap_new_BoolVarList_minmax (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4) {
  GeLisp::BoolVarList * lresult = (GeLisp::BoolVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  GeLisp::BoolVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::BoolVarList *)new GeLisp::BoolVarList(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::BoolVarList *)0;
  }
}


EXPORT unsigned int _wrap_BoolVarList_size (GeLisp::BoolVarList *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)(arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT void _wrap_BoolVarList_add (GeLisp::BoolVarList *larg1, GeLisp::GlBoolVar *larg2) {
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  GeLisp::GlBoolVar *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->add(*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT Gecode::BoolVarArgs *_wrap_BoolVarList_get (GeLisp::BoolVarList *larg1) {
  Gecode::BoolVarArgs * lresult = (Gecode::BoolVarArgs *)0 ;
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  Gecode::BoolVarArgs *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          Gecode::BoolVarArgs const &_result_ref = (arg1)->get();
          result = (Gecode::BoolVarArgs *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::BoolVarArgs *)0;
  }
}


EXPORT GeLisp::GlBoolVar *_wrap_BoolVarList_getVar (GeLisp::BoolVarList *larg1, int larg2) {
  GeLisp::GlBoolVar * lresult = (GeLisp::GlBoolVar *)0 ;
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  int arg2 ;
  GeLisp::GlBoolVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          GeLisp::GlBoolVar const &_result_ref = (arg1)->getVar(arg2);
          result = (GeLisp::GlBoolVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::GlBoolVar *)0;
  }
}


EXPORT int _wrap_BoolVarList_getIndexOfAVarInVector (GeLisp::BoolVarList *larg1, int larg2) {
  int lresult = (int)0 ;
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)(arg1)->getIndexOfAVarInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_BoolVarList (GeLisp::BoolVarList *larg1) {
  GeLisp::BoolVarList *arg1 = (GeLisp::BoolVarList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_home (GeLisp::GlSpace *larg1, int larg2) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_minmax_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, int larg6, unsigned int larg7, unsigned int larg8) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  unsigned int arg7 ;
  unsigned int arg8 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  arg8 = larg8;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,arg5,arg6,arg7,arg8);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_minmax_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, int larg6, unsigned int larg7) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  unsigned int arg7 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_minmax_default (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, int larg5, int larg6) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_minmax_2option (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, int larg4, int larg5, unsigned int larg6, unsigned int larg7) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  unsigned int arg7 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_minmax_1option (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, int larg4, int larg5, unsigned int larg6) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  unsigned int arg6 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_minmax_default (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, int larg4, int larg5) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_set_2option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, Gecode::IntSet *larg5, unsigned int larg6, unsigned int larg7) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  Gecode::IntSet *arg5 = 0 ;
  unsigned int arg6 ;
  unsigned int arg7 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,(Gecode::IntSet const &)*arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_set_1option (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, Gecode::IntSet *larg5, unsigned int larg6) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  Gecode::IntSet *arg5 = 0 ;
  unsigned int arg6 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,(Gecode::IntSet const &)*arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_minmax_set_default (GeLisp::GlSpace *larg1, int larg2, int larg3, int larg4, Gecode::IntSet *larg5) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  Gecode::IntSet *arg5 = 0 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,arg3,arg4,(Gecode::IntSet const &)*arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_set_2option (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, Gecode::IntSet *larg4, unsigned int larg5, unsigned int larg6) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  unsigned int arg6 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,(Gecode::IntSet const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_set_1option (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, Gecode::IntSet *larg4, unsigned int larg5) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  Gecode::IntSet *arg4 = 0 ;
  unsigned int arg5 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,(Gecode::IntSet const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT GeLisp::SetVarList *_wrap_new_SetVarList_set_set_default (GeLisp::GlSpace *larg1, int larg2, Gecode::IntSet *larg3, Gecode::IntSet *larg4) {
  GeLisp::SetVarList * lresult = (GeLisp::SetVarList *)0 ;
  GeLisp::GlSpace *arg1 = 0 ;
  int arg2 ;
  Gecode::IntSet *arg3 = 0 ;
  Gecode::IntSet *arg4 = 0 ;
  GeLisp::SetVarList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        result = (GeLisp::SetVarList *)new GeLisp::SetVarList(*arg1,arg2,(Gecode::IntSet const &)*arg3,(Gecode::IntSet const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::SetVarList *)0;
  }
}


EXPORT unsigned int _wrap_SetVarList_size (GeLisp::SetVarList *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)(arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT void _wrap_SetVarList_add (GeLisp::SetVarList *larg1, GeLisp::GlSetVar *larg2) {
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  GeLisp::GlSetVar *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        (arg1)->add(*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT Gecode::SetVarArgs *_wrap_SetVarList_get (GeLisp::SetVarList *larg1) {
  Gecode::SetVarArgs * lresult = (Gecode::SetVarArgs *)0 ;
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  Gecode::SetVarArgs *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          Gecode::SetVarArgs const &_result_ref = (arg1)->get();
          result = (Gecode::SetVarArgs *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::SetVarArgs *)0;
  }
}


EXPORT Gecode::SetVar *_wrap_SetVarList_getVar (GeLisp::SetVarList *larg1, int larg2) {
  Gecode::SetVar * lresult = (Gecode::SetVar *)0 ;
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  int arg2 ;
  Gecode::SetVar *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          Gecode::SetVar const &_result_ref = (arg1)->getVar(arg2);
          result = (Gecode::SetVar *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::SetVar *)0;
  }
}


EXPORT int _wrap_SetVarList_getIndexOfAVarInVector (GeLisp::SetVarList *larg1, int larg2) {
  int lresult = (int)0 ;
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)(arg1)->getIndexOfAVarInVector(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_SetVarList (GeLisp::SetVarList *larg1) {
  GeLisp::SetVarList *arg1 = (GeLisp::SetVarList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_delete_CPRelVarList (GeLisp::CPRelVarList *larg1) {
  GeLisp::CPRelVarList *arg1 = (GeLisp::CPRelVarList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::IntList *_wrap_new_IntList_size (int larg1) {
  GeLisp::IntList * lresult = (GeLisp::IntList *)0 ;
  int arg1 ;
  GeLisp::IntList *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (GeLisp::IntList *)new GeLisp::IntList(arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntList *)0;
  }
}


EXPORT GeLisp::IntList *_wrap_new_IntList_sizeAndDefaultValue (int larg1, int larg2) {
  GeLisp::IntList * lresult = (GeLisp::IntList *)0 ;
  int arg1 ;
  int arg2 ;
  GeLisp::IntList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (GeLisp::IntList *)new GeLisp::IntList(arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntList *)0;
  }
}


EXPORT GeLisp::IntList *_wrap_new_IntList_sizeAndStartAndInc (int larg1, int larg2, int larg3) {
  GeLisp::IntList * lresult = (GeLisp::IntList *)0 ;
  int arg1 ;
  int arg2 ;
  int arg3 ;
  GeLisp::IntList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::IntList *)new GeLisp::IntList(arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntList *)0;
  }
}


EXPORT Gecode::IntArgs *_wrap_IntList_get (GeLisp::IntList *larg1) {
  Gecode::IntArgs * lresult = (Gecode::IntArgs *)0 ;
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  Gecode::IntArgs *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          Gecode::IntArgs const &_result_ref = (arg1)->get();
          result = (Gecode::IntArgs *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::IntArgs *)0;
  }
}


EXPORT unsigned int _wrap_IntList_size (GeLisp::IntList *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)(arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_IntList_getVar (GeLisp::IntList *larg1, int larg2) {
  int lresult = (int)0 ;
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)(arg1)->getVar(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_IntList_setVar (GeLisp::IntList *larg1, int larg2, int larg3) {
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  int arg2 ;
  int arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        (arg1)->setVar(arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT char *_wrap_IntList_print (GeLisp::IntList *larg1) {
  char * lresult = (char *)0 ;
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  char *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (char *)(arg1)->print();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (char *)0;
  }
}


EXPORT void _wrap_delete_IntList (GeLisp::IntList *larg1) {
  GeLisp::IntList *arg1 = (GeLisp::IntList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT GeLisp::IntSetList *_wrap_new_IntSetList (int larg1, int larg2, int larg3) {
  GeLisp::IntSetList * lresult = (GeLisp::IntSetList *)0 ;
  int arg1 ;
  int arg2 ;
  int arg3 ;
  GeLisp::IntSetList *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (GeLisp::IntSetList *)new GeLisp::IntSetList(arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (GeLisp::IntSetList *)0;
  }
}


EXPORT Gecode::IntSetArgs *_wrap_IntSetList_get (GeLisp::IntSetList *larg1) {
  Gecode::IntSetArgs * lresult = (Gecode::IntSetArgs *)0 ;
  GeLisp::IntSetList *arg1 = (GeLisp::IntSetList *) 0 ;
  Gecode::IntSetArgs *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        {
          Gecode::IntSetArgs const &_result_ref = (arg1)->get();
          result = (Gecode::IntSetArgs *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::IntSetArgs *)0;
  }
}


EXPORT Gecode::IntSet *_wrap_IntSetList_getElement (GeLisp::IntSetList *larg1, int larg2) {
  Gecode::IntSet * lresult = (Gecode::IntSet *)0 ;
  GeLisp::IntSetList *arg1 = (GeLisp::IntSetList *) 0 ;
  int arg2 ;
  Gecode::IntSet *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          Gecode::IntSet const &_result_ref = (arg1)->getElement(arg2);
          result = (Gecode::IntSet *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (Gecode::IntSet *)0;
  }
}


EXPORT void _wrap_delete_IntSetList (GeLisp::IntSetList *larg1) {
  GeLisp::IntSetList *arg1 = (GeLisp::IntSetList *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT int _wrap_IntVar_min (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntVar const *)arg1)->min();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntVar_max (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntVar const *)arg1)->max();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntVar_med (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntVar const *)arg1)->med();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntVar_val (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntVar const *)arg1)->val();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT unsigned int _wrap_IntVar_size (IntVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntVar const *)arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_IntVar_width (IntVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntVar const *)arg1)->width();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_IntVar_regret_min (IntVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntVar const *)arg1)->regret_min();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_IntVar_regret_max (IntVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntVar const *)arg1)->regret_max();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_IntVar_range (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((IntVar const *)arg1)->range();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntVar_assigned (IntVar *larg1) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((IntVar const *)arg1)->assigned();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntVar_in (IntVar *larg1, int larg2) {
  int lresult = (int)0 ;
  IntVar *arg1 = (IntVar *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((IntVar const *)arg1)->in(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT IntVar *_wrap_new_IntVar () {
  IntVar * lresult = (IntVar *)0 ;
  IntVar *result = 0 ;
  
  try {
    {
      try {
        result = (IntVar *)new IntVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (IntVar *)0;
  }
}


EXPORT void _wrap_delete_IntVar (IntVar *larg1) {
  IntVar *arg1 = (IntVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT int _wrap_BoolVar_min (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((BoolVar const *)arg1)->min();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_max (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((BoolVar const *)arg1)->max();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_med (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((BoolVar const *)arg1)->med();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_val (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((BoolVar const *)arg1)->val();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT unsigned int _wrap_BoolVar_size (BoolVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((BoolVar const *)arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_BoolVar_width (BoolVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((BoolVar const *)arg1)->width();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_BoolVar_regret_min (BoolVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((BoolVar const *)arg1)->regret_min();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_BoolVar_regret_max (BoolVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((BoolVar const *)arg1)->regret_max();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_BoolVar_range (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((BoolVar const *)arg1)->range();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_in (BoolVar *larg1, int larg2) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((BoolVar const *)arg1)->in(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_zero (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((BoolVar const *)arg1)->zero();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_one (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((BoolVar const *)arg1)->one();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_BoolVar_none (BoolVar *larg1) {
  int lresult = (int)0 ;
  BoolVar *arg1 = (BoolVar *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((BoolVar const *)arg1)->none();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT BoolVar *_wrap_new_BoolVar () {
  BoolVar * lresult = (BoolVar *)0 ;
  BoolVar *result = 0 ;
  
  try {
    {
      try {
        result = (BoolVar *)new BoolVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (BoolVar *)0;
  }
}


EXPORT void _wrap_delete_BoolVar (BoolVar *larg1) {
  BoolVar *arg1 = (BoolVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT IntSet *_wrap_new_IntSet () {
  IntSet * lresult = (IntSet *)0 ;
  IntSet *result = 0 ;
  
  try {
    {
      try {
        result = (IntSet *)new IntSet();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (IntSet *)0;
  }
}


EXPORT IntSet *_wrap_new_IntSet_minmax (int larg1, int larg2) {
  IntSet * lresult = (IntSet *)0 ;
  int arg1 ;
  int arg2 ;
  IntSet *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (IntSet *)new IntSet(arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (IntSet *)0;
  }
}


EXPORT IntSet *_wrap_new_IntSet_n_element_of_array (int *larg1, int larg2) {
  IntSet * lresult = (IntSet *)0 ;
  int *arg1 ;
  int arg2 ;
  IntSet *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (IntSet *)new IntSet((int const (*))arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (IntSet *)0;
  }
}


EXPORT IntSet *_wrap_new_IntSet_n_element_of_array_minmax (int (*larg1)[2], int larg2) {
  IntSet * lresult = (IntSet *)0 ;
  int (*arg1)[2] ;
  int arg2 ;
  IntSet *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (IntSet *)new IntSet((int const (*)[2])arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (IntSet *)0;
  }
}


EXPORT int _wrap_IntSet_ranges (IntSet *larg1) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntSet const *)arg1)->ranges();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntSet_min_index (IntSet *larg1, int larg2) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)((IntSet const *)arg1)->min(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntSet_max_index (IntSet *larg1, int larg2) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)((IntSet const *)arg1)->max(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT unsigned int _wrap_IntSet_width_index (IntSet *larg1, int larg2) {
  unsigned int lresult = (unsigned int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int arg2 ;
  unsigned int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (unsigned int)((IntSet const *)arg1)->width(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_IntSet_in (IntSet *larg1, int larg2) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((IntSet const *)arg1)->in(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT unsigned int _wrap_IntSet_size (IntSet *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntSet const *)arg1)->size();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_IntSet_width (IntSet *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((IntSet const *)arg1)->width();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_IntSet_min (IntSet *larg1) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntSet const *)arg1)->min();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_IntSet_max (IntSet *larg1) {
  int lresult = (int)0 ;
  IntSet *arg1 = (IntSet *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((IntSet const *)arg1)->max();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT void _wrap_delete_IntSet (IntSet *larg1) {
  IntSet *arg1 = (IntSet *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVar_option (Space *larg1, IntVar *larg2, int larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVar_default (Space *larg1, IntVar *larg2, int larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        dom(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVA_option (Space *larg1, IntVarArgs *larg2, int larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVA_default (Space *larg1, IntVarArgs *larg2, int larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarWithBounds_option (Space *larg1, IntVar *larg2, int larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarWithBounds_default (Space *larg1, IntVar *larg2, int larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVAWithBounds_option (Space *larg1, IntVarArgs *larg2, int larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVAWithBounds_default (Space *larg1, IntVarArgs *larg2, int larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntSet_option (Space *larg1, IntVar *larg2, IntSet *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntSet *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,arg2,(IntSet const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntSet_default (Space *larg1, IntVar *larg2, IntSet *larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntSet *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        dom(*arg1,arg2,(IntSet const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVAAndIntSet_option (Space *larg1, IntVarArgs *larg2, IntSet *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIVAAndIntSet_default (Space *larg1, IntVarArgs *larg2, IntSet *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        dom(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntAndBoolVar_option (Space *larg1, IntVar *larg2, int larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntAndBoolVar_default (Space *larg1, IntVar *larg2, int larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndBoolVarWithBounds_option (Space *larg1, IntVar *larg2, int larg3, int larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndBoolVarWithBounds_default (Space *larg1, IntVar *larg2, int larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  int arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntSetAndBoolVarWithBounds_option (Space *larg1, IntVar *larg2, IntSet *larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntSet *arg3 = 0 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        dom(*arg1,arg2,(IntSet const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onIntVarAndIntSetAndBoolVarWithBounds_default (Space *larg1, IntVar *larg2, IntSet *larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntSet *arg3 = 0 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        dom(*arg1,arg2,(IntSet const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVar_option (Space *larg1, IntVar *larg2, IntRelType larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVar_default (Space *larg1, IntVar *larg2, IntRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndIVA_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndIVA_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndInt_option (Space *larg1, IntVar *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndInt_default (Space *larg1, IntVar *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndInt_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndInt_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2IntVarAndBoolVar_option (Space *larg1, IntVar *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2IntVarAndBoolVar_default (Space *larg1, IntVar *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndIntAndBoolVar_option (Space *larg1, IntVar *larg2, IntRelType larg3, int larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndIntAndBoolVar_default (Space *larg1, IntVar *larg2, IntRelType larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVA_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVA_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndIVA_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVarArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVarArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,(IntVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndIVA_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVarArgs *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVarArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(IntVarArgs const &)*arg2,arg3,(IntVarArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVar_option (Space *larg1, BoolVar *larg2, IntRelType larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVar_default (Space *larg1, BoolVar *larg2, IntRelType larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on3BoolVar_option (Space *larg1, BoolVar *larg2, IntRelType larg3, BoolVar *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on3BoolVar_default (Space *larg1, BoolVar *larg2, IntRelType larg3, BoolVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndBoolVar_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndBoolVar_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBoolVarAndInt_option (Space *larg1, BoolVar *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBoolVarAndInt_default (Space *larg1, BoolVar *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVarAndInt_option (Space *larg1, BoolVar *larg2, IntRelType larg3, int larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVarAndInt_default (Space *larg1, BoolVar *larg2, IntRelType larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndInt_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndInt_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BVA_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, BoolVarArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  BoolVarArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,(BoolVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BVA_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, BoolVarArgs *larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  BoolVarArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,(BoolVarArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVA_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVA_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        rel(*arg1,(BoolVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on3BoolVarWithBoolOpType_option (Space *larg1, BoolVar *larg2, BoolOpType larg3, BoolVar *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  BoolOpType arg3 ;
  BoolVar arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on3BoolVarWithBoolOpType_default (Space *larg1, BoolVar *larg2, BoolOpType larg3, BoolVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  BoolOpType arg3 ;
  BoolVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVarAndIntWithBoolOpType_option (Space *larg1, BoolVar *larg2, BoolOpType larg3, BoolVar *larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  BoolOpType arg3 ;
  BoolVar arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2BoolVarAndIntWithBoolOpType_default (Space *larg1, BoolVar *larg2, BoolOpType larg3, BoolVar *larg4, int larg5) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  BoolOpType arg3 ;
  BoolVar arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndBoolVarWithBoolOpType_option (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,(BoolVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndBoolVarWithBoolOpType_default (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,(BoolVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndIntWithBoolOpType_option (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        rel(*arg1,arg2,(BoolVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onBVAAndIntWithBoolOpType_default (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        rel(*arg1,arg2,(BoolVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_clause_onBoolVar_option (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVarArgs *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVarArgs *arg4 = 0 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        clause(*arg1,arg2,(BoolVarArgs const &)*arg3,(BoolVarArgs const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_clause_onBoolVar_default (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVarArgs *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVarArgs *arg4 = 0 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        clause(*arg1,arg2,(BoolVarArgs const &)*arg3,(BoolVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_clause_onInt_option (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVarArgs *larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVarArgs *arg4 = 0 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        clause(*arg1,arg2,(BoolVarArgs const &)*arg3,(BoolVarArgs const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_clause_onInt_default (Space *larg1, BoolOpType larg2, BoolVarArgs *larg3, BoolVarArgs *larg4, int larg5) {
  Space *arg1 = 0 ;
  BoolOpType arg2 ;
  BoolVarArgs *arg3 = 0 ;
  BoolVarArgs *arg4 = 0 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        clause(*arg1,arg2,(BoolVarArgs const &)*arg3,(BoolVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAnd2IntVar_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAnd2IntVar_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAndIntVarAndInt_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAndIntVarAndInt_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAndIntVarAndBoolVar_option (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, BoolVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  BoolVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAndIntVarAndBoolVar_default (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAndIntVarAndInt_option (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAndIntVarAndInt_default (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAnd3IntVarAnd2Int_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, IntVar *larg7, IntConLevel larg8) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  IntVar arg7 ;
  IntConLevel arg8 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  arg8 = larg8;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7,arg8);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onIVAAnd3IntVarAnd2Int_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, IntVar *larg7) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  IntVar arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  try {
    {
      try {
        element(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAnd2IntVarAnd2IntAndBoolVar_option (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, BoolVar *larg7, IntConLevel larg8) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  BoolVar arg7 ;
  IntConLevel arg8 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  arg8 = larg8;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7,arg8);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onBVAAnd2IntVarAnd2IntAndBoolVar_default (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, BoolVar *larg7) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  BoolVar arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  try {
    {
      try {
        element(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_distinct_option (Space *larg1, IntVarArgs *larg2, IntConLevel larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntConLevel arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        distinct(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_distinct_default (Space *larg1, IntVarArgs *larg2) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        distinct(*arg1,(IntVarArgs const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_distinct_constant_added_to_var_option (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        distinct(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_distinct_constant_added_to_var_default (Space *larg1, IntArgs *larg2, IntVarArgs *larg3) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        distinct(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIVAAndIVA_option (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIVAAndIVA_default (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_on2IVAAnd2IntVar_option (Space *larg1, IntVarArgs *larg2, int larg3, IntVarArgs *larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntVarArgs *arg4 = 0 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,arg3,(IntVarArgs const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_on2IVAAnd2IntVar_default (Space *larg1, IntVarArgs *larg2, int larg3, IntVarArgs *larg4, int larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntVarArgs *arg4 = 0 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,arg3,(IntVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBoolVarAndIntVar_option (Space *larg1, BoolVar *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        channel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBoolVarAndIntVar_default (Space *larg1, BoolVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        channel(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIntVarAndBoolVar_option (Space *larg1, IntVar *larg2, BoolVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  BoolVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        channel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIntVarAndBoolVar_default (Space *larg1, IntVar *larg2, BoolVar *larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  BoolVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        channel(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBVAAndIntVar_2option (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        channel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBVAAndIntVar_1option (Space *larg1, BoolVarArgs *larg2, IntVar *larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        channel(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBVAAndIntVar_default (Space *larg1, BoolVarArgs *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        channel(*arg1,(BoolVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sorted_onIVAAndIVA_option (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        sorted(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sorted_onIVAAndIVA_default (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        sorted(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sorted_on3IVA_option (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntVarArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntVarArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        sorted(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,(IntVarArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sorted_on3IVA_default (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntVarArgs *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntVarArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        sorted(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,(IntVarArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAnd2Int_option (Space *larg1, IntVarArgs *larg2, int larg3, IntRelType larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntRelType arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAnd2Int_default (Space *larg1, IntVarArgs *larg2, int larg3, IntRelType larg4, int larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntRelType arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntVarAndInt_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntRelType larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntRelType arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntVarAndInt_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntRelType larg4, int larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntRelType arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntArgsAndInt_option (Space *larg1, IntVarArgs *larg2, IntArgs *larg3, IntRelType larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntArgsAndInt_default (Space *larg1, IntVarArgs *larg2, IntArgs *larg3, IntRelType larg4, int larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntAndIntVar_option (Space *larg1, IntVarArgs *larg2, int larg3, IntRelType larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntAndIntVar_default (Space *larg1, IntVarArgs *larg2, int larg3, IntRelType larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  int arg3 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAnd2IntVar_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntRelType larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAnd2IntVar_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntRelType larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntArgsAndIntVar_option (Space *larg1, IntVarArgs *larg2, IntArgs *larg3, IntRelType larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntArgsAndIntVar_default (Space *larg1, IntVarArgs *larg2, IntArgs *larg3, IntRelType larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_on2IVA_option (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_on2IVA_default (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndISA_option (Space *larg1, IntVarArgs *larg2, IntSetArgs *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSetArgs *arg3 = 0 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSetArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndISA_default (Space *larg1, IntVarArgs *larg2, IntSetArgs *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSetArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSetArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_on2IVAAndIntArgs_option (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,(IntArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_on2IVAAndIntArgs_default (Space *larg1, IntVarArgs *larg2, IntVarArgs *larg3, IntArgs *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntVarArgs const &)*arg3,(IntArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndISAIntArgs_option (Space *larg1, IntVarArgs *larg2, IntSetArgs *larg3, IntArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSetArgs *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSetArgs const &)*arg3,(IntArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndISAIntArgs_default (Space *larg1, IntVarArgs *larg2, IntSetArgs *larg3, IntArgs *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSetArgs *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSetArgs const &)*arg3,(IntArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntSetIntArgs_option (Space *larg1, IntVarArgs *larg2, IntSet *larg3, IntArgs *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3,(IntArgs const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_count_onIVAAndIntSetIntArgs_default (Space *larg1, IntVarArgs *larg2, IntSet *larg3, IntArgs *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  IntArgs *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        count(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3,(IntArgs const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_IVA_option (Space *larg1, IntVarArgs *larg2, IntSet *larg3, int larg4, int larg5, int larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        sequence(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_IVA_default (Space *larg1, IntVarArgs *larg2, IntSet *larg3, int larg4, int larg5, int larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        sequence(*arg1,(IntVarArgs const &)*arg2,(IntSet const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_BVA_option (Space *larg1, BoolVarArgs *larg2, IntSet *larg3, int larg4, int larg5, int larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  arg7 = larg7;
  try {
    {
      try {
        sequence(*arg1,(BoolVarArgs const &)*arg2,(IntSet const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_BVA_default (Space *larg1, BoolVarArgs *larg2, IntSet *larg3, int larg4, int larg5, int larg6) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntSet *arg3 = 0 ;
  int arg4 ;
  int arg5 ;
  int arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        sequence(*arg1,(BoolVarArgs const &)*arg2,(IntSet const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_on3IntVar_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        min(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_on3IntVar_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        min(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_onIVAANDIntVar_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        min(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_onIVAANDIntVar_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        min(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_on3IntVar_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        max(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_on3IntVar_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        max(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_onIVAANDIntVar_option (Space *larg1, IntVarArgs *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        max(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_onIVAANDIntVar_default (Space *larg1, IntVarArgs *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        max(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_abs_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        abs(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_abs_default (Space *larg1, IntVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        abs(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_mult_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        mult(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_mult_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        mult(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sqr_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        sqr(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sqr_default (Space *larg1, IntVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        sqr(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sqrt_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntConLevel larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntConLevel arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = larg4;
  try {
    {
      try {
        sqrt(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sqrt_default (Space *larg1, IntVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        sqrt(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_divmod_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        divmod(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_divmod_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        divmod(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_div_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        div(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_div_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        div(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_mod_option (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        mod(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_mod_default (Space *larg1, IntVar *larg2, IntVar *larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntVar arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        mod(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndInt_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndInt_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntVar_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntVar_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntAndBoolVar_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntAndBoolVar_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntVarAndBoolVar_option (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIVAAndIntVarAndBoolVar_default (Space *larg1, IntVarArgs *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndInt_option (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndInt_default (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, int larg5) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntVar_option (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntVar_default (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntAndBoolVar_option (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, int larg5, BoolVar *larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  BoolVar arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntAndBoolVar_default (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, int larg5, BoolVar *larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  BoolVar arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntVarAndBoolVar_option (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, IntVar *larg5, BoolVar *larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  BoolVar arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndIVAAndIntVarAndBoolVar_default (Space *larg1, IntArgs *larg2, IntVarArgs *larg3, IntRelType larg4, IntVar *larg5, BoolVar *larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  BoolVar arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(IntVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndInt_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndInt_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndBoolVar_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndBoolVar_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndIntVar_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, IntVar *larg4, IntConLevel larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  IntConLevel arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndIntVar_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndIntVarAndBoolVar_option (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onBVAAndIntVarAndBoolVar_default (Space *larg1, BoolVarArgs *larg2, IntRelType larg3, IntVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndInt_option (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, int larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndInt_default (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, int larg5) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntAndBoolVar_option (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, int larg5, BoolVar *larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  BoolVar arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntAndBoolVar_default (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, int larg5, BoolVar *larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  int arg5 ;
  BoolVar arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntVar_option (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, IntVar *larg5, IntConLevel larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  IntConLevel arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntVar_default (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntVarAndBoolVar_option (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, IntVar *larg5, BoolVar *larg6, IntConLevel larg7) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  BoolVar arg6 ;
  IntConLevel arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  arg7 = larg7;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_linear_onIntArgsAndBVAAndIntVarAndBoolVar_default (Space *larg1, IntArgs *larg2, BoolVarArgs *larg3, IntRelType larg4, IntVar *larg5, BoolVar *larg6) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  BoolVarArgs *arg3 = 0 ;
  IntRelType arg4 ;
  IntVar arg5 ;
  BoolVar arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = *larg6;
  try {
    {
      try {
        linear(*arg1,(IntArgs const &)*arg2,(BoolVarArgs const &)*arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onIVA_2option (Space *larg1, IntVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4, VarBranchOptions *larg5, ValBranchOptions *larg6) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  ValBranchOptions *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        branch(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5,(ValBranchOptions const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onIVA_1option (Space *larg1, IntVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4, VarBranchOptions *larg5) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        branch(*arg1,(IntVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onIVA_default (Space *larg1, IntVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,(IntVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onIntVar_option (Space *larg1, IntVar *larg2, IntValBranch larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntValBranch arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onIntVar_default (Space *larg1, IntVar *larg2, IntValBranch larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntValBranch arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        branch(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onBVA_2option (Space *larg1, BoolVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4, VarBranchOptions *larg5, ValBranchOptions *larg6) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  ValBranchOptions *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        branch(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5,(ValBranchOptions const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onBVA_1option (Space *larg1, BoolVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4, VarBranchOptions *larg5) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        branch(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onBVA_default (Space *larg1, BoolVarArgs *larg2, IntVarBranch larg3, IntValBranch larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntVarBranch arg3 ;
  IntValBranch arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,(BoolVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onBoolVar_option (Space *larg1, BoolVar *larg2, IntValBranch larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntValBranch arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onBoolVar_default (Space *larg1, BoolVar *larg2, IntValBranch larg3) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntValBranch arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        branch(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_IntVarArgs_option (Space *larg1, IntVarArgs *larg2, IntAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,(IntVarArgs const &)*arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_IntVarArgs_default (Space *larg1, IntVarArgs *larg2, IntAssign larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  IntAssign arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_IntVar_option (Space *larg1, IntVar *larg2, IntAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_IntVar_default (Space *larg1, IntVar *larg2, IntAssign larg3) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntAssign arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_BoolVarArgs_option (Space *larg1, BoolVarArgs *larg2, IntAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,(BoolVarArgs const &)*arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_BoolVarArgs_default (Space *larg1, BoolVarArgs *larg2, IntAssign larg3) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  IntAssign arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,(BoolVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_BoolVar_option (Space *larg1, BoolVar *larg2, IntAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_BoolVar_default (Space *larg1, BoolVar *larg2, IntAssign larg3) {
  Space *arg1 = 0 ;
  BoolVar arg2 ;
  IntAssign arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT unsigned int _wrap_SetVar_glbSize (SetVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((SetVar const *)arg1)->glbSize();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_SetVar_lubSize (SetVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((SetVar const *)arg1)->lubSize();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_SetVar_unknownSize (SetVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((SetVar const *)arg1)->unknownSize();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_SetVar_cardMin (SetVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((SetVar const *)arg1)->cardMin();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT unsigned int _wrap_SetVar_cardMax (SetVar *larg1) {
  unsigned int lresult = (unsigned int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  unsigned int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (unsigned int)((SetVar const *)arg1)->cardMax();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (unsigned int)0;
  }
}


EXPORT int _wrap_SetVar_lubMin (SetVar *larg1) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((SetVar const *)arg1)->lubMin();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SetVar_lubMax (SetVar *larg1) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((SetVar const *)arg1)->lubMax();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SetVar_glbMin (SetVar *larg1) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((SetVar const *)arg1)->glbMin();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SetVar_glbMax (SetVar *larg1) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((SetVar const *)arg1)->glbMax();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SetVar_contains (SetVar *larg1, int larg2) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((SetVar const *)arg1)->contains(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_SetVar_notContains (SetVar *larg1, int larg2) {
  int lresult = (int)0 ;
  SetVar *arg1 = (SetVar *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((SetVar const *)arg1)->notContains(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT SetVar *_wrap_new_SetVar () {
  SetVar * lresult = (SetVar *)0 ;
  SetVar *result = 0 ;
  
  try {
    {
      try {
        result = (SetVar *)new SetVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (SetVar *)0;
  }
}


EXPORT void _wrap_delete_SetVar (SetVar *larg1) {
  SetVar *arg1 = (SetVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAndInt (Space *larg1, SetVar *larg2, SetRelType larg3, int larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  int arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAnd2Int (Space *larg1, SetVar *larg2, SetRelType larg3, int larg4, int larg5) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  int arg4 ;
  int arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAndIntSet (Space *larg1, SetVar *larg2, SetRelType larg3, IntSet *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  IntSet *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,(IntSet const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAndIntAndBoolVar (Space *larg1, SetVar *larg2, SetRelType larg3, int larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  int arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAnd2IntAndBoolVar (Space *larg1, SetVar *larg2, SetRelType larg3, int larg4, int larg5, BoolVar *larg6) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  int arg4 ;
  int arg5 ;
  BoolVar arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_dom_onSetVarAndIntSetAndBoolVar (Space *larg1, SetVar *larg2, SetRelType larg3, IntSet *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  IntSet *arg4 = 0 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        dom(*arg1,arg2,arg3,(IntSet const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_cardinality_onSetVarAnd2Int (Space *larg1, SetVar *larg2, unsigned int larg3, unsigned int larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  unsigned int arg3 ;
  unsigned int arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        cardinality(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2SetVar (Space *larg1, SetVar *larg2, SetRelType larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2SetVarAndBoolVar (Space *larg1, SetVar *larg2, SetRelType larg3, SetVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  SetVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSetVarAndIntVar (Space *larg1, SetVar *larg2, SetRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndSetVar (Space *larg1, IntVar *larg2, SetRelType larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  SetRelType arg3 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSetVarAndIntVarAndBoolVar (Space *larg1, SetVar *larg2, SetRelType larg3, IntVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetRelType arg3 ;
  IntVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndSetVarAndBoolVar (Space *larg1, IntVar *larg2, SetRelType larg3, SetVar *larg4, BoolVar *larg5) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  SetRelType arg3 ;
  SetVar arg4 ;
  BoolVar arg5 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSetVarAndIntVarForAll (Space *larg1, SetVar *larg2, IntRelType larg3, IntVar *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntRelType arg3 ;
  IntVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntVarAndSetVarForAll (Space *larg1, IntVar *larg2, IntRelType larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  IntVar arg2 ;
  IntRelType arg3 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on3SetVar (Space *larg1, SetVar *larg2, SetOpType larg3, SetVar *larg4, SetRelType larg5, SetVar *larg6) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetOpType arg3 ;
  SetVar arg4 ;
  SetRelType arg5 ;
  SetVar arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSVAAndSetVar (Space *larg1, SetOpType larg2, SetVarArgs *larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  SetVarArgs *arg3 = 0 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,(SetVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSVAAndIntSetAndSetVar (Space *larg1, SetOpType larg2, SetVarArgs *larg3, IntSet *larg4, SetVar *larg5) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  SetVarArgs *arg3 = 0 ;
  IntSet *arg4 = 0 ;
  SetVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,(SetVarArgs const &)*arg3,(IntSet const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndIntSetAndSetVar (Space *larg1, SetOpType larg2, IntVarArgs *larg3, IntSet *larg4, SetVar *larg5) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  IntVarArgs *arg3 = 0 ;
  IntSet *arg4 = 0 ;
  SetVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = *larg5;
  try {
    {
      try {
        rel(*arg1,arg2,(IntVarArgs const &)*arg3,(IntSet const &)*arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIVAAndSetVar (Space *larg1, SetOpType larg2, IntVarArgs *larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  IntVarArgs *arg3 = 0 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  try {
    {
      try {
        rel(*arg1,arg2,(IntVarArgs const &)*arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntSetAnd2SetVar (Space *larg1, IntSet *larg2, SetOpType larg3, SetVar *larg4, SetRelType larg5, SetVar *larg6) {
  Space *arg1 = 0 ;
  IntSet *arg2 = 0 ;
  SetOpType arg3 ;
  SetVar arg4 ;
  SetRelType arg5 ;
  SetVar arg6 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        rel(*arg1,(IntSet const &)*arg2,arg3,arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSetVarAndIntSetAndSetVar (Space *larg1, SetVar *larg2, SetOpType larg3, IntSet *larg4, SetRelType larg5, SetVar *larg6) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetOpType arg3 ;
  IntSet *arg4 = 0 ;
  SetRelType arg5 ;
  SetVar arg6 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = *larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,(IntSet const &)*arg4,arg5,arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_on2SetVarAndIntSet (Space *larg1, SetVar *larg2, SetOpType larg3, SetVar *larg4, SetRelType larg5, IntSet *larg6) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetOpType arg3 ;
  SetVar arg4 ;
  SetRelType arg5 ;
  IntSet *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,arg4,arg5,(IntSet const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onIntSetAndSetVarAndIntSet (Space *larg1, IntSet *larg2, SetOpType larg3, SetVar *larg4, SetRelType larg5, IntSet *larg6) {
  Space *arg1 = 0 ;
  IntSet *arg2 = 0 ;
  SetOpType arg3 ;
  SetVar arg4 ;
  SetRelType arg5 ;
  IntSet *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,(IntSet const &)*arg2,arg3,arg4,arg5,(IntSet const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_rel_onSetVarAndIntSetAndIntSet (Space *larg1, SetVar *larg2, SetOpType larg3, IntSet *larg4, SetRelType larg5, IntSet *larg6) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetOpType arg3 ;
  IntSet *arg4 = 0 ;
  SetRelType arg5 ;
  IntSet *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        rel(*arg1,arg2,arg3,(IntSet const &)*arg4,arg5,(IntSet const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_convex_onSetVar (Space *larg1, SetVar *larg2) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  try {
    {
      try {
        convex(*arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_convex_on2SetVar (Space *larg1, SetVar *larg2, SetVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        convex(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_onSVA (Space *larg1, SetVarArgs *larg2) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        sequence(*arg1,(SetVarArgs const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_sequence_onSVAAndSetVar (Space *larg1, SetVarArgs *larg2, SetVar *larg3) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        sequence(*arg1,(SetVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_atmostOne (Space *larg1, SetVarArgs *larg2, unsigned int larg3) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  unsigned int arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        atmostOne(*arg1,(SetVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_onSetVarAndIntVar (Space *larg1, SetVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        min(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_notMin (Space *larg1, SetVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        notMin(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_min_onSetVarAndIntVarAndBoolVar (Space *larg1, SetVar *larg2, IntVar *larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        min(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_onSetVarAndIntVar (Space *larg1, SetVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        max(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_notMax (Space *larg1, SetVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        notMax(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_max_onSetVarAndIntVarAndBoolVar (Space *larg1, SetVar *larg2, IntVar *larg3, BoolVar *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  BoolVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        max(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIVAAndSetVar (Space *larg1, IntVarArgs *larg2, SetVar *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  SetVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onIVAAndSVA (Space *larg1, IntVarArgs *larg2, SetVarArgs *larg3) {
  Space *arg1 = 0 ;
  IntVarArgs *arg2 = 0 ;
  SetVarArgs *arg3 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        channel(*arg1,(IntVarArgs const &)*arg2,(SetVarArgs const &)*arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_channel_onBVAAndSetVar (Space *larg1, BoolVarArgs *larg2, SetVar *larg3) {
  Space *arg1 = 0 ;
  BoolVarArgs *arg2 = 0 ;
  SetVar arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  try {
    {
      try {
        channel(*arg1,(BoolVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_cardinality_onSetVarAndIntVar (Space *larg1, SetVar *larg2, IntVar *larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  IntVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        cardinality(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_weights (Space *larg1, IntArgs *larg2, IntArgs *larg3, SetVar *larg4, IntVar *larg5) {
  Space *arg1 = 0 ;
  IntArgs *arg2 = 0 ;
  IntArgs *arg3 = 0 ;
  SetVar arg4 ;
  IntVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        weights(*arg1,(IntArgs const &)*arg2,(IntArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onSVAAnd2SetVar_option (Space *larg1, SetOpType larg2, SetVarArgs *larg3, SetVar *larg4, SetVar *larg5, IntSet *larg6) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  SetVarArgs *arg3 = 0 ;
  SetVar arg4 ;
  SetVar arg5 ;
  IntSet *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        element(*arg1,arg2,(SetVarArgs const &)*arg3,arg4,arg5,(IntSet const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onSVAAnd2SetVar_default (Space *larg1, SetOpType larg2, SetVarArgs *larg3, SetVar *larg4, SetVar *larg5) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  SetVarArgs *arg3 = 0 ;
  SetVar arg4 ;
  SetVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        element(*arg1,arg2,(SetVarArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onISAAnd2SetVar_option (Space *larg1, SetOpType larg2, IntSetArgs *larg3, SetVar *larg4, SetVar *larg5, IntSet *larg6) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  IntSetArgs *arg3 = 0 ;
  SetVar arg4 ;
  SetVar arg5 ;
  IntSet *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  arg6 = larg6;
  try {
    {
      try {
        element(*arg1,arg2,(IntSetArgs const &)*arg3,arg4,arg5,(IntSet const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onISAAnd2SetVar_default (Space *larg1, SetOpType larg2, IntSetArgs *larg3, SetVar *larg4, SetVar *larg5) {
  Space *arg1 = 0 ;
  SetOpType arg2 ;
  IntSetArgs *arg3 = 0 ;
  SetVar arg4 ;
  SetVar arg5 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = *larg4;
  arg5 = *larg5;
  try {
    {
      try {
        element(*arg1,arg2,(IntSetArgs const &)*arg3,arg4,arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onSVAAndIntVarAndSetVar (Space *larg1, SetVarArgs *larg2, IntVar *larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        element(*arg1,(SetVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onISAAndIntVarAndSetVar (Space *larg1, IntSetArgs *larg2, IntVar *larg3, SetVar *larg4) {
  Space *arg1 = 0 ;
  IntSetArgs *arg2 = 0 ;
  IntVar arg3 ;
  SetVar arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        element(*arg1,(IntSetArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onISAAnd2IntVarAnd2IntAndSetVar (Space *larg1, IntSetArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, SetVar *larg7) {
  Space *arg1 = 0 ;
  IntSetArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  SetVar arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  try {
    {
      try {
        element(*arg1,(IntSetArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_element_onSVAAnd2IntVarAnd2IntAndSetVar (Space *larg1, SetVarArgs *larg2, IntVar *larg3, int larg4, IntVar *larg5, int larg6, SetVar *larg7) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  IntVar arg3 ;
  int arg4 ;
  IntVar arg5 ;
  int arg6 ;
  SetVar arg7 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = *larg3;
  arg4 = larg4;
  arg5 = *larg5;
  arg6 = larg6;
  arg7 = *larg7;
  try {
    {
      try {
        element(*arg1,(SetVarArgs const &)*arg2,arg3,arg4,arg5,arg6,arg7);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onSVA_2option (Space *larg1, SetVarArgs *larg2, SetVarBranch larg3, SetValBranch larg4, VarBranchOptions *larg5, ValBranchOptions *larg6) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetVarBranch arg3 ;
  SetValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  ValBranchOptions *arg6 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  arg6 = larg6;
  try {
    {
      try {
        branch(*arg1,(SetVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5,(ValBranchOptions const &)*arg6);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onSVA_1option (Space *larg1, SetVarArgs *larg2, SetVarBranch larg3, SetValBranch larg4, VarBranchOptions *larg5) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetVarBranch arg3 ;
  SetValBranch arg4 ;
  VarBranchOptions *arg5 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  arg5 = larg5;
  try {
    {
      try {
        branch(*arg1,(SetVarArgs const &)*arg2,arg3,arg4,(VarBranchOptions const &)*arg5);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onSVA_default (Space *larg1, SetVarArgs *larg2, SetVarBranch larg3, SetValBranch larg4) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetVarBranch arg3 ;
  SetValBranch arg4 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,(SetVarArgs const &)*arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onSetVar_option (Space *larg1, SetVar *larg2, SetValBranch larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetValBranch arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        branch(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_branch_onSetVar_default (Space *larg1, SetVar *larg2, SetValBranch larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetValBranch arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        branch(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_onSVA_option (Space *larg1, SetVarArgs *larg2, SetAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,(SetVarArgs const &)*arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_onSVA_default (Space *larg1, SetVarArgs *larg2, SetAssign larg3) {
  Space *arg1 = 0 ;
  SetVarArgs *arg2 = 0 ;
  SetAssign arg3 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,(SetVarArgs const &)*arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_onSetVar_option (Space *larg1, SetVar *larg2, SetAssign larg3, ValBranchOptions *larg4) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetAssign arg3 ;
  ValBranchOptions *arg4 = 0 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  arg4 = larg4;
  try {
    {
      try {
        assign(*arg1,arg2,arg3,(ValBranchOptions const &)*arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_assign_onSetVar_default (Space *larg1, SetVar *larg2, SetAssign larg3) {
  Space *arg1 = 0 ;
  SetVar arg2 ;
  SetAssign arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = larg3;
  try {
    {
      try {
        assign(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT MPG::CPRel::Tuple *_wrap_new_Tuple_arity (int larg1) {
  MPG::CPRel::Tuple * lresult = (MPG::CPRel::Tuple *)0 ;
  int arg1 ;
  MPG::CPRel::Tuple *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (MPG::CPRel::Tuple *)new MPG::CPRel::Tuple(arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRel::Tuple *)0;
  }
}


EXPORT MPG::CPRel::Tuple *_wrap_new_Tuple_binary (int larg1, int larg2) {
  MPG::CPRel::Tuple * lresult = (MPG::CPRel::Tuple *)0 ;
  int arg1 ;
  int arg2 ;
  MPG::CPRel::Tuple *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (MPG::CPRel::Tuple *)new MPG::CPRel::Tuple(arg1,arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRel::Tuple *)0;
  }
}


EXPORT MPG::CPRel::Tuple *_wrap_new_Tuple_ternary (int larg1, int larg2, int larg3) {
  MPG::CPRel::Tuple * lresult = (MPG::CPRel::Tuple *)0 ;
  int arg1 ;
  int arg2 ;
  int arg3 ;
  MPG::CPRel::Tuple *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  arg3 = larg3;
  try {
    {
      try {
        result = (MPG::CPRel::Tuple *)new MPG::CPRel::Tuple(arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRel::Tuple *)0;
  }
}


EXPORT void _wrap_delete_Tuple (MPG::CPRel::Tuple *larg1) {
  MPG::CPRel::Tuple *arg1 = (MPG::CPRel::Tuple *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT int *_wrap_Tuple___aref__ (MPG::CPRel::Tuple *larg1, int larg2) {
  int * lresult = (int *)0 ;
  MPG::CPRel::Tuple *arg1 = (MPG::CPRel::Tuple *) 0 ;
  int arg2 ;
  int *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          int &_result_ref = (arg1)->operator [](arg2);
          result = (int *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int *)0;
  }
}


EXPORT int _wrap_Tuple_at (MPG::CPRel::Tuple *larg1, int larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::Tuple *arg1 = (MPG::CPRel::Tuple *) 0 ;
  int arg2 ;
  int result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (int)((MPG::CPRel::Tuple const *)arg1)->at(arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_Tuple_arity (MPG::CPRel::Tuple *larg1) {
  int lresult = (int)0 ;
  MPG::CPRel::Tuple *arg1 = (MPG::CPRel::Tuple *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((MPG::CPRel::Tuple const *)arg1)->arity();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT std::ostream *_wrap___lshift__ (std::ostream *larg1, MPG::CPRel::Tuple *larg2) {
  std::ostream * lresult = (std::ostream *)0 ;
  std::ostream *arg1 = 0 ;
  MPG::CPRel::Tuple *arg2 = 0 ;
  std::ostream *result = 0 ;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        {
          std::ostream &_result_ref = MPG::CPRel::operator <<(*arg1,(MPG::CPRel::Tuple const &)*arg2);
          result = (std::ostream *) &_result_ref;
        }
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (std::ostream *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_new_GRelation (int larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  int arg1 ;
  MPG::CPRel::GRelation *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (MPG::CPRel::GRelation *)new MPG::CPRel::GRelation(arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT void _wrap_delete_GRelation (MPG::CPRel::GRelation *larg1) {
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_GRelation_create_full (int larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  int arg1 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = MPG::CPRel::GRelation::create_full(arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT int _wrap_GRelation_add (MPG::CPRel::GRelation *larg1, MPG::CPRel::Tuple *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::Tuple *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)(arg1)->add((MPG::CPRel::Tuple const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_unionAssign (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)(arg1)->unionAssign((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_differenceAssign (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)(arg1)->differenceAssign((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_GRelation_difference (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = ((MPG::CPRel::GRelation const *)arg1)->difference((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_GRelation_intersect (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = ((MPG::CPRel::GRelation const *)arg1)->intersect((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_GRelation_complement (MPG::CPRel::GRelation *larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRel::GRelation const *)arg1)->complement();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT int _wrap_GRelation_subsetEq (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((MPG::CPRel::GRelation const *)arg1)->subsetEq((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_superset (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((MPG::CPRel::GRelation const *)arg1)->superset((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_disjoint (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((MPG::CPRel::GRelation const *)arg1)->disjoint((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_eq (MPG::CPRel::GRelation *larg1, MPG::CPRel::GRelation *larg2) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  MPG::CPRel::GRelation *arg2 = 0 ;
  bool result;
  
  arg1 = larg1;
  arg2 = larg2;
  try {
    {
      try {
        result = (bool)((MPG::CPRel::GRelation const *)arg1)->eq((MPG::CPRel::GRelation const &)*arg2);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT int _wrap_GRelation_arity (MPG::CPRel::GRelation *larg1) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  int result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (int)((MPG::CPRel::GRelation const *)arg1)->arity();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT double _wrap_GRelation_cardinality (MPG::CPRel::GRelation *larg1) {
  double lresult = (double)0 ;
  MPG::CPRel::GRelation *arg1 = (MPG::CPRel::GRelation *) 0 ;
  double result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (double)((MPG::CPRel::GRelation const *)arg1)->cardinality();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (double)0;
  }
}


EXPORT MPG::CPRel::GRelationIter *_wrap_new_GRelationIter (MPG::CPRel::GRelation *larg1) {
  MPG::CPRel::GRelationIter * lresult = (MPG::CPRel::GRelationIter *)0 ;
  MPG::CPRel::GRelation *arg1 = 0 ;
  MPG::CPRel::GRelationIter *result = 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (MPG::CPRel::GRelationIter *)new MPG::CPRel::GRelationIter((MPG::CPRel::GRelation const &)*arg1);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelationIter *)0;
  }
}


EXPORT void _wrap_delete_GRelationIter (MPG::CPRel::GRelationIter *larg1) {
  MPG::CPRel::GRelationIter *arg1 = (MPG::CPRel::GRelationIter *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT int _wrap_GRelationIter___funcall__ (MPG::CPRel::GRelationIter *larg1) {
  int lresult = (int)0 ;
  MPG::CPRel::GRelationIter *arg1 = (MPG::CPRel::GRelationIter *) 0 ;
  bool result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = (bool)((MPG::CPRel::GRelationIter const *)arg1)->operator ()();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = (int)result;
    return lresult;
  } catch (...) {
    return (int)0;
  }
}


EXPORT MPG::CPRel::Tuple *_wrap_GRelationIter_val (MPG::CPRel::GRelationIter *larg1) {
  MPG::CPRel::Tuple * lresult = (MPG::CPRel::Tuple *)0 ;
  MPG::CPRel::GRelationIter *arg1 = (MPG::CPRel::GRelationIter *) 0 ;
  SwigValueWrapper<MPG::CPRel::Tuple > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRel::GRelationIter const *)arg1)->val();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::Tuple(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::Tuple *)0;
  }
}


EXPORT void _wrap_GRelationIter___preincr__ (MPG::CPRel::GRelationIter *larg1) {
  MPG::CPRel::GRelationIter *arg1 = (MPG::CPRel::GRelationIter *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        (arg1)->operator ++();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_CPRelVar_glb (MPG::CPRelVar *larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRelVar *arg1 = (MPG::CPRelVar *) 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRelVar const *)arg1)->glb();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_CPRelVar_lub (MPG::CPRelVar *larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRelVar *arg1 = (MPG::CPRelVar *) 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRelVar const *)arg1)->lub();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_CPRelVar_unk (MPG::CPRelVar *larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRelVar *arg1 = (MPG::CPRelVar *) 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRelVar const *)arg1)->unk();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRel::GRelation *_wrap_CPRelVar_oob (MPG::CPRelVar *larg1) {
  MPG::CPRel::GRelation * lresult = (MPG::CPRel::GRelation *)0 ;
  MPG::CPRelVar *arg1 = (MPG::CPRelVar *) 0 ;
  SwigValueWrapper<MPG::CPRel::GRelation > result;
  
  arg1 = larg1;
  try {
    {
      try {
        result = ((MPG::CPRelVar const *)arg1)->oob();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = new MPG::CPRel::GRelation(result);
    return lresult;
  } catch (...) {
    return (MPG::CPRel::GRelation *)0;
  }
}


EXPORT MPG::CPRelVar *_wrap_new_CPRelVar () {
  MPG::CPRelVar * lresult = (MPG::CPRelVar *)0 ;
  MPG::CPRelVar *result = 0 ;
  
  try {
    {
      try {
        result = (MPG::CPRelVar *)new MPG::CPRelVar();
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
    lresult = result;
    return lresult;
  } catch (...) {
    return (MPG::CPRelVar *)0;
  }
}


EXPORT void _wrap_delete_CPRelVar (MPG::CPRelVar *larg1) {
  MPG::CPRelVar *arg1 = (MPG::CPRelVar *) 0 ;
  
  arg1 = larg1;
  try {
    {
      try {
        delete arg1;
        
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_equal_rel (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        MPG::equal(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_comp_rel (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        MPG::complement(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_intersect (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3, MPG::CPRelVar *larg4) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  MPG::CPRelVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        MPG::intersect(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_union_rel (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3, MPG::CPRelVar *larg4) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  MPG::CPRelVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        MPG::Union(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_subset (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        MPG::subset(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_disjoint (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  try {
    {
      try {
        MPG::disjoint(*arg1,arg2,arg3);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


EXPORT void _wrap_implies (Gecode::Space *larg1, MPG::CPRelVar *larg2, MPG::CPRelVar *larg3, MPG::CPRelVar *larg4) {
  Gecode::Space *arg1 = 0 ;
  MPG::CPRelVar arg2 ;
  MPG::CPRelVar arg3 ;
  MPG::CPRelVar arg4 ;
  
  arg1 = larg1;
  arg2 = *larg2;
  arg3 = *larg3;
  arg4 = *larg4;
  try {
    {
      try {
        MPG::implies(*arg1,arg2,arg3,arg4);
      } catch(Gecode::Exception e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception& e) {
        std::cerr << e.what() << std::endl;
      } catch(Gecode::Exception *e) {
        std::cerr << e->what() << std::endl;
      } catch (...) {
        std::cerr << "unhandled exception." << std::endl;	
      }
    }
  } catch (...) {
    
  }
}


