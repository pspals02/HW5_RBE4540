#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendPose_Request() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendPose_Request__init(msg: *mut SendPose_Request) -> bool;
    fn common_interfaces_merlab__srv__SendPose_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendPose_Request>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendPose_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendPose_Request>);
    fn common_interfaces_merlab__srv__SendPose_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendPose_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendPose_Request>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendPose_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendPose_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for SendPose_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendPose_Request__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendPose_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendPose_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendPose_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendPose_Request where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendPose_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendPose_Request() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendPose_Response() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendPose_Response__init(msg: *mut SendPose_Response) -> bool;
    fn common_interfaces_merlab__srv__SendPose_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendPose_Response>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendPose_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendPose_Response>);
    fn common_interfaces_merlab__srv__SendPose_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendPose_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendPose_Response>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendPose_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendPose_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendPose_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendPose_Response__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendPose_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendPose_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendPose_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendPose_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendPose_Response where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendPose_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendPose_Response() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendTwist_Request() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendTwist_Request__init(msg: *mut SendTwist_Request) -> bool;
    fn common_interfaces_merlab__srv__SendTwist_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Request>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Request>);
    fn common_interfaces_merlab__srv__SendTwist_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendTwist_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Request>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendTwist_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendTwist_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub twist: geometry_msgs::msg::rmw::Twist,

}



impl Default for SendTwist_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendTwist_Request__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendTwist_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendTwist_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendTwist_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendTwist_Request where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendTwist_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendTwist_Request() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendTwist_Response() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendTwist_Response__init(msg: *mut SendTwist_Response) -> bool;
    fn common_interfaces_merlab__srv__SendTwist_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Response>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Response>);
    fn common_interfaces_merlab__srv__SendTwist_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendTwist_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendTwist_Response>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendTwist_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendTwist_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SendTwist_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendTwist_Response__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendTwist_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendTwist_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendTwist_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendTwist_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendTwist_Response where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendTwist_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendTwist_Response() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory_Request() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendJointTrajectory_Request__init(msg: *mut SendJointTrajectory_Request) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Request>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Request>);
    fn common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendJointTrajectory_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Request>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectory_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectory_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_points: trajectory_msgs::msg::rmw::JointTrajectory,

}



impl Default for SendJointTrajectory_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendJointTrajectory_Request__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendJointTrajectory_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendJointTrajectory_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectory_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendJointTrajectory_Request where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendJointTrajectory_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory_Request() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory_Response() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendJointTrajectory_Response__init(msg: *mut SendJointTrajectory_Response) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Response>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Response>);
    fn common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendJointTrajectory_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectory_Response>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectory_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectory_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendJointTrajectory_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendJointTrajectory_Response__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendJointTrajectory_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendJointTrajectory_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectory_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectory_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendJointTrajectory_Response where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendJointTrajectory_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectory_Response() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(msg: *mut SendJointTrajectoryPoint_Request) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Request>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Request>);
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Request>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectoryPoint_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_point: trajectory_msgs::msg::rmw::JointTrajectoryPoint,

}



impl Default for SendJointTrajectoryPoint_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendJointTrajectoryPoint_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectoryPoint_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendJointTrajectoryPoint_Request where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendJointTrajectoryPoint_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint_Request() }
  }
}


#[link(name = "common_interfaces_merlab__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response() -> *const std::ffi::c_void;
}

#[link(name = "common_interfaces_merlab__rosidl_generator_c")]
extern "C" {
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(msg: *mut SendJointTrajectoryPoint_Response) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Response>, size: usize) -> bool;
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Response>);
    fn common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SendJointTrajectoryPoint_Response>) -> bool;
}

// Corresponds to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SendJointTrajectoryPoint_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SendJointTrajectoryPoint_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init(&mut msg as *mut _) {
        panic!("Call to common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SendJointTrajectoryPoint_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SendJointTrajectoryPoint_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SendJointTrajectoryPoint_Response where Self: Sized {
  const TYPE_NAME: &'static str = "common_interfaces_merlab/srv/SendJointTrajectoryPoint_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__common_interfaces_merlab__srv__SendJointTrajectoryPoint_Response() }
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


