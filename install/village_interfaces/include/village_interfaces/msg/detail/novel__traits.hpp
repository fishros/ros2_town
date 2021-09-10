// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__TRAITS_HPP_
#define VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__TRAITS_HPP_

#include "village_interfaces/msg/detail/novel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interfaces::msg::Novel>()
{
  return "village_interfaces::msg::Novel";
}

template<>
inline const char * name<village_interfaces::msg::Novel>()
{
  return "village_interfaces/msg/Novel";
}

template<>
struct has_fixed_size<village_interfaces::msg::Novel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::msg::Novel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interfaces::msg::Novel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__TRAITS_HPP_
