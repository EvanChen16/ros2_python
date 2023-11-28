#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tku_libs::tku_libs" for configuration ""
set_property(TARGET tku_libs::tku_libs APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tku_libs::tku_libs PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtku_libs.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS tku_libs::tku_libs )
list(APPEND _IMPORT_CHECK_FILES_FOR_tku_libs::tku_libs "${_IMPORT_PREFIX}/lib/libtku_libs.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
