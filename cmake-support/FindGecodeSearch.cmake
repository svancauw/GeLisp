# - Try to find Gecode (IntVar)
# Once done, this will define
#
#  GecodeSearch_FOUND - system has gecodesearch
#  GecodeSearch_INCLUDE_DIRS - the gecodesearch include directories
#  GecodeSearch_LIBRARIES - link these to use gecodesearch


include(LibFindMacros)

# Dependencies
libfind_package(GecodeSearch Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeSearch_PKGCONF gecodesearch)

# Include dir
find_path(GecodeSearch_INCLUDE_DIR
  NAMES gecode/search.hh 
  PATHS ${GecodeSearch_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeSearch_LIBRARY
  NAMES gecodesearch
  PATHS ${GecodeSearch_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeSearch_PROCESS_INCLUDES GecodeSearch_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeSearch_PROCESS_LIBS GecodeSearch_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeSearch)



