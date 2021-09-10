# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_village_wang_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED village_wang_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(village_wang_FOUND FALSE)
  elseif(NOT village_wang_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(village_wang_FOUND FALSE)
  endif()
  return()
endif()
set(_village_wang_CONFIG_INCLUDED TRUE)

# output package information
if(NOT village_wang_FIND_QUIETLY)
  message(STATUS "Found village_wang: 0.0.0 (${village_wang_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'village_wang' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${village_wang_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(village_wang_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${village_wang_DIR}/${_extra}")
endforeach()
