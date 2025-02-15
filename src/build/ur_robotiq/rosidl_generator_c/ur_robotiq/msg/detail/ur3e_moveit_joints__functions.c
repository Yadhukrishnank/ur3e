// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ur_robotiq__msg__UR3eMoveitJoints__init(ur_robotiq__msg__UR3eMoveitJoints * msg)
{
  if (!msg) {
    return false;
  }
  // joints
  // pick_pose
  if (!geometry_msgs__msg__Pose__init(&msg->pick_pose)) {
    ur_robotiq__msg__UR3eMoveitJoints__fini(msg);
    return false;
  }
  return true;
}

void
ur_robotiq__msg__UR3eMoveitJoints__fini(ur_robotiq__msg__UR3eMoveitJoints * msg)
{
  if (!msg) {
    return;
  }
  // joints
  // pick_pose
  geometry_msgs__msg__Pose__fini(&msg->pick_pose);
}

bool
ur_robotiq__msg__UR3eMoveitJoints__are_equal(const ur_robotiq__msg__UR3eMoveitJoints * lhs, const ur_robotiq__msg__UR3eMoveitJoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->joints[i] != rhs->joints[i]) {
      return false;
    }
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
ur_robotiq__msg__UR3eMoveitJoints__copy(
  const ur_robotiq__msg__UR3eMoveitJoints * input,
  ur_robotiq__msg__UR3eMoveitJoints * output)
{
  if (!input || !output) {
    return false;
  }
  // joints
  for (size_t i = 0; i < 6; ++i) {
    output->joints[i] = input->joints[i];
  }
  // pick_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pick_pose), &(output->pick_pose)))
  {
    return false;
  }
  return true;
}

ur_robotiq__msg__UR3eMoveitJoints *
ur_robotiq__msg__UR3eMoveitJoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eMoveitJoints * msg = (ur_robotiq__msg__UR3eMoveitJoints *)allocator.allocate(sizeof(ur_robotiq__msg__UR3eMoveitJoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur_robotiq__msg__UR3eMoveitJoints));
  bool success = ur_robotiq__msg__UR3eMoveitJoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur_robotiq__msg__UR3eMoveitJoints__destroy(ur_robotiq__msg__UR3eMoveitJoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur_robotiq__msg__UR3eMoveitJoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur_robotiq__msg__UR3eMoveitJoints__Sequence__init(ur_robotiq__msg__UR3eMoveitJoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eMoveitJoints * data = NULL;

  if (size) {
    data = (ur_robotiq__msg__UR3eMoveitJoints *)allocator.zero_allocate(size, sizeof(ur_robotiq__msg__UR3eMoveitJoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur_robotiq__msg__UR3eMoveitJoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur_robotiq__msg__UR3eMoveitJoints__fini(&data[i - 1]);
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
ur_robotiq__msg__UR3eMoveitJoints__Sequence__fini(ur_robotiq__msg__UR3eMoveitJoints__Sequence * array)
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
      ur_robotiq__msg__UR3eMoveitJoints__fini(&array->data[i]);
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

ur_robotiq__msg__UR3eMoveitJoints__Sequence *
ur_robotiq__msg__UR3eMoveitJoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur_robotiq__msg__UR3eMoveitJoints__Sequence * array = (ur_robotiq__msg__UR3eMoveitJoints__Sequence *)allocator.allocate(sizeof(ur_robotiq__msg__UR3eMoveitJoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur_robotiq__msg__UR3eMoveitJoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur_robotiq__msg__UR3eMoveitJoints__Sequence__destroy(ur_robotiq__msg__UR3eMoveitJoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur_robotiq__msg__UR3eMoveitJoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur_robotiq__msg__UR3eMoveitJoints__Sequence__are_equal(const ur_robotiq__msg__UR3eMoveitJoints__Sequence * lhs, const ur_robotiq__msg__UR3eMoveitJoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur_robotiq__msg__UR3eMoveitJoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur_robotiq__msg__UR3eMoveitJoints__Sequence__copy(
  const ur_robotiq__msg__UR3eMoveitJoints__Sequence * input,
  ur_robotiq__msg__UR3eMoveitJoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur_robotiq__msg__UR3eMoveitJoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur_robotiq__msg__UR3eMoveitJoints * data =
      (ur_robotiq__msg__UR3eMoveitJoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur_robotiq__msg__UR3eMoveitJoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur_robotiq__msg__UR3eMoveitJoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur_robotiq__msg__UR3eMoveitJoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
