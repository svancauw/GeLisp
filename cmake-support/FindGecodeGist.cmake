# - Try to find Gecode (IntVar)
# Once done, this will define
#
#  GecodeGist_FOUND - system has gecodegist
#  GecodeGist_INCLUDE_DIRS - the gecodegist include directories
#  GecodeGist_LIBRARIES - link these to use gecodegist


include(LibFindMacros)

# Dependencies
libfind_package(GecodeGist Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeGist_PKGCONF gecodegist)

# Include dir
find_path(GecodeGist_INCLUDE_DIR
  NAMES gecode/search.hh 
  PATHS ${GecodeGist_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeGist_LIBRARY
  NAMES gecodegist
  PATHS ${GecodeGist_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeGist_PROCESS_INCLUDES GecodeGist_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeGist_PROCESS_LIBS GecodeGist_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeGist)
