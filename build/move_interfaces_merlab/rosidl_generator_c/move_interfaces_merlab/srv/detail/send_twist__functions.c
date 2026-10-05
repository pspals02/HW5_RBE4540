// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from move_interfaces_merlab:srv/SendTwist.idl
// generated code does not contain a copyright notice
#include "move_interfaces_merlab/srv/detail/send_twist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
move_interfaces_merlab__srv__SendTwist_Request__init(move_interfaces_merlab__srv__SendTwist_Request * msg)
{
  if (!msg) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    move_interfaces_merlab__srv__SendTwist_Request__fini(msg);
    return false;
  }
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Request__fini(move_interfaces_merlab__srv__SendTwist_Request * msg)
{
  if (!msg) {
    return;
  }
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
}

bool
move_interfaces_merlab__srv__SendTwist_Request__are_equal(const move_interfaces_merlab__srv__SendTwist_Request * lhs, const move_interfaces_merlab__srv__SendTwist_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Request__copy(
  const move_interfaces_merlab__srv__SendTwist_Request * input,
  move_interfaces_merlab__srv__SendTwist_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

move_interfaces_merlab__srv__SendTwist_Request *
move_interfaces_merlab__srv__SendTwist_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Request * msg = (move_interfaces_merlab__srv__SendTwist_Request *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_interfaces_merlab__srv__SendTwist_Request));
  bool success = move_interfaces_merlab__srv__SendTwist_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
move_interfaces_merlab__srv__SendTwist_Request__destroy(move_interfaces_merlab__srv__SendTwist_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    move_interfaces_merlab__srv__SendTwist_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__init(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Request * data = NULL;

  if (size) {
    data = (move_interfaces_merlab__srv__SendTwist_Request *)allocator.zero_allocate(size, sizeof(move_interfaces_merlab__srv__SendTwist_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_interfaces_merlab__srv__SendTwist_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_interfaces_merlab__srv__SendTwist_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_interfaces_merlab__srv__SendTwist_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

move_interfaces_merlab__srv__SendTwist_Request__Sequence *
move_interfaces_merlab__srv__SendTwist_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Request__Sequence * array = (move_interfaces_merlab__srv__SendTwist_Request__Sequence *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = move_interfaces_merlab__srv__SendTwist_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
move_interfaces_merlab__srv__SendTwist_Request__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    move_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Request__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Request__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Request__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(move_interfaces_merlab__srv__SendTwist_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    move_interfaces_merlab__srv__SendTwist_Request * data =
      (move_interfaces_merlab__srv__SendTwist_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!move_interfaces_merlab__srv__SendTwist_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          move_interfaces_merlab__srv__SendTwist_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
move_interfaces_merlab__srv__SendTwist_Response__init(move_interfaces_merlab__srv__SendTwist_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    move_interfaces_merlab__srv__SendTwist_Response__fini(msg);
    return false;
  }
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Response__fini(move_interfaces_merlab__srv__SendTwist_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
move_interfaces_merlab__srv__SendTwist_Response__are_equal(const move_interfaces_merlab__srv__SendTwist_Response * lhs, const move_interfaces_merlab__srv__SendTwist_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Response__copy(
  const move_interfaces_merlab__srv__SendTwist_Response * input,
  move_interfaces_merlab__srv__SendTwist_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

move_interfaces_merlab__srv__SendTwist_Response *
move_interfaces_merlab__srv__SendTwist_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Response * msg = (move_interfaces_merlab__srv__SendTwist_Response *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_interfaces_merlab__srv__SendTwist_Response));
  bool success = move_interfaces_merlab__srv__SendTwist_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
move_interfaces_merlab__srv__SendTwist_Response__destroy(move_interfaces_merlab__srv__SendTwist_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    move_interfaces_merlab__srv__SendTwist_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__init(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Response * data = NULL;

  if (size) {
    data = (move_interfaces_merlab__srv__SendTwist_Response *)allocator.zero_allocate(size, sizeof(move_interfaces_merlab__srv__SendTwist_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_interfaces_merlab__srv__SendTwist_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_interfaces_merlab__srv__SendTwist_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_interfaces_merlab__srv__SendTwist_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

move_interfaces_merlab__srv__SendTwist_Response__Sequence *
move_interfaces_merlab__srv__SendTwist_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Response__Sequence * array = (move_interfaces_merlab__srv__SendTwist_Response__Sequence *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = move_interfaces_merlab__srv__SendTwist_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
move_interfaces_merlab__srv__SendTwist_Response__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    move_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Response__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Response__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Response__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(move_interfaces_merlab__srv__SendTwist_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    move_interfaces_merlab__srv__SendTwist_Response * data =
      (move_interfaces_merlab__srv__SendTwist_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!move_interfaces_merlab__srv__SendTwist_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          move_interfaces_merlab__srv__SendTwist_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "move_interfaces_merlab/srv/detail/send_twist__functions.h"

bool
move_interfaces_merlab__srv__SendTwist_Event__init(move_interfaces_merlab__srv__SendTwist_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    move_interfaces_merlab__srv__SendTwist_Event__fini(msg);
    return false;
  }
  // request
  if (!move_interfaces_merlab__srv__SendTwist_Request__Sequence__init(&msg->request, 0)) {
    move_interfaces_merlab__srv__SendTwist_Event__fini(msg);
    return false;
  }
  // response
  if (!move_interfaces_merlab__srv__SendTwist_Response__Sequence__init(&msg->response, 0)) {
    move_interfaces_merlab__srv__SendTwist_Event__fini(msg);
    return false;
  }
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Event__fini(move_interfaces_merlab__srv__SendTwist_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  move_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(&msg->request);
  // response
  move_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(&msg->response);
}

bool
move_interfaces_merlab__srv__SendTwist_Event__are_equal(const move_interfaces_merlab__srv__SendTwist_Event * lhs, const move_interfaces_merlab__srv__SendTwist_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!move_interfaces_merlab__srv__SendTwist_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!move_interfaces_merlab__srv__SendTwist_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Event__copy(
  const move_interfaces_merlab__srv__SendTwist_Event * input,
  move_interfaces_merlab__srv__SendTwist_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!move_interfaces_merlab__srv__SendTwist_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!move_interfaces_merlab__srv__SendTwist_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

move_interfaces_merlab__srv__SendTwist_Event *
move_interfaces_merlab__srv__SendTwist_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Event * msg = (move_interfaces_merlab__srv__SendTwist_Event *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(move_interfaces_merlab__srv__SendTwist_Event));
  bool success = move_interfaces_merlab__srv__SendTwist_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
move_interfaces_merlab__srv__SendTwist_Event__destroy(move_interfaces_merlab__srv__SendTwist_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    move_interfaces_merlab__srv__SendTwist_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__init(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Event * data = NULL;

  if (size) {
    data = (move_interfaces_merlab__srv__SendTwist_Event *)allocator.zero_allocate(size, sizeof(move_interfaces_merlab__srv__SendTwist_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = move_interfaces_merlab__srv__SendTwist_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        move_interfaces_merlab__srv__SendTwist_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
move_interfaces_merlab__srv__SendTwist_Event__Sequence__fini(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      move_interfaces_merlab__srv__SendTwist_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

move_interfaces_merlab__srv__SendTwist_Event__Sequence *
move_interfaces_merlab__srv__SendTwist_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  move_interfaces_merlab__srv__SendTwist_Event__Sequence * array = (move_interfaces_merlab__srv__SendTwist_Event__Sequence *)allocator.allocate(sizeof(move_interfaces_merlab__srv__SendTwist_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = move_interfaces_merlab__srv__SendTwist_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
move_interfaces_merlab__srv__SendTwist_Event__Sequence__destroy(move_interfaces_merlab__srv__SendTwist_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    move_interfaces_merlab__srv__SendTwist_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__are_equal(const move_interfaces_merlab__srv__SendTwist_Event__Sequence * lhs, const move_interfaces_merlab__srv__SendTwist_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
move_interfaces_merlab__srv__SendTwist_Event__Sequence__copy(
  const move_interfaces_merlab__srv__SendTwist_Event__Sequence * input,
  move_interfaces_merlab__srv__SendTwist_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(move_interfaces_merlab__srv__SendTwist_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    move_interfaces_merlab__srv__SendTwist_Event * data =
      (move_interfaces_merlab__srv__SendTwist_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!move_interfaces_merlab__srv__SendTwist_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          move_interfaces_merlab__srv__SendTwist_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!move_interfaces_merlab__srv__SendTwist_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
