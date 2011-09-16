include(LibFindMacros)

# Include dir
find_path(Log4cplus_INCLUDE_DIR
  NAMES log4cplus/logger.h
  PATHS /usr/local/include
)

# Finally the library itself
# We first try to find an static version of the library and then
# the shared version.
find_library(Log4cplus_LIBRARY NAMES log4cplus PATHS /usr/local/lib)

# Set the include dir variables and the libraries and let libfind_process do the rest.
# NOTE: Singular variables for this library, plural for libraries this this lib depends on.
set(Log4cplus_PROCESS_INCLUDES Log4cplus_INCLUDE_DIR)
set(Log4cplus_PROCESS_LIBS Log4cplus_LIBRARY)
libfind_process(Log4cplus)
