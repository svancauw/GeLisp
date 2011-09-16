# - Try to find Gecode (kernel and support libraries)
# Once done, this will define
#
#  Gecode_FOUND - system has gecodekernel
#  Gecode_INCLUDE_DIRS - the gecodekernel include directories
#  Gecode_LIBRARIES - link these to use gecodekernel

include(LibFindMacros)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(Gecode_PKGCONF gecodekernel)

# Include dir
find_path(Gecode_KRN_INCLUDE_DIR
  NAMES gecode/kernel.hh 
  PATHS ${Gecode_PKGCONF_INCLUDE_DIRS}
)

find_path(Gecode_SUP_INCLUDE_DIR
  NAMES gecode/support.hh 
  PATHS ${Gecode_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(Gecode_KRN_LIBRARY
  NAMES gecodekernel 
  PATHS ${Gecode_PKGCONF_LIBRARY_DIRS}
)

find_library(Gecode_SUP_LIBRARY
  NAMES gecodesupport 
  PATHS ${Gecode_PKGCONF_LIBRARY_DIRS}
)


# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(Gecode_PROCESS_INCLUDES Gecode_KRN_INCLUDE_DIR Gecode_SUP_INCLUDE_DIR)
set(Gecode_PROCESS_LIBS Gecode_KRN_LIBRARY Gecode_SUP_LIBRARY)
libfind_process(Gecode)
