# - Try to find Gecode (SetVar)
# Once done, this will define
#
#  GecodeBinrel_FOUND - system has gecodeSet
#  GecodeBinrel_INCLUDE_DIRS - the gecodeSet include directories
#  GecodeBinrel_LIBRARIES - link these to use gecodeset


include(LibFindMacros)

# Dependencies
libfind_package(GecodeBinrel Gecode)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeBinrel_PKGCONF gecodebinrel)

# Include dir
find_path(GecodeBinrel_INCLUDE_DIR
  NAMES binrel/graph.hh
  PATHS ${GecodeBinrel_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeBinrel_LIBRARY
  NAMES gecodebinrel
  PATHS ${GecodeBinrel_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeBinrel_PROCESS_INCLUDES GecodeBinrel_INCLUDE_DIR Gecode_INCLUDE_DIRS)
set(GecodeBinrel_PROCESS_LIBS GecodeBinrel_LIBRARY Gecode_LIBRARIES)
libfind_process(GecodeBinrel)



