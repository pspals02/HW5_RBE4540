# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target common_interfaces_merlab::common_interfaces_merlab
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${common_interfaces_merlab_TARGETS}.
if(common_interfaces_merlab_TARGETS AND NOT TARGET common_interfaces_merlab::common_interfaces_merlab)
  add_library(common_interfaces_merlab::common_interfaces_merlab INTERFACE IMPORTED)
  set_target_properties(common_interfaces_merlab::common_interfaces_merlab PROPERTIES
    INTERFACE_LINK_LIBRARIES "${common_interfaces_merlab_TARGETS}")
endif()
