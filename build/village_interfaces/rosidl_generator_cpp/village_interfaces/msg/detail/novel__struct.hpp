// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from village_interfaces:msg/Novel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__STRUCT_HPP_
#define VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__village_interfaces__msg__Novel __attribute__((deprecated))
#else
# define DEPRECATED__village_interfaces__msg__Novel __declspec(deprecated)
#endif

namespace village_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Novel_
{
  using Type = Novel_<ContainerAllocator>;

  explicit Novel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  explicit Novel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : content(_alloc),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->content = "";
    }
  }

  // field types and members
  using _content_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _content_type content;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__content(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->content = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    village_interfaces::msg::Novel_<ContainerAllocator> *;
  using ConstRawPtr =
    const village_interfaces::msg::Novel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<village_interfaces::msg::Novel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<village_interfaces::msg::Novel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      village_interfaces::msg::Novel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::msg::Novel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      village_interfaces::msg::Novel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<village_interfaces::msg::Novel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<village_interfaces::msg::Novel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<village_interfaces::msg::Novel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__village_interfaces__msg__Novel
    std::shared_ptr<village_interfaces::msg::Novel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__village_interfaces__msg__Novel
    std::shared_ptr<village_interfaces::msg::Novel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Novel_ & other) const
  {
    if (this->content != other.content) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const Novel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Novel_

// alias to use template instance with default allocator
using Novel =
  village_interfaces::msg::Novel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__NOVEL__STRUCT_HPP_
