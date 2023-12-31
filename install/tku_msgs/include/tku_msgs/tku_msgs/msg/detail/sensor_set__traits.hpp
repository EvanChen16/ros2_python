// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tku_msgs:msg/SensorSet.idl
// generated code does not contain a copyright notice

#ifndef TKU_MSGS__MSG__DETAIL__SENSOR_SET__TRAITS_HPP_
#define TKU_MSGS__MSG__DETAIL__SENSOR_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tku_msgs/msg/detail/sensor_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tku_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_p
  {
    out << "sensor_p: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_p, out);
    out << ", ";
  }

  // member: sensor_i
  {
    out << "sensor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_i, out);
    out << ", ";
  }

  // member: sensor_d
  {
    out << "sensor_d: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_d, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: sup_f
  {
    out << "sup_f: ";
    rosidl_generator_traits::value_to_yaml(msg.sup_f, out);
    out << ", ";
  }

  // member: nsup_f
  {
    out << "nsup_f: ";
    rosidl_generator_traits::value_to_yaml(msg.nsup_f, out);
    out << ", ";
  }

  // member: sensor_modeset
  {
    out << "sensor_modeset: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_modeset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_p: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_p, out);
    out << "\n";
  }

  // member: sensor_i
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_i: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_i, out);
    out << "\n";
  }

  // member: sensor_d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_d: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_d, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: sup_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sup_f: ";
    rosidl_generator_traits::value_to_yaml(msg.sup_f, out);
    out << "\n";
  }

  // member: nsup_f
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nsup_f: ";
    rosidl_generator_traits::value_to_yaml(msg.nsup_f, out);
    out << "\n";
  }

  // member: sensor_modeset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_modeset: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_modeset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorSet & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tku_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tku_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tku_msgs::msg::SensorSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  tku_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tku_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tku_msgs::msg::SensorSet & msg)
{
  return tku_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tku_msgs::msg::SensorSet>()
{
  return "tku_msgs::msg::SensorSet";
}

template<>
inline const char * name<tku_msgs::msg::SensorSet>()
{
  return "tku_msgs/msg/SensorSet";
}

template<>
struct has_fixed_size<tku_msgs::msg::SensorSet>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tku_msgs::msg::SensorSet>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tku_msgs::msg::SensorSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TKU_MSGS__MSG__DETAIL__SENSOR_SET__TRAITS_HPP_
