// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_robotiq:srv/UrMoverService.idl
// generated code does not contain a copyright notice
#include "ur_robotiq/srv/detail/ur_mover_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `joints_input`
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__functions.h"
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ur_robotiq__srv__UrMoverService_Request__init(ur_robotiq__srv__UrMoverService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joints_input
  if (!ur_robotiq__msg__UR3eMoveitJoints__init(&msg->joints_input)) {
    ur_robotiq__srv__UrMoverService_Request__fini(msg);
    return false;
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__init(&msg->pick_pose)) {
    ur_robotiq__srv__UrMoverService_Request__fini(msg);
    return false;
  }
  return true;
}

void
ur_robotiq__srv__UrMoverService_Request__fini(ur_robotiq__srv__UrMoverService_Request * msg)
{
  if (!msg) {
    return;
  }
  // joints_input
  ur_robotiq__msg__UR3eMoveitJoints__fini(&msg->joints_input);
  // pick_pose
  geometry_msgs__msg__Pose__fini(&msg->pick_pose);
}

bool
ur_robotiq__srv__UrMoverService_Request__are_equal(const ur_robotiq__srv__UrMoverService_Request * lhs, const ur_robotiq__srv__UrMoverService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints_input
  if (!ur_robotiq__msg__UR3eMoveitJoints__are_equal(
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
ur_robotiq__srv__UrMoverService_Request__copy(
  const ur_robotiq__srv__UrMoverService_Request * input,
  ur_robotiq__srv__UrMoverService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // joints_input
  if (!ur_robotiq__msg__UR3eMoveitJoints__copy(
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

ur_robotiq__srv__UrMoverService_Request *
ur_robotiq__srv__UrMoverService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Request * msg = (ur_robotiq__srv__UrMoverService_Request *)allocator.allocate(sizeof(ur_robotiq__srv__UrMoverService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_robotiq__srv__UrMoverService_Request));
  bool success = ur_robotiq__srv__UrMoverService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_robotiq__srv__UrMoverService_Request__destroy(ur_robotiq__srv__UrMoverService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_robotiq__srv__UrMoverService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_robotiq__srv__UrMoverService_Request__Sequence__init(ur_robotiq__srv__UrMoverService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Request * data = NULL;

  if (size) {
    data = (ur_robotiq__srv__UrMoverService_Request *)allocator.zero_allocate(size, sizeof(ur_robotiq__srv__UrMoverService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_robotiq__srv__UrMoverService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_robotiq__srv__UrMoverService_Request__fini(&data[i - 1]);
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
ur_robotiq__srv__UrMoverService_Request__Sequence__fini(ur_robotiq__srv__UrMoverService_Request__Sequence * array)
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
      ur_robotiq__srv__UrMoverService_Request__fini(&array->data[i]);
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

ur_robotiq__srv__UrMoverService_Request__Sequence *
ur_robotiq__srv__UrMoverService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Request__Sequence * array = (ur_robotiq__srv__UrMoverService_Request__Sequence *)allocator.allocate(sizeof(ur_robotiq__srv__UrMoverService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_robotiq__srv__UrMoverService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_robotiq__srv__UrMoverService_Request__Sequence__destroy(ur_robotiq__srv__UrMoverService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_robotiq__srv__UrMoverService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_robotiq__srv__UrMoverService_Request__Sequence__are_equal(const ur_robotiq__srv__UrMoverService_Request__Sequence * lhs, const ur_robotiq__srv__UrMoverService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_robotiq__srv__UrMoverService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_robotiq__srv__UrMoverService_Request__Sequence__copy(
  const ur_robotiq__srv__UrMoverService_Request__Sequence * input,
  ur_robotiq__srv__UrMoverService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_robotiq__srv__UrMoverService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_robotiq__srv__UrMoverService_Request * data =
      (ur_robotiq__srv__UrMoverService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_robotiq__srv__UrMoverService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_robotiq__srv__UrMoverService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_robotiq__srv__UrMoverService_Request__copy(
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
ur_robotiq__srv__UrMoverService_Response__init(ur_robotiq__srv__UrMoverService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->trajectories, 0)) {
    ur_robotiq__srv__UrMoverService_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur_robotiq__srv__UrMoverService_Response__fini(ur_robotiq__srv__UrMoverService_Response * msg)
{
  if (!msg) {
    return;
  }
  // trajectories
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->trajectories);
}

bool
ur_robotiq__srv__UrMoverService_Response__are_equal(const ur_robotiq__srv__UrMoverService_Response * lhs, const ur_robotiq__srv__UrMoverService_Response * rhs)
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
ur_robotiq__srv__UrMoverService_Response__copy(
  const ur_robotiq__srv__UrMoverService_Response * input,
  ur_robotiq__srv__UrMoverService_Response * output)
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

ur_robotiq__srv__UrMoverService_Response *
ur_robotiq__srv__UrMoverService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Response * msg = (ur_robotiq__srv__UrMoverService_Response *)allocator.allocate(sizeof(ur_robotiq__srv__UrMoverService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_robotiq__srv__UrMoverService_Response));
  bool success = ur_robotiq__srv__UrMoverService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_robotiq__srv__UrMoverService_Response__destroy(ur_robotiq__srv__UrMoverService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_robotiq__srv__UrMoverService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_robotiq__srv__UrMoverService_Response__Sequence__init(ur_robotiq__srv__UrMoverService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Response * data = NULL;

  if (size) {
    data = (ur_robotiq__srv__UrMoverService_Response *)allocator.zero_allocate(size, sizeof(ur_robotiq__srv__UrMoverService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_robotiq__srv__UrMoverService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_robotiq__srv__UrMoverService_Response__fini(&data[i - 1]);
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
ur_robotiq__srv__UrMoverService_Response__Sequence__fini(ur_robotiq__srv__UrMoverService_Response__Sequence * array)
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
      ur_robotiq__srv__UrMoverService_Response__fini(&array->data[i]);
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

ur_robotiq__srv__UrMoverService_Response__Sequence *
ur_robotiq__srv__UrMoverService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__srv__UrMoverService_Response__Sequence * array = (ur_robotiq__srv__UrMoverService_Response__Sequence *)allocator.allocate(sizeof(ur_robotiq__srv__UrMoverService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_robotiq__srv__UrMoverService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_robotiq__srv__UrMoverService_Response__Sequence__destroy(ur_robotiq__srv__UrMoverService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_robotiq__srv__UrMoverService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_robotiq__srv__UrMoverService_Response__Sequence__are_equal(const ur_robotiq__srv__UrMoverService_Response__Sequence * lhs, const ur_robotiq__srv__UrMoverService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_robotiq__srv__UrMoverService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_robotiq__srv__UrMoverService_Response__Sequence__copy(
  const ur_robotiq__srv__UrMoverService_Response__Sequence * input,
  ur_robotiq__srv__UrMoverService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_robotiq__srv__UrMoverService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_robotiq__srv__UrMoverService_Response * data =
      (ur_robotiq__srv__UrMoverService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_robotiq__srv__UrMoverService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_robotiq__srv__UrMoverService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_robotiq__srv__UrMoverService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
