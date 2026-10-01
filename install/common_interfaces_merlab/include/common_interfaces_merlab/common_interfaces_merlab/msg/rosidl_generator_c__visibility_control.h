// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef COMMON_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define COMMON_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_common_interfaces_merlab __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_common_interfaces_merlab __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_common_interfaces_merlab __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_common_interfaces_merlab __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_common_interfaces_merlab
    #define ROSIDL_GENERATOR_C_PUBLIC_common_interfaces_merlab ROSIDL_GENERATOR_C_EXPORT_common_interfaces_merlab
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_common_interfaces_merlab ROSIDL_GENERATOR_C_IMPORT_common_interfaces_merlab
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_common_interfaces_merlab __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_common_interfaces_merlab
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_common_interfaces_merlab __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_common_interfaces_merlab
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // COMMON_INTERFACES_MERLAB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
