# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_motionpackage_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED motionpackage_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(motionpackage_FOUND FALSE)
  elseif(NOT motionpackage_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(motionpackage_FOUND FALSE)
  endif()
  return()
endif()
set(_motionpackage_CONFIG_INCLUDED TRUE)

# output package information
if(NOT motionpackage_FIND_QUIETLY)
  message(STATUS "Found motionpackage: 0.0.0 (${motionpackage_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'motionpackage' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${motionpackage_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(motionpackage_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${motionpackage_DIR}/${_extra}")
endforeach()
