#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to common_interfaces_merlab__srv__SendPose_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,

}



impl Default for SendPose_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendPose_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SendPose_Request {
  type RmwMsg = super::srv::rmw::SendPose_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendPose_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendPose_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendPose_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SendPose_Response {
  type RmwMsg = super::srv::rmw::SendPose_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendTwist_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendTwist_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::Twist,

}



impl Default for SendTwist_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendTwist_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SendTwist_Request {
  type RmwMsg = super::srv::rmw::SendTwist_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Owned(msg.twist)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        twist: geometry_msgs::msg::Twist::into_rmw_message(std::borrow::Cow::Borrowed(&msg.twist)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      twist: geometry_msgs::msg::Twist::from_rmw_message(msg.twist),
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendTwist_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendTwist_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for SendTwist_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendTwist_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SendTwist_Response {
  type RmwMsg = super::srv::rmw::SendTwist_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendJointTrajectory_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectory_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_points: trajectory_msgs::msg::JointTrajectory,

}



impl Default for SendJointTrajectory_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendJointTrajectory_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectory_Request {
  type RmwMsg = super::srv::rmw::SendJointTrajectory_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_points: trajectory_msgs::msg::JointTrajectory::into_rmw_message(std::borrow::Cow::Owned(msg.goal_points)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_points: trajectory_msgs::msg::JointTrajectory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_points)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_points: trajectory_msgs::msg::JointTrajectory::from_rmw_message(msg.goal_points),
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendJointTrajectory_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectory_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendJointTrajectory_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendJointTrajectory_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectory_Response {
  type RmwMsg = super::srv::rmw::SendJointTrajectory_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectoryPoint_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_point: trajectory_msgs::msg::JointTrajectoryPoint,

}



impl Default for SendJointTrajectoryPoint_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendJointTrajectoryPoint_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectoryPoint_Request {
  type RmwMsg = super::srv::rmw::SendJointTrajectoryPoint_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_point: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Owned(msg.goal_point)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_point: trajectory_msgs::msg::JointTrajectoryPoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_point)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_point: trajectory_msgs::msg::JointTrajectoryPoint::from_rmw_message(msg.goal_point),
    }
  }
}


// Corresponds to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectoryPoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendJointTrajectoryPoint_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SendJointTrajectoryPoint_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectoryPoint_Response {
  type RmwMsg = super::srv::rmw::SendJointTrajectoryPoint_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}






#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendPose() -> *const std::ffi::c_void;
}

// Corresponds to common_interfaces_merlab__srv__SendPose
#[allow(missing_docs, non_camel_case_types)]
pub struct SendPose;

impl rosidl_runtime_rs::Service for SendPose {
    type Request = SendPose_Request;
    type Response = SendPose_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendPose() }
    }
}




#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendTwist() -> *const std::ffi::c_void;
}

// Corresponds to common_interfaces_merlab__srv__SendTwist
#[allow(missing_docs, non_camel_case_types)]
pub struct SendTwist;

impl rosidl_runtime_rs::Service for SendTwist {
    type Request = SendTwist_Request;
    type Response = SendTwist_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendTwist() }
    }
}




#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory() -> *const std::ffi::c_void;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectory
#[allow(missing_docs, non_camel_case_types)]
pub struct SendJointTrajectory;

impl rosidl_runtime_rs::Service for SendJointTrajectory {
    type Request = SendJointTrajectory_Request;
    type Response = SendJointTrajectory_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory() }
    }
}




#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint() -> *const std::ffi::c_void;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectoryPoint
#[allow(missing_docs, non_camel_case_types)]
pub struct SendJointTrajectoryPoint;

impl rosidl_runtime_rs::Service for SendJointTrajectoryPoint {
    type Request = SendJointTrajectoryPoint_Request;
    type Response = SendJointTrajectoryPoint_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint() }
    }
}


