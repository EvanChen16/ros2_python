// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tku_msgs:msg/SandHandSpeed.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/sand_hand_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tku_msgs__msg__SandHandSpeed__init(tku_msgs__msg__SandHandSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // sector
  // speed
  return true;
}

void
tku_msgs__msg__SandHandSpeed__fini(tku_msgs__msg__SandHandSpeed * msg)
{
  if (!msg) {
    return;
  }
  // sector
  // speed
}

bool
tku_msgs__msg__SandHandSpeed__are_equal(const tku_msgs__msg__SandHandSpeed * lhs, const tku_msgs__msg__SandHandSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sector
  if (lhs->sector != rhs->sector) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
tku_msgs__msg__SandHandSpeed__copy(
  const tku_msgs__msg__SandHandSpeed * input,
  tku_msgs__msg__SandHandSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // sector
  output->sector = input->sector;
  // speed
  output->speed = input->speed;
  return true;
}

tku_msgs__msg__SandHandSpeed *
tku_msgs__msg__SandHandSpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SandHandSpeed * msg = (tku_msgs__msg__SandHandSpeed *)allocator.allocate(sizeof(tku_msgs__msg__SandHandSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tku_msgs__msg__SandHandSpeed));
  bool success = tku_msgs__msg__SandHandSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tku_msgs__msg__SandHandSpeed__destroy(tku_msgs__msg__SandHandSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tku_msgs__msg__SandHandSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tku_msgs__msg__SandHandSpeed__Sequence__init(tku_msgs__msg__SandHandSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SandHandSpeed * data = NULL;

  if (size) {
    data = (tku_msgs__msg__SandHandSpeed *)allocator.zero_allocate(size, sizeof(tku_msgs__msg__SandHandSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tku_msgs__msg__SandHandSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tku_msgs__msg__SandHandSpeed__fini(&data[i - 1]);
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
tku_msgs__msg__SandHandSpeed__Sequence__fini(tku_msgs__msg__SandHandSpeed__Sequence * array)
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
      tku_msgs__msg__SandHandSpeed__fini(&array->data[i]);
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

tku_msgs__msg__SandHandSpeed__Sequence *
tku_msgs__msg__SandHandSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tku_msgs__msg__SandHandSpeed__Sequence * array = (tku_msgs__msg__SandHandSpeed__Sequence *)allocator.allocate(sizeof(tku_msgs__msg__SandHandSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tku_msgs__msg__SandHandSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tku_msgs__msg__SandHandSpeed__Sequence__destroy(tku_msgs__msg__SandHandSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tku_msgs__msg__SandHandSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tku_msgs__msg__SandHandSpeed__Sequence__are_equal(const tku_msgs__msg__SandHandSpeed__Sequence * lhs, const tku_msgs__msg__SandHandSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tku_msgs__msg__SandHandSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tku_msgs__msg__SandHandSpeed__Sequence__copy(
  const tku_msgs__msg__SandHandSpeed__Sequence * input,
  tku_msgs__msg__SandHandSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tku_msgs__msg__SandHandSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tku_msgs__msg__SandHandSpeed * data =
      (tku_msgs__msg__SandHandSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tku_msgs__msg__SandHandSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tku_msgs__msg__SandHandSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tku_msgs__msg__SandHandSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
