# - Try to find Gecode (SetVar)
# Once done, this will define
#
#  GecodeSet_FOUND - system has gecodeSet
#  GecodeSet_INCLUDE_DIRS - the gecodeSet include directories
#  GecodeSet_LIBRARIES - link these to use gecodeset


include(LibFindMacros)

# Dependencies
libfind_package(GecodeSet Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeSet_PKGCONF gecodeset)

# Include dir
find_path(GecodeSet_INCLUDE_DIR
  NAMES gecode/set.hh
  PATHS ${GecodeSet_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeSet_LIBRARY
  NAMES gecodeset
  PATHS ${GecodeSet_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeSet_PROCESS_INCLUDES GecodeSet_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeSet_PROCESS_LIBS GecodeSet_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeSet)



