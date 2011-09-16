# - Try to find Gecode (SetVar)
# Once done, this will define
#
#  GecodeSet_FOUND - system has gecodeSet
#  GecodeSet_INCLUDE_DIRS - the gecodeSet include directories
#  GecodeSet_LIBRARIES - link these to use gecodeset


include(LibFindMacros)

# Dependencies
libfind_package(GecodeGraph Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeGraph_PKGCONF gecodegraph)

# Include dir
find_path(GecodeGraph_INCLUDE_DIR
  NAMES graph.hh
  PATHS ${GecodeGraph_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeGraph_LIBRARY
  NAMES gecodegraph
  PATHS ${GecodeGraph_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeGraph_PROCESS_INCLUDES GecodeGraph_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeGraph_PROCESS_LIBS GecodeGraph_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeGraph)



