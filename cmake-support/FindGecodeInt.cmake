# - Try to find Gecode (IntVar)
# Once done, this will define
#
#  GecodeInt_FOUND - system has gecodeint
#  GecodeInt_INCLUDE_DIRS - the gecodeint include directories
#  GecodeInt_LIBRARIES - link these to use gecodeint


include(LibFindMacros)

# Dependencies
libfind_package(GecodeInt Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeInt_PKGCONF gecodeint)

# Include dir
find_path(GecodeInt_INCLUDE_DIR
  NAMES gecode/int.hh 
  PATHS ${GecodeInt_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeInt_LIBRARY
  NAMES gecodeint
  PATHS ${GecodeInt_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeInt_PROCESS_INCLUDES GecodeInt_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeInt_PROCESS_LIBS GecodeInt_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeInt)



