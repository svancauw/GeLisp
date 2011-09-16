
#
#  Copyright (c) 2009, 2010 Tobias Rautenkranz <tobias@rautenkranz.ch>
#
#  Redistribution and use is allowed according to the terms of the New
#  BSD license.
#  For details see the accompanying COPYING-CMAKE-SCRIPTS file.
#

macro(usedoxygen_set_default name value)
  if(NOT DEFINED "${name}")
    set("${name}" "${value}")
  endif()
endmacro()

find_package(Doxygen)

if(DOXYGEN_FOUND)
  find_file(DOXYFILE_IN "Doxyfile.in"
      PATHS "${CMAKE_CURRENT_SOURCE_DIR}" "${CMAKE_ROOT}/Modules/"
      NO_DEFAULT_PATH)
  include(FindPackageHandleStandardArgs)
  find_package_handle_standard_args(DOXYFILE_IN DEFAULT_MSG "DOXYFILE_IN")
endif()

if(DOXYGEN_FOUND AND DOXYFILE_IN_FOUND)

  usedoxygen_set_default(DOXYFILE_OUTPUT_DIR "${CMAKE_CURRENT_BINARY_DIR}/doc")
  usedoxygen_set_default(DOXYFILE_HTML_DIR "html")

  set(DOXYGEN_HTML_HEADER header.html)

 add_custom_command(
    OUTPUT ${DOXYGEN_HEADER} ${DOXYGEN_BG} ${DOXYGEN_LOGO}
    COMMAND ${CMAKE_COMMAND} ARGS -E copy ${DOXYGEN_HEADER_IN} ${DOXYGEN_HEADER}
    COMMAND ${CMAKE_COMMAND} ARGS -E copy ${DOXYGEN_BG_IN} ${DOXYGEN_BG}
    COMMAND ${CMAKE_COMMAND} ARGS -E copy ${DOXYGEN_LOGO_IN} ${DOXYGEN_LOGO}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    DEPENDS ${DOXYGEN_HEADER_IN})

  add_custom_target(doxygen ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
    DEPENDS ${DOXYGEN_HEADER} ${DOXYGEN_BG} ${DOXYGEN_LOGO})

  set_property(DIRECTORY APPEND PROPERTY
      ADDITIONAL_MAKE_CLEAN_FILES "${DOXYFILE_OUTPUT_DIR}/${DOXYFILE_HTML_DIR}")

  set(DOXYFILE_LATEX "NO")
  set(DOXYFILE_PDFLATEX "NO")
  set(DOXYFILE_DOT "NO")

  find_package(LATEX)
  if(LATEX_COMPILER AND MAKEINDEX_COMPILER)
    set(DOXYFILE_LATEX "YES")
    usedoxygen_set_default(DOXYFILE_LATEX_DIR "latex")

    set_property(DIRECTORY APPEND PROPERTY
        ADDITIONAL_MAKE_CLEAN_FILES
        "${DOXYFILE_OUTPUT_DIR}/${DOXYFILE_LATEX_DIR}")

    if(PDFLATEX_COMPILER)
      set(DOXYFILE_PDFLATEX "YES")
    endif()
    if(DOXYGEN_DOT_EXECUTABLE)
      set(DOXYFILE_DOT "YES")
    endif()

    add_custom_command(TARGET doxygen
      POST_BUILD
      COMMAND ${CMAKE_MAKE_PROGRAM}
      WORKING_DIRECTORY "${DOXYFILE_OUTPUT_DIR}/${DOXYFILE_LATEX_DIR}")
  endif()


  configure_file(${DOXYFILE_IN} Doxyfile ESCAPE_QUOTES IMMEDIATE @ONLY)

  get_target_property(DOC_TARGET doc TYPE)
  if(NOT DOC_TARGET)
    add_custom_target(doc)
  endif()

  add_dependencies(doc doxygen)
endif()
