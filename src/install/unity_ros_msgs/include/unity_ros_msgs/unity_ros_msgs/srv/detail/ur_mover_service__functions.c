// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_ros_msgs:srv/UrMoverService.idl
// generated code does not contain a copyright notice
#include "unity_ros_msgs/srv/detail/ur_mover_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joints_input`
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__functions.h"
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
unity_ros_msgs__srv__UrMoverService_Request__init(unity_ros_msgs__srv__UrMoverService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joints_input
  if (!unity_ros_msgs__msg__UR3eMoveitJoints__init(&msg->joints_input)) {
    unity_ros_msgs__srv__UrMoverService_Request__fini(msg);
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__init(&msg->pick_pose)) {
    unity_ros_msgs__srv__UrMoverService_Request__fini(msg);
    return false;
  }
  return true;
}

void
unity_ros_msgs__srv__UrMoverService_Request__fini(unity_ros_msgs__srv__UrMoverService_Request * msg)
{
  if (!msg) {
    return;
  }
  // joints_input
  unity_ros_msgs__msg__UR3eMoveitJoints__fini(&msg->joints_input);
  // pick_pose
  geometry_msgs__msg__Pose__fini(&msg->pick_pose);
}

bool
unity_ros_msgs__srv__UrMoverService_Request__are_equal(const unity_ros_msgs__srv__UrMoverService_Request * lhs, const unity_ros_msgs__srv__UrMoverService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints_input
  if (!unity_ros_msgs__msg__UR3eMoveitJoints__are_equal(
      &(lhs->joints_input), &(rhs->joints_input)))
  {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pick_pose), &(rhs->pick_pose)))
  {
    return false;
  }
  return true;
}

bool
unity_ros_msgs__srv__UrMoverService_Request__copy(
  const unity_ros_msgs__srv__UrMoverService_Request * input,
  unity_ros_msgs__srv__UrMoverService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joints_input
  if (!unity_ros_msgs__msg__UR3eMoveitJoints__copy(
      &(input->joints_input), &(output->joints_input)))
  {
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pick_pose), &(output->pick_pose)))
  {
    return false;
  }
  return true;
}

