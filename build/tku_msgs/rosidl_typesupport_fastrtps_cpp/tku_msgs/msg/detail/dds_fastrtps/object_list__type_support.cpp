// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tku_msgs:msg/ObjectList.idl
// generated code does not contain a copyright notice
#include "tku_msgs/msg/detail/object_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tku_msgs/msg/detail/object_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tku_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tku_msgs::msg::ColorArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tku_msgs::msg::ColorArray &);
size_t get_serialized_size(
  const tku_msgs::msg::ColorArray &,
  size_t current_alignment);
size_t
max_serialized_size_ColorArray(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tku_msgs


namespace tku_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
cdr_serialize(
  const tku_msgs::msg::ObjectList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: objectlist
  {
    size_t size = ros_message.objectlist.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tku_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.objectlist[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tku_msgs::msg::ObjectList & ros_message)
{
  // Member: objectlist
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.objectlist.resize(size);
    for (size_t i = 0; i < size; i++) {
      tku_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.objectlist[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
get_serialized_size(
  const tku_msgs::msg::ObjectList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: objectlist
  {
    size_t array_size = ros_message.objectlist.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tku_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.objectlist[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tku_msgs
max_serialized_size_ObjectList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: objectlist
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        tku_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ColorArray(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tku_msgs::msg::ObjectList;
    is_plain =
      (
      offsetof(DataType, objectlist) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ObjectList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tku_msgs::msg::ObjectList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tku_msgs::msg::ObjectList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tku_msgs::msg::ObjectList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObjectList(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObjectList__callbacks = {
  "tku_msgs::msg",
  "ObjectList",
  _ObjectList__cdr_serialize,
  _ObjectList__cdr_deserialize,
  _ObjectList__get_serialized_size,
  _ObjectList__max_serialized_size
};

static rosidl_message_type_support_t _ObjectList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tku_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tku_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tku_msgs::msg::ObjectList>()
{
  return &tku_msgs::msg::typesupport_fastrtps_cpp::_ObjectList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tku_msgs, msg, ObjectList)() {
  return &tku_msgs::msg::typesupport_fastrtps_cpp::_ObjectList__handle;
}

#ifdef __cplusplus
}
#endif