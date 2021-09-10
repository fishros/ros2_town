// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__BUILDER_HPP_
#define VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__BUILDER_HPP_

#include "village_interfaces/msg/detail/novel__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace village_interfaces
{

namespace msg
{

namespace builder
{

class Init_Novel_image
{
public:
  explicit Init_Novel_image(::village_interfaces::msg::Novel & msg)
  : msg_(msg)
  {}
  ::village_interfaces::msg::Novel image(::village_interfaces::msg::Novel::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::msg::Novel msg_;
};

class Init_Novel_content
{
public:
  Init_Novel_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Novel_image content(::village_interfaces::msg::Novel::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Novel_image(msg_);
  }

private:
  ::village_interfaces::msg::Novel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::msg::Novel>()
{
  return village_interfaces::msg::builder::Init_Novel_content();
}

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__BUILDER_HPP_
