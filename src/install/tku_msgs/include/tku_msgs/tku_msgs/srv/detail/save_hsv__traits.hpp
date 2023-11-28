// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:srv/SaveHSV.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__SRV__DETAIL__SAVE_HSV__TRAITS_HPP_
#define TKU_MSGS__SRV__DETAIL__SAVE_HSV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/srv/detail/save_hsv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveHSV_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveHSV_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    rosidl_generator_traits::value_to_yaml(msg.location, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveHSV_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::SaveHSV_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::SaveHSV_Request & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::SaveHSV_Request>()
{
  return "tku_msgs::srv::SaveHSV_Request";
}

template<>
inline const char * name<tku_msgs::srv::SaveHSV_Request>()
{
  return "tku_msgs/srv/SaveHSV_Request";
}

template<>
struct has_fixed_size<tku_msgs::srv::SaveHSV_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tku_msgs::srv::SaveHSV_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tku_msgs::srv::SaveHSV_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tku_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SaveHSV_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: already
  {
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SaveHSV_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: already
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "already: ";
    rosidl_generator_traits::value_to_yaml(msg.already, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SaveHSV_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::srv::SaveHSV_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::srv::SaveHSV_Response & msg)
{
  return tku_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::srv::SaveHSV_Response>()
{
  return "tku_msgs::srv::SaveHSV_Response";
}

template<>
inline const char * name<tku_msgs::srv::SaveHSV_Response>()
{
  return "tku_msgs/srv/SaveHSV_Response";
}

template<>
struct has_fixed_size<tku_msgs::srv::SaveHSV_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::srv::SaveHSV_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::srv::SaveHSV_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tku_msgs::srv::SaveHSV>()
{
  return "tku_msgs::srv::SaveHSV";
}

template<>
inline const char * name<tku_msgs::srv::SaveHSV>()
{
  return "tku_msgs/srv/SaveHSV";
}

template<>
struct has_fixed_size<tku_msgs::srv::SaveHSV>
  : std::integral_constant<
    bool,
    has_fixed_size<tku_msgs::srv::SaveHSV_Request>::value &&
    has_fixed_size<tku_msgs::srv::SaveHSV_Response>::value
  >
{
};

template<>
struct has_bounded_size<tku_msgs::srv::SaveHSV>
  : std::integral_constant<
    bool,
    has_bounded_size<tku_msgs::srv::SaveHSV_Request>::value &&
    has_bounded_size<tku_msgs::srv::SaveHSV_Response>::value
  >
{
};

template<>
struct is_service<tku_msgs::srv::SaveHSV>
  : std::true_type
{
};

template<>
struct is_service_request<tku_msgs::srv::SaveHSV_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tku_msgs::srv::SaveHSV_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__SRV__DETAIL__SAVE_HSV__TRAITS_HPP_
