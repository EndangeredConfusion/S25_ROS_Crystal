// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/Turtlemsg.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLEMSG__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLEMSG__BUILDER_HPP_

#include "turtle_interfaces/msg/detail/turtlemsg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_Turtlemsg_color
{
public:
  explicit Init_Turtlemsg_color(::turtle_interfaces::msg::Turtlemsg & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::Turtlemsg color(::turtle_interfaces::msg::Turtlemsg::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::Turtlemsg msg_;
};

class Init_Turtlemsg_turtle_pose
{
public:
  explicit Init_Turtlemsg_turtle_pose(::turtle_interfaces::msg::Turtlemsg & msg)
  : msg_(msg)
  {}
  Init_Turtlemsg_color turtle_pose(::turtle_interfaces::msg::Turtlemsg::_turtle_pose_type arg)
  {
    msg_.turtle_pose = std::move(arg);
    return Init_Turtlemsg_color(msg_);
  }

private:
  ::turtle_interfaces::msg::Turtlemsg msg_;
};

class Init_Turtlemsg_name
{
public:
  Init_Turtlemsg_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turtlemsg_turtle_pose name(::turtle_interfaces::msg::Turtlemsg::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Turtlemsg_turtle_pose(msg_);
  }

private:
  ::turtle_interfaces::msg::Turtlemsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::Turtlemsg>()
{
  return turtle_interfaces::msg::builder::Init_Turtlemsg_name();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLEMSG__BUILDER_HPP_
