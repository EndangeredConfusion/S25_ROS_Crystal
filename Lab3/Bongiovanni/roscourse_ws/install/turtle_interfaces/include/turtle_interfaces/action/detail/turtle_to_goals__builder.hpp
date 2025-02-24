// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__BUILDER_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__BUILDER_HPP_

#include "turtle_interfaces/action/detail/turtle_to_goals__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_Goal_goal_poses
{
public:
  Init_TurtleToGoals_Goal_goal_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::TurtleToGoals_Goal goal_poses(::turtle_interfaces::action::TurtleToGoals_Goal::_goal_poses_type arg)
  {
    msg_.goal_poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_Goal>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_Goal_goal_poses();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_Result_ret
{
public:
  Init_TurtleToGoals_Result_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::TurtleToGoals_Result ret(::turtle_interfaces::action::TurtleToGoals_Result::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_Result>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_Result_ret();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_Feedback_mid_goal_pose
{
public:
  Init_TurtleToGoals_Feedback_mid_goal_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::TurtleToGoals_Feedback mid_goal_pose(::turtle_interfaces::action::TurtleToGoals_Feedback::_mid_goal_pose_type arg)
  {
    msg_.mid_goal_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_Feedback>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_Feedback_mid_goal_pose();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_SendGoal_Request_goal
{
public:
  explicit Init_TurtleToGoals_SendGoal_Request_goal(::turtle_interfaces::action::TurtleToGoals_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Request goal(::turtle_interfaces::action::TurtleToGoals_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Request msg_;
};

class Init_TurtleToGoals_SendGoal_Request_goal_id
{
public:
  Init_TurtleToGoals_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleToGoals_SendGoal_Request_goal goal_id(::turtle_interfaces::action::TurtleToGoals_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleToGoals_SendGoal_Request_goal(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_SendGoal_Request>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_SendGoal_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_SendGoal_Response_stamp
{
public:
  explicit Init_TurtleToGoals_SendGoal_Response_stamp(::turtle_interfaces::action::TurtleToGoals_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Response stamp(::turtle_interfaces::action::TurtleToGoals_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Response msg_;
};

class Init_TurtleToGoals_SendGoal_Response_accepted
{
public:
  Init_TurtleToGoals_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleToGoals_SendGoal_Response_stamp accepted(::turtle_interfaces::action::TurtleToGoals_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TurtleToGoals_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_SendGoal_Response>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_SendGoal_Response_accepted();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_GetResult_Request_goal_id
{
public:
  Init_TurtleToGoals_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::TurtleToGoals_GetResult_Request goal_id(::turtle_interfaces::action::TurtleToGoals_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_GetResult_Request>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_GetResult_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_GetResult_Response_result
{
public:
  explicit Init_TurtleToGoals_GetResult_Response_result(::turtle_interfaces::action::TurtleToGoals_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::TurtleToGoals_GetResult_Response result(::turtle_interfaces::action::TurtleToGoals_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_GetResult_Response msg_;
};

class Init_TurtleToGoals_GetResult_Response_status
{
public:
  Init_TurtleToGoals_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleToGoals_GetResult_Response_result status(::turtle_interfaces::action::TurtleToGoals_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TurtleToGoals_GetResult_Response_result(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_GetResult_Response>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_GetResult_Response_status();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_TurtleToGoals_FeedbackMessage_feedback
{
public:
  explicit Init_TurtleToGoals_FeedbackMessage_feedback(::turtle_interfaces::action::TurtleToGoals_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::TurtleToGoals_FeedbackMessage feedback(::turtle_interfaces::action::TurtleToGoals_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_FeedbackMessage msg_;
};

class Init_TurtleToGoals_FeedbackMessage_goal_id
{
public:
  Init_TurtleToGoals_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtleToGoals_FeedbackMessage_feedback goal_id(::turtle_interfaces::action::TurtleToGoals_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TurtleToGoals_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtle_interfaces::action::TurtleToGoals_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::TurtleToGoals_FeedbackMessage>()
{
  return turtle_interfaces::action::builder::Init_TurtleToGoals_FeedbackMessage_goal_id();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__BUILDER_HPP_
