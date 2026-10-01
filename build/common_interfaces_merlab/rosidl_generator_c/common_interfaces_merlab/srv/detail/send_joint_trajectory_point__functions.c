// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_interfaces_merlab:srv/SendJointTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "common_interfaces_merlab/srv/detail/send_joint_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `goal_point`
#include "trajectory_msgs/msg/detail/joint_trajectory_point__functions.h"

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__init(&msg->goal_point)) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(msg);
    return false;
  }
  return true;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  trajectory_msgs__msg__JointTrajectoryPoint__fini(&msg->goal_point);
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_point
  if (!trajectory_msgs__msg__JointTrajectoryPoint__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  return true;
}

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * msg = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request));
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request)) {
      return false;
    }
    data = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request *)allocator.zero_allocate(size, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(&data[i - 1]);
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
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * array)
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
      common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(&array->data[i]);
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

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * array = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request * data =
      (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * msg = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response));
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response)) {
      return false;
    }
    data = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response *)allocator.zero_allocate(size, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__fini(&data[i - 1]);
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
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * array)
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
      common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__fini(&array->data[i]);
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

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * array = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response * data =
      (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__copy(
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
// #include "common_interfaces_merlab/srv/detail/send_joint_trajectory_point__functions.h"

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(msg);
    return false;
  }
  // request
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__init(&msg->request, 0)) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(msg);
    return false;
  }
  // response
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__init(&msg->response, 0)) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(msg);
    return false;
  }
  return true;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__fini(&msg->request);
  // response
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__fini(&msg->response);
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * rhs)
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
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * output)
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
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * msg = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event));
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__init(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event)) {
      return false;
    }
    data = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event *)allocator.zero_allocate(size, sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(&data[i - 1]);
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
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__fini(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * array)
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
      common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(&array->data[i]);
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

common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence *
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * array = (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence *)allocator.allocate(sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__destroy(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__are_equal(const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * lhs, const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence__copy(
  const common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * input,
  common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event * data =
      (common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_interfaces_merlab__srv__SendJointTrajectoryPoint_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
