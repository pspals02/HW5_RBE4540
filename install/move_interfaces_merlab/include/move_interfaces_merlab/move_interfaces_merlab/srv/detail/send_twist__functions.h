// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from move_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "move_interfaces_merlab/srv/send_twist.h"


#ifndef MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__FUNCTIONS_H_
#define MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "move_interfaces_merlab/msg/rosidl_generator_c__visibility_control.h"

#include "move_interfaces_merlab/srv/detail/send_twist__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_type_hash_t *
move_interfaces_merlab__srv__SendTwist__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeDescription *
move_interfaces_merlab__srv__SendTwist__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource *
move_interfaces_merlab__srv__SendTwist__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource__Sequence *
move_interfaces_merlab__srv__SendTwist__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SendTwist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_interfaces_merlab__srv__SendTwist_Request
 * )) before or use
 * move_interfaces_merlab__srv__SendTwist_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__init(move_interfaces_merlab__srv__SendTwist_Request * msg);

/// Finalize srv/SendTwist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Request__fini(move_interfaces_merlab__srv__SendTwist_Request * msg);

/// Create srv/SendTwist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_interfaces_merlab__srv__SendTwist_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Request *
move_interfaces_merlab__srv__SendTwist_Request__create(void);

/// Destroy srv/SendTwist message.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Request__destroy(move_interfaces_merlab__srv__SendTwist_Request * msg);

/// Check for srv/SendTwist message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__are_equal(const move_interfaces_merlab__srv__SendTwist_Request * lhs, const move_interfaces_merlab__srv__SendTwist_Request * rhs);

/// Copy a srv/SendTwist message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__copy(
  const move_interfaces_merlab__srv__SendTwist_Request * input,
  move_interfaces_merlab__srv__SendTwist_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_type_hash_t *
move_interfaces_merlab__srv__SendTwist_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeDescription *
move_interfaces_merlab__srv__SendTwist_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource *
move_interfaces_merlab__srv__SendTwist_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource__Sequence *
move_interfaces_merlab__srv__SendTwist_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SendTwist messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_interfaces_merlab__srv__SendTwist_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__init(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array, size_t size);

/// Finalize array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array);

/// Create array of srv/SendTwist messages.
/**
 * It allocates the memory for the array and calls
 * move_interfaces_merlab__srv__SendTwist_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Request__Sequence *
move_interfaces_merlab__srv__SendTwist_Request__Sequence__create(size_t size);

/// Destroy array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Request__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array);

/// Check for srv/SendTwist message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Request__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Request__Sequence * rhs);

/// Copy an array of srv/SendTwist messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Request__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Request__Sequence * output);

/// Initialize srv/SendTwist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_interfaces_merlab__srv__SendTwist_Response
 * )) before or use
 * move_interfaces_merlab__srv__SendTwist_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__init(move_interfaces_merlab__srv__SendTwist_Response * msg);

/// Finalize srv/SendTwist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Response__fini(move_interfaces_merlab__srv__SendTwist_Response * msg);

/// Create srv/SendTwist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_interfaces_merlab__srv__SendTwist_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Response *
move_interfaces_merlab__srv__SendTwist_Response__create(void);

/// Destroy srv/SendTwist message.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Response__destroy(move_interfaces_merlab__srv__SendTwist_Response * msg);

/// Check for srv/SendTwist message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__are_equal(const move_interfaces_merlab__srv__SendTwist_Response * lhs, const move_interfaces_merlab__srv__SendTwist_Response * rhs);

/// Copy a srv/SendTwist message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__copy(
  const move_interfaces_merlab__srv__SendTwist_Response * input,
  move_interfaces_merlab__srv__SendTwist_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_type_hash_t *
move_interfaces_merlab__srv__SendTwist_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeDescription *
move_interfaces_merlab__srv__SendTwist_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource *
move_interfaces_merlab__srv__SendTwist_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource__Sequence *
move_interfaces_merlab__srv__SendTwist_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SendTwist messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_interfaces_merlab__srv__SendTwist_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__init(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array, size_t size);

/// Finalize array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array);

/// Create array of srv/SendTwist messages.
/**
 * It allocates the memory for the array and calls
 * move_interfaces_merlab__srv__SendTwist_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Response__Sequence *
move_interfaces_merlab__srv__SendTwist_Response__Sequence__create(size_t size);

/// Destroy array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Response__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array);

/// Check for srv/SendTwist message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Response__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Response__Sequence * rhs);

/// Copy an array of srv/SendTwist messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Response__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Response__Sequence * output);

/// Initialize srv/SendTwist message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * move_interfaces_merlab__srv__SendTwist_Event
 * )) before or use
 * move_interfaces_merlab__srv__SendTwist_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__init(move_interfaces_merlab__srv__SendTwist_Event * msg);

/// Finalize srv/SendTwist message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Event__fini(move_interfaces_merlab__srv__SendTwist_Event * msg);

/// Create srv/SendTwist message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * move_interfaces_merlab__srv__SendTwist_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Event *
move_interfaces_merlab__srv__SendTwist_Event__create(void);

/// Destroy srv/SendTwist message.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Event__destroy(move_interfaces_merlab__srv__SendTwist_Event * msg);

/// Check for srv/SendTwist message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__are_equal(const move_interfaces_merlab__srv__SendTwist_Event * lhs, const move_interfaces_merlab__srv__SendTwist_Event * rhs);

/// Copy a srv/SendTwist message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__copy(
  const move_interfaces_merlab__srv__SendTwist_Event * input,
  move_interfaces_merlab__srv__SendTwist_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_type_hash_t *
move_interfaces_merlab__srv__SendTwist_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeDescription *
move_interfaces_merlab__srv__SendTwist_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource *
move_interfaces_merlab__srv__SendTwist_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
const rosidl_runtime_c__type_description__TypeSource__Sequence *
move_interfaces_merlab__srv__SendTwist_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SendTwist messages.
/**
 * It allocates the memory for the number of elements and calls
 * move_interfaces_merlab__srv__SendTwist_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__init(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array, size_t size);

/// Finalize array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Event__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array);

/// Create array of srv/SendTwist messages.
/**
 * It allocates the memory for the array and calls
 * move_interfaces_merlab__srv__SendTwist_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
move_interfaces_merlab__srv__SendTwist_Event__Sequence *
move_interfaces_merlab__srv__SendTwist_Event__Sequence__create(size_t size);

/// Destroy array of srv/SendTwist messages.
/**
 * It calls
 * move_interfaces_merlab__srv__SendTwist_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
void
move_interfaces_merlab__srv__SendTwist_Event__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array);

/// Check for srv/SendTwist message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Event__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Event__Sequence * rhs);

/// Copy an array of srv/SendTwist messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_move_interfaces_merlab
bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Event__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // MOVE_INTERFACES_MERLAB__SRV__DETAIL__SEND_TWIST__FUNCTIONS_H_
