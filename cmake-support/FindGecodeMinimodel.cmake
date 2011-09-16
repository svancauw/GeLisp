# - Try to find Gecode (IntVar)
# Once done, this will define
#
#  GecodeMinimodel_FOUND - system has gecodesearch
#  GecodeMinimodel_INCLUDE_DIRS - the gecodesearch include directories
#  GecodeMinimodel_LIBRARIES - link these to use gecodesearch

include(LibFindMacros)

# Dependencies
libfind_package(GecodeMinimodel Gecode)
libfind_package(GecodeMinimodel GecodeInt)

# Use pkg-config to get hints about paths
libfind_pkg_check_modules(GecodeMinimodel_PKGCONF gecodeminimodel)

# Include dir
find_path(GecodeMinimodel_INCLUDE_DIR
  NAMES gecode/minimodel.hh 
  PATHS ${GecodeMinimodel_PKGCONF_INCLUDE_DIRS}
)

# Finally the library itself
find_library(GecodeMinimodel_LIBRARY
  NAMES gecodeminimodel
  PATHS ${GecodeMinimodel_PKGCONF_LIBRARY_DIRS}
)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(GecodeMinimodel_PROCESS_INCLUDES GecodeMinimodel_INCLUDE_DIR Gecode_INCLUDE_DIRS GecodeInt_INCLUDE_DIRS)
set(GecodeMinimodel_PROCESS_LIBS GecodeMinimodel_LIBRARY Gecode_LIBRARIES GecodeInt_LIBRARIES)
libfind_process(GecodeMinimodel)



