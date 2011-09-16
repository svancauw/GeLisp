cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake-support")
project(gelisp)

##########################################################################
# Compiler flags                                                         #
##########################################################################
## At this time with lispworks we cannot link 64 bits libraries
if(APPLE)
  message("-*- Apple found, building for: i386")
  set(CMAKE_OSX_ARCHITECTURES i386)
else()
  message(">> Non tested in this platform")
endif()
##########################################################################
# Gecode                                                                 #
##########################################################################
set(GECODE_LIBS)
set(GECODE_HDRS)
find_library(GECODE_LIBRARY gecode NAMES gecodekernel)
if (NOT GECODE_LIBRARY)
  message(FATAL_ERROR "** Gecode library not found.")
endif()
set(GECODE_LIBS ${GECODE_LIBRARY})
message("-- Gecode library found at: ${GECODE_LIBRARY}")
message("-- Searching Gecode headers ")
find_package(Gecode REQUIRED)
find_package(GecodeInt REQUIRED)
find_package(GecodeSet REQUIRED)
find_package(GecodeSearch REQUIRED)
find_package(GecodeMinimodel REQUIRED)



## begin

find_path(CPREL_INCLUDES NAMES cprel/cprel.hh)
find_path(CPREL_INCLUDES NAMES cprel/tuple.hh)
find_path(CPREL_INCLUDES NAMES cprel/grelation.hh)
find_library(CPREL_LIBRARY NAMES gecodecprel)
find_path(LIBBDD_INCLUDES NAMES bdddomain/rel-impl.hh)
find_library(LIBBDD_LIBRARY NAMES bdddomain)

if(CPREL_LIBRARY)
 include_directories(${CPREL_INCLUDES})
 include_directories(${LIBBDD_INCLUDES})
else()
 message(FATAL_ERROR "CPRel contribution not found")
endif()

## end

#ADD_DEFINITIONS( "-DGECODE_HAS_GRAPH_VARS" )
#ADD_DEFINITIONS( "-DGECODE_HAS_VAR_DISPOSE" )

set(GECODE_HDRS ${GecodeInt_INCLUDE_DIRS} ${GecodeSet_INCLUDE_DIRS}
    ${GecodeSearch_INCLUDE_DIRS}  ${GecodeMinimodel_INCLUDE_DIRS}
 	${CPREL_INCLUDES} ${LIBBDD_INCLUDES})
set(GECODE_LIBS 
    ${Gecode_LIBRARIES}
 	${GecodeInt_LIBRARIES}
    ${GecodeSet_LIBRARIES}
 	${GecodeSearch_LIBRARIES}
    ${GecodeMinimodel_LIBRARIES}
	${CPREL_LIBRARY}
	${LIBBDD_LIBRARY})

	
#message(STATUS "cprel--- ${GECODE_LIBS}")

    
include_directories(${GECODE_HDRS})
## recent versions of gecode use pthreads for the search engine
list(APPEND GECODE_LIBS pthread)
#message("-- Gecode headers: ${GECODE_HDRS}")
#message("-- Gecode libs: ${GECODE_LIBS}")
#message("binrel:  ${GecodeBinrel_INCLUDE_DIRS}  ${GecodeBinrel_LIBS}")

##########################################################################
# QT for gist                                                            #
##########################################################################
if(USE_GIST)
  find_package(Qt4 REQUIRED)
  set(QT_LIBS ${QT_QTCORE_LIBRARIES} ${QT_QTGUI_LIBRARIES})
  message(STATUS "Qt libraries: ${QT_LIBS}")
  #list(APPEND Support_LIBS ${QT_LIBS})
endif()
##########################################################################
# Gist                                                                   #
##########################################################################
if(USE_GIST)
  ## only checks if gecode has gist support and assumes the headers are
  ## in the same place as other gecode headers.
  find_path(GIST_HDRS gecode/gist.hh)
  if (NOT GIST_HDRS)
    message("** Gecode was not build with gist support.")
  endif()
  message("-- Gist support: ${GIST_HDRS}")
  if(NOT GIST_HDRS MATCHES ".*.framework.*")
    ## we have to add libgecodegist
    find_library(GIST_LIBRARY gecodegist)
    if(NOT GIST_LIBRARY)
      message(FATAL_ERROR "gist library not found.")
    endif()
    message("Gist library: ${GIST_LIBRARY}")
    set(GECODE_LIBS ${GECODE_LIBS} ${GIST_LIBRARY})
  endif()
  add_definitions( "-DUSE_GIST" )
endif()
##########################################################################
# GeLisp                                                                 #
##########################################################################
include_directories(${gelisp_SOURCE_DIR})
add_library(cxxgelisp
  gelisp.cpp
  gelisp.hpp)
##########################################################################
# Swig detection                                                         #
##########################################################################
find_package(swig REQUIRED)
if(SWIG_FOUND)
  message("-*- Swig program: ${SWIG_EXECUTABLE}")
else()
  message(FATAL_ERROR "-*- Swig is needed to build this package")
endif()
INCLUDE(${SWIG_USE_FILE})
##########################################################################
# Swig generation                                                        #
##########################################################################
set(GLLibraries cxxgelisp)
list(APPEND GLLibraries ${GECODE_LIBS})
if(USE_GIST)
  list(APPEND GLLibraries ${QT_LIBS})
endif()

SET_SOURCE_FILES_PROPERTIES(gelisp.i PROPERTIES CPLUSPLUS ON)
#SET_SOURCE_FILES_PROPERTIES(gelisp.i PROPERTIES SWIG_FLAGS "-cffi")
SWIG_ADD_MODULE(gelisp cffi gelisp.i)
SWIG_LINK_LIBRARIES(gelisp ${GLLibraries})
##########################################################################
# Tests                                                                  #
##########################################################################
#add_executable(e exec.cpp)
#target_link_libraries(e test)

##########################################################################
## Find Boost
##########################################################################
## Find Boost
list(APPEND REQ_BOOST_LIBS)
list(APPEND REQ_BOOST_LIBS)

set(Boost_USE_STATIC_LIBS  ON)
find_package(Boost 1.44 REQUIRED COMPONENTS ${REQ_BOOST_LIBS})
message(STATUS "Boost path: ${Boost_INCLUDE_DIRS}")
include_directories("${Boost_INCLUDE_DIRS}")