unity_ros_msgs__srv__UrMoverService_Request *
unity_ros_msgs__srv__UrMoverService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Request * msg = (unity_ros_msgs__srv__UrMoverService_Request *)allocator.allocate(sizeof(unity_ros_msgs__srv__UrMoverService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_ros_msgs__srv__UrMoverService_Request));
  bool success = unity_ros_msgs__srv__UrMoverService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_ros_msgs__srv__UrMoverService_Request__destroy(unity_ros_msgs__srv__UrMoverService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_ros_msgs__srv__UrMoverService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_ros_msgs__srv__UrMoverService_Request__Sequence__init(unity_ros_msgs__srv__UrMoverService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Request * data = NULL;

  if (size) {
    data = (unity_ros_msgs__srv__UrMoverService_Request *)allocator.zero_allocate(size, sizeof(unity_ros_msgs__srv__UrMoverService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_ros_msgs__srv__UrMoverService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_ros_msgs__srv__UrMoverService_Request__fini(&data[i - 1]);
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
unity_ros_msgs__srv__UrMoverService_Request__Sequence__fini(unity_ros_msgs__srv__UrMoverService_Request__Sequence * array)
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
      unity_ros_msgs__srv__UrMoverService_Request__fini(&array->data[i]);
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

unity_ros_msgs__srv__UrMoverService_Request__Sequence *
unity_ros_msgs__srv__UrMoverService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Request__Sequence * array = (unity_ros_msgs__srv__UrMoverService_Request__Sequence *)allocator.allocate(sizeof(unity_ros_msgs__srv__UrMoverService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_ros_msgs__srv__UrMoverService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_ros_msgs__srv__UrMoverService_Request__Sequence__destroy(unity_ros_msgs__srv__UrMoverService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_ros_msgs__srv__UrMoverService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_ros_msgs__srv__UrMoverService_Request__Sequence__are_equal(const unity_ros_msgs__srv__UrMoverService_Request__Sequence * lhs, const unity_ros_msgs__srv__UrMoverService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_ros_msgs__srv__UrMoverService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_ros_msgs__srv__UrMoverService_Request__Sequence__copy(
  const unity_ros_msgs__srv__UrMoverService_Request__Sequence * input,
  unity_ros_msgs__srv__UrMoverService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_ros_msgs__srv__UrMoverService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unity_ros_msgs__srv__UrMoverService_Request * data =
      (unity_ros_msgs__srv__UrMoverService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_ros_msgs__srv__UrMoverService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unity_ros_msgs__srv__UrMoverService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_ros_msgs__srv__UrMoverService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `trajectories`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
unity_ros_msgs__srv__UrMoverService_Response__init(unity_ros_msgs__srv__UrMoverService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->trajectories, 0)) {
    unity_ros_msgs__srv__UrMoverService_Response__fini(msg);
    return false;
  }
  return true;
}

void
unity_ros_msgs__srv__UrMoverService_Response__fini(unity_ros_msgs__srv__UrMoverService_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectories
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->trajectories);
}

bool
unity_ros_msgs__srv__UrMoverService_Response__are_equal(const unity_ros_msgs__srv__UrMoverService_Response * lhs, const unity_ros_msgs__srv__UrMoverService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__are_equal(
      &(lhs->trajectories), &(rhs->trajectories)))
  {
    return false;
  }
  return true;
}

bool
unity_ros_msgs__srv__UrMoverService_Response__copy(
  const unity_ros_msgs__srv__UrMoverService_Response * input,
  unity_ros_msgs__srv__UrMoverService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__copy(
      &(input->trajectories), &(output->trajectories)))
  {
    return false;
  }
  return true;
}

unity_ros_msgs__srv__UrMoverService_Response *
unity_ros_msgs__srv__UrMoverService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Response * msg = (unity_ros_msgs__srv__UrMoverService_Response *)allocator.allocate(sizeof(unity_ros_msgs__srv__UrMoverService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_ros_msgs__srv__UrMoverService_Response));
  bool success = unity_ros_msgs__srv__UrMoverService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_ros_msgs__srv__UrMoverService_Response__destroy(unity_ros_msgs__srv__UrMoverService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_ros_msgs__srv__UrMoverService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_ros_msgs__srv__UrMoverService_Response__Sequence__init(unity_ros_msgs__srv__UrMoverService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Response * data = NULL;

  if (size) {
    data = (unity_ros_msgs__srv__UrMoverService_Response *)allocator.zero_allocate(size, sizeof(unity_ros_msgs__srv__UrMoverService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_ros_msgs__srv__UrMoverService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_ros_msgs__srv__UrMoverService_Response__fini(&data[i - 1]);
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
unity_ros_msgs__srv__UrMoverService_Response__Sequence__fini(unity_ros_msgs__srv__UrMoverService_Response__Sequence * array)
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
      unity_ros_msgs__srv__UrMoverService_Response__fini(&array->data[i]);
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

unity_ros_msgs__srv__UrMoverService_Response__Sequence *
unity_ros_msgs__srv__UrMoverService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__srv__UrMoverService_Response__Sequence * array = (unity_ros_msgs__srv__UrMoverService_Response__Sequence *)allocator.allocate(sizeof(unity_ros_msgs__srv__UrMoverService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_ros_msgs__srv__UrMoverService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_ros_msgs__srv__UrMoverService_Response__Sequence__destroy(unity_ros_msgs__srv__UrMoverService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_ros_msgs__srv__UrMoverService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_ros_msgs__srv__UrMoverService_Response__Sequence__are_equal(const unity_ros_msgs__srv__UrMoverService_Response__Sequence * lhs, const unity_ros_msgs__srv__UrMoverService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_ros_msgs__srv__UrMoverService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_ros_msgs__srv__UrMoverService_Response__Sequence__copy(
  const unity_ros_msgs__srv__UrMoverService_Response__Sequence * input,
  unity_ros_msgs__srv__UrMoverService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_ros_msgs__srv__UrMoverService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unity_ros_msgs__srv__UrMoverService_Response * data =
      (unity_ros_msgs__srv__UrMoverService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_ros_msgs__srv__UrMoverService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unity_ros_msgs__srv__UrMoverService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_ros_msgs__srv__UrMoverService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
