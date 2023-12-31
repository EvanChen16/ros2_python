// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/SensorSet.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/sensor_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__SensorSet__init(tku_msgs__msg__SensorSet * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_p
  // sensor_i
  // sensor_d
  // roll
  // pitch
  // yaw
  // sup_f
  // nsup_f
  // sensor_modeset
  return true;
}

void
tku_msgs__msg__SensorSet__fini(tku_msgs__msg__SensorSet * msg)
{
  if (!msg) {
    return;
  }
  // sensor_p
  // sensor_i
  // sensor_d
  // roll
  // pitch
  // yaw
  // sup_f
  // nsup_f
  // sensor_modeset
}

bool
tku_msgs__msg__SensorSet__are_equal(const tku_msgs__msg__SensorSet * lhs, const tku_msgs__msg__SensorSet * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_p
  if (lhs->sensor_p != rhs->sensor_p) {
    return false;
  }
  // sensor_i
  if (lhs->sensor_i != rhs->sensor_i) {
    return false;
  }
  // sensor_d
  if (lhs->sensor_d != rhs->sensor_d) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // sup_f
  if (lhs->sup_f != rhs->sup_f) {
    return false;
  }
  // nsup_f
  if (lhs->nsup_f != rhs->nsup_f) {
    return false;
  }
  // sensor_modeset
  if (lhs->sensor_modeset != rhs->sensor_modeset) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__SensorSet__copy(
  const tku_msgs__msg__SensorSet * input,
  tku_msgs__msg__SensorSet * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_p
  output->sensor_p = input->sensor_p;
  // sensor_i
  output->sensor_i = input->sensor_i;
  // sensor_d
  output->sensor_d = input->sensor_d;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // sup_f
  output->sup_f = input->sup_f;
  // nsup_f
  output->nsup_f = input->nsup_f;
  // sensor_modeset
  output->sensor_modeset = input->sensor_modeset;
  return true;
}

tku_msgs__msg__SensorSet *
tku_msgs__msg__SensorSet__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorSet * msg = (tku_msgs__msg__SensorSet *)allocator.allocate(sizeof(tku_msgs__msg__SensorSet), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__SensorSet));
  bool success = tku_msgs__msg__SensorSet__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__SensorSet__destroy(tku_msgs__msg__SensorSet * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__SensorSet__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__SensorSet__Sequence__init(tku_msgs__msg__SensorSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorSet * data = NULL;

  if (size) {
    data = (tku_msgs__msg__SensorSet *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__SensorSet), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__SensorSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__SensorSet__fini(&data[i - 1]);
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
tku_msgs__msg__SensorSet__Sequence__fini(tku_msgs__msg__SensorSet__Sequence * array)
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
      tku_msgs__msg__SensorSet__fini(&array->data[i]);
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

tku_msgs__msg__SensorSet__Sequence *
tku_msgs__msg__SensorSet__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SensorSet__Sequence * array = (tku_msgs__msg__SensorSet__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__SensorSet__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__SensorSet__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__SensorSet__Sequence__destroy(tku_msgs__msg__SensorSet__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__SensorSet__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__SensorSet__Sequence__are_equal(const tku_msgs__msg__SensorSet__Sequence * lhs, const tku_msgs__msg__SensorSet__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__SensorSet__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__SensorSet__Sequence__copy(
  const tku_msgs__msg__SensorSet__Sequence * input,
  tku_msgs__msg__SensorSet__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__SensorSet);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__SensorSet * data =
      (tku_msgs__msg__SensorSet *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__SensorSet__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__SensorSet__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__SensorSet__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
