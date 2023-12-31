// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tku_msgs:msg/ColorArray.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/color_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tku_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tku_msgs/msg/detail/color_array__struct.h"
#include "tku_msgs/msg/detail/color_array__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "tku_msgs/msg/detail/color_data__functions.h"  // colorarray

// forward declare type support functions
size_t get_serialized_size_tku_msgs__msg__ColorData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tku_msgs__msg__ColorData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorData)();


using _ColorArray__ros_msg_type = tku_msgs__msg__ColorArray;

static bool _ColorArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ColorArray__ros_msg_type * ros_message = static_cast<const _ColorArray__ros_msg_type *>(untyped_ros_message);
  // Field name: cnt
  {
    cdr << ros_message->cnt;
  }

  // Field name: colorarray
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorData
      )()->data);
    size_t size = ros_message->colorarray.size;
    auto array_ptr = ros_message->colorarray.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ColorArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ColorArray__ros_msg_type * ros_message = static_cast<_ColorArray__ros_msg_type *>(untyped_ros_message);
  // Field name: cnt
  {
    cdr >> ros_message->cnt;
  }

  // Field name: colorarray
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorData
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->colorarray.data) {
      tku_msgs__msg__ColorData__Sequence__fini(&ros_message->colorarray);
    }
    if (!tku_msgs__msg__ColorData__Sequence__init(&ros_message->colorarray, size)) {
      fprintf(stderr, "failed to create array for field 'colorarray'");
      return false;
    }
    auto array_ptr = ros_message->colorarray.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t get_serialized_size_tku_msgs__msg__ColorArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ColorArray__ros_msg_type * ros_message = static_cast<const _ColorArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cnt
  {
    size_t item_size = sizeof(ros_message->cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name colorarray
  {
    size_t array_size = ros_message->colorarray.size;
    auto array_ptr = ros_message->colorarray.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tku_msgs__msg__ColorData(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ColorArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tku_msgs__msg__ColorArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tku_msgs
size_t max_serialized_size_tku_msgs__msg__ColorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: colorarray
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_tku_msgs__msg__ColorData(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ColorArray__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tku_msgs__msg__ColorArray(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ColorArray = {
  "tku_msgs::msg",
  "ColorArray",
  _ColorArray__cdr_serialize,
  _ColorArray__cdr_deserialize,
  _ColorArray__get_serialized_size,
  _ColorArray__max_serialized_size
};

static rosidl_message_type_support_t _ColorArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ColorArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tku_msgs, msg, ColorArray)() {
  return &_ColorArray__type_support;
}

#if defined(__cplusplus)
}
#endif
