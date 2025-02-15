// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unity_ros_msgs:msg/UR3eGripper.idl
// generated code does not contain a copyright notice
#include "unity_ros_msgs/msg/detail/ur3e_gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
unity_ros_msgs__msg__UR3eGripper__init(unity_ros_msgs__msg__UR3eGripper * msg)
{
  if (!msg) {
    return false;
  }
  // gripper
  return true;
}

void
unity_ros_msgs__msg__UR3eGripper__fini(unity_ros_msgs__msg__UR3eGripper * msg)
{
  if (!msg) {
    return;
  }
  // gripper
}

bool
unity_ros_msgs__msg__UR3eGripper__are_equal(const unity_ros_msgs__msg__UR3eGripper * lhs, const unity_ros_msgs__msg__UR3eGripper * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper
  if (lhs->gripper != rhs->gripper) {
    return false;
  }
  return true;
}

bool
unity_ros_msgs__msg__UR3eGripper__copy(
  const unity_ros_msgs__msg__UR3eGripper * input,
  unity_ros_msgs__msg__UR3eGripper * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper
  output->gripper = input->gripper;
  return true;
}

unity_ros_msgs__msg__UR3eGripper *
unity_ros_msgs__msg__UR3eGripper__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eGripper * msg = (unity_ros_msgs__msg__UR3eGripper *)allocator.allocate(sizeof(unity_ros_msgs__msg__UR3eGripper), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unity_ros_msgs__msg__UR3eGripper));
  bool success = unity_ros_msgs__msg__UR3eGripper__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
unity_ros_msgs__msg__UR3eGripper__destroy(unity_ros_msgs__msg__UR3eGripper * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    unity_ros_msgs__msg__UR3eGripper__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
unity_ros_msgs__msg__UR3eGripper__Sequence__init(unity_ros_msgs__msg__UR3eGripper__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eGripper * data = NULL;

  if (size) {
    data = (unity_ros_msgs__msg__UR3eGripper *)allocator.zero_allocate(size, sizeof(unity_ros_msgs__msg__UR3eGripper), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unity_ros_msgs__msg__UR3eGripper__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unity_ros_msgs__msg__UR3eGripper__fini(&data[i - 1]);
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
unity_ros_msgs__msg__UR3eGripper__Sequence__fini(unity_ros_msgs__msg__UR3eGripper__Sequence * array)
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
      unity_ros_msgs__msg__UR3eGripper__fini(&array->data[i]);
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

unity_ros_msgs__msg__UR3eGripper__Sequence *
unity_ros_msgs__msg__UR3eGripper__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  unity_ros_msgs__msg__UR3eGripper__Sequence * array = (unity_ros_msgs__msg__UR3eGripper__Sequence *)allocator.allocate(sizeof(unity_ros_msgs__msg__UR3eGripper__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = unity_ros_msgs__msg__UR3eGripper__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
unity_ros_msgs__msg__UR3eGripper__Sequence__destroy(unity_ros_msgs__msg__UR3eGripper__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    unity_ros_msgs__msg__UR3eGripper__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
unity_ros_msgs__msg__UR3eGripper__Sequence__are_equal(const unity_ros_msgs__msg__UR3eGripper__Sequence * lhs, const unity_ros_msgs__msg__UR3eGripper__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!unity_ros_msgs__msg__UR3eGripper__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
unity_ros_msgs__msg__UR3eGripper__Sequence__copy(
  const unity_ros_msgs__msg__UR3eGripper__Sequence * input,
  unity_ros_msgs__msg__UR3eGripper__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(unity_ros_msgs__msg__UR3eGripper);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    unity_ros_msgs__msg__UR3eGripper * data =
      (unity_ros_msgs__msg__UR3eGripper *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!unity_ros_msgs__msg__UR3eGripper__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          unity_ros_msgs__msg__UR3eGripper__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!unity_ros_msgs__msg__UR3eGripper__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
