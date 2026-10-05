// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef MOVE_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define MOVE_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_move_interfaces_merlab __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_move_interfaces_merlab __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_move_interfaces_merlab __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_move_interfaces_merlab __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_move_interfaces_merlab
    #define ROSIDL_GENERATOR_CPP_PUBLIC_move_interfaces_merlab ROSIDL_GENERATOR_CPP_EXPORT_move_interfaces_merlab
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_move_interfaces_merlab ROSIDL_GENERATOR_CPP_IMPORT_move_interfaces_merlab
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_move_interfaces_merlab __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_move_interfaces_merlab
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_move_interfaces_merlab __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_move_interfaces_merlab
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MOVE_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
