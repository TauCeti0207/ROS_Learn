; Auto-generated. Do not edit!


(cl:in-package vision_msgs-msg)


;//! \htmlinclude Detection3D.msg.html

(cl:defclass <Detection3D> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (results
    :reader results
    :initarg :results
    :type (cl:vector vision_msgs-msg:ObjectHypothesisWithPose)
   :initform (cl:make-array 0 :element-type 'vision_msgs-msg:ObjectHypothesisWithPose :initial-element (cl:make-instance 'vision_msgs-msg:ObjectHypothesisWithPose)))
   (bbox
    :reader bbox
    :initarg :bbox
    :type vision_msgs-msg:BoundingBox3D
    :initform (cl:make-instance 'vision_msgs-msg:BoundingBox3D))
   (source_cloud
    :reader source_cloud
    :initarg :source_cloud
    :type sensor_msgs-msg:PointCloud2
    :initform (cl:make-instance 'sensor_msgs-msg:PointCloud2))
   (is_tracking
    :reader is_tracking
    :initarg :is_tracking
    :type cl:boolean
    :initform cl:nil)
   (tracking_id
    :reader tracking_id
    :initarg :tracking_id
    :type cl:string
    :initform ""))
)

(cl:defclass Detection3D (<Detection3D>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Detection3D>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Detection3D)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name vision_msgs-msg:<Detection3D> is deprecated: use vision_msgs-msg:Detection3D instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:header-val is deprecated.  Use vision_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'results-val :lambda-list '(m))
(cl:defmethod results-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:results-val is deprecated.  Use vision_msgs-msg:results instead.")
  (results m))

(cl:ensure-generic-function 'bbox-val :lambda-list '(m))
(cl:defmethod bbox-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:bbox-val is deprecated.  Use vision_msgs-msg:bbox instead.")
  (bbox m))

(cl:ensure-generic-function 'source_cloud-val :lambda-list '(m))
(cl:defmethod source_cloud-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:source_cloud-val is deprecated.  Use vision_msgs-msg:source_cloud instead.")
  (source_cloud m))

(cl:ensure-generic-function 'is_tracking-val :lambda-list '(m))
(cl:defmethod is_tracking-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:is_tracking-val is deprecated.  Use vision_msgs-msg:is_tracking instead.")
  (is_tracking m))

(cl:ensure-generic-function 'tracking_id-val :lambda-list '(m))
(cl:defmethod tracking_id-val ((m <Detection3D>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader vision_msgs-msg:tracking_id-val is deprecated.  Use vision_msgs-msg:tracking_id instead.")
  (tracking_id m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Detection3D>) ostream)
  "Serializes a message object of type '<Detection3D>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'results))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'results))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'bbox) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'source_cloud) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'is_tracking) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'tracking_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'tracking_id))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Detection3D>) istream)
  "Deserializes a message object of type '<Detection3D>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'results) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'results)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'vision_msgs-msg:ObjectHypothesisWithPose))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'bbox) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'source_cloud) istream)
    (cl:setf (cl:slot-value msg 'is_tracking) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'tracking_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'tracking_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Detection3D>)))
  "Returns string type for a message object of type '<Detection3D>"
  "vision_msgs/Detection3D")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Detection3D)))
  "Returns string type for a message object of type 'Detection3D"
  "vision_msgs/Detection3D")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Detection3D>)))
  "Returns md5sum for a message object of type '<Detection3D>"
  "d570bbfcd5dea29f64da78e043da65ae")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Detection3D)))
  "Returns md5sum for a message object of type 'Detection3D"
  "d570bbfcd5dea29f64da78e043da65ae")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Detection3D>)))
  "Returns full string definition for message of type '<Detection3D>"
  (cl:format cl:nil "# Defines a 3D detection result.~%#~%# This extends a basic 3D classification by including position information,~%#   allowing a classification result for a specific position in an image to~%#   to be located in the larger image.~%~%Header header~%~%# Class probabilities. Does not have to include hypotheses for all possible~%#   object ids, the scores for any ids not listed are assumed to be 0.~%ObjectHypothesisWithPose[] results~%~%# 3D bounding box surrounding the object.~%BoundingBox3D bbox~%~%# The 3D data that generated these results (i.e. region proposal cropped out of~%#   the image). This information is not required for all detectors, so it may~%#   be empty.~%sensor_msgs/PointCloud2 source_cloud~%~%# If this message was tracking result, this field set true.~%bool is_tracking~%~%# ID used for consistency across multiple detection messages. This value will~%#   likely differ from the id field set in each individual ObjectHypothesis.~%# If you set this field, be sure to also set is_tracking to True.~%string tracking_id~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: vision_msgs/ObjectHypothesisWithPose~%# An object hypothesis that contains position information.~%~%# The unique ID of the object class. To get additional information about~%#   this ID, such as its human-readable class name, listeners should perform a~%#   lookup in a metadata database. See vision_msgs/VisionInfo.msg for more detail.~%string id~%~%# The probability or confidence value of the detected object. By convention,~%#   this value should lie in the range [0-1].~%float64 score~%~%# The 6D pose of the object hypothesis. This pose should be~%#   defined as the pose of some fixed reference point on the object, such a~%#   the geometric center of the bounding box or the center of mass of the~%#   object.~%# Note that this pose is not stamped; frame information can be defined by~%#   parent messages.~%# Also note that different classes predicted for the same input data may have~%#   different predicted 6D poses.~%geometry_msgs/PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: vision_msgs/BoundingBox3D~%# A 3D bounding box that can be positioned and rotated about its center (6 DOF)~%# Dimensions of this box are in meters, and as such, it may be migrated to~%#   another package, such as geometry_msgs, in the future.~%~%# The 3D position and orientation of the bounding box center~%geometry_msgs/Pose center~%~%# The size of the bounding box, in meters, surrounding the object's center~%#   pose.~%geometry_msgs/Vector3 size~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Detection3D)))
  "Returns full string definition for message of type 'Detection3D"
  (cl:format cl:nil "# Defines a 3D detection result.~%#~%# This extends a basic 3D classification by including position information,~%#   allowing a classification result for a specific position in an image to~%#   to be located in the larger image.~%~%Header header~%~%# Class probabilities. Does not have to include hypotheses for all possible~%#   object ids, the scores for any ids not listed are assumed to be 0.~%ObjectHypothesisWithPose[] results~%~%# 3D bounding box surrounding the object.~%BoundingBox3D bbox~%~%# The 3D data that generated these results (i.e. region proposal cropped out of~%#   the image). This information is not required for all detectors, so it may~%#   be empty.~%sensor_msgs/PointCloud2 source_cloud~%~%# If this message was tracking result, this field set true.~%bool is_tracking~%~%# ID used for consistency across multiple detection messages. This value will~%#   likely differ from the id field set in each individual ObjectHypothesis.~%# If you set this field, be sure to also set is_tracking to True.~%string tracking_id~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%string frame_id~%~%================================================================================~%MSG: vision_msgs/ObjectHypothesisWithPose~%# An object hypothesis that contains position information.~%~%# The unique ID of the object class. To get additional information about~%#   this ID, such as its human-readable class name, listeners should perform a~%#   lookup in a metadata database. See vision_msgs/VisionInfo.msg for more detail.~%string id~%~%# The probability or confidence value of the detected object. By convention,~%#   this value should lie in the range [0-1].~%float64 score~%~%# The 6D pose of the object hypothesis. This pose should be~%#   defined as the pose of some fixed reference point on the object, such a~%#   the geometric center of the bounding box or the center of mass of the~%#   object.~%# Note that this pose is not stamped; frame information can be defined by~%#   parent messages.~%# Also note that different classes predicted for the same input data may have~%#   different predicted 6D poses.~%geometry_msgs/PoseWithCovariance pose~%~%================================================================================~%MSG: geometry_msgs/PoseWithCovariance~%# This represents a pose in free space with uncertainty.~%~%Pose pose~%~%# Row-major representation of the 6x6 covariance matrix~%# The orientation parameters use a fixed-axis representation.~%# In order, the parameters are:~%# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)~%float64[36] covariance~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of position and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%================================================================================~%MSG: vision_msgs/BoundingBox3D~%# A 3D bounding box that can be positioned and rotated about its center (6 DOF)~%# Dimensions of this box are in meters, and as such, it may be migrated to~%#   another package, such as geometry_msgs, in the future.~%~%# The 3D position and orientation of the bounding box center~%geometry_msgs/Pose center~%~%# The size of the bounding box, in meters, surrounding the object's center~%#   pose.~%geometry_msgs/Vector3 size~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%# It is only meant to represent a direction. Therefore, it does not~%# make sense to apply a translation to it (e.g., when applying a ~%# generic rigid transformation to a Vector3, tf2 will only apply the~%# rotation). If you want your data to be translatable too, use the~%# geometry_msgs/Point message instead.~%~%float64 x~%float64 y~%float64 z~%================================================================================~%MSG: sensor_msgs/PointCloud2~%# This message holds a collection of N-dimensional points, which may~%# contain additional information such as normals, intensity, etc. The~%# point data is stored as a binary blob, its layout described by the~%# contents of the \"fields\" array.~%~%# The point cloud data may be organized 2d (image-like) or 1d~%# (unordered). Point clouds organized as 2d images may be produced by~%# camera depth sensors such as stereo or time-of-flight.~%~%# Time of sensor data acquisition, and the coordinate frame ID (for 3d~%# points).~%Header header~%~%# 2D structure of the point cloud. If the cloud is unordered, height is~%# 1 and width is the length of the point cloud.~%uint32 height~%uint32 width~%~%# Describes the channels and their layout in the binary data blob.~%PointField[] fields~%~%bool    is_bigendian # Is this data bigendian?~%uint32  point_step   # Length of a point in bytes~%uint32  row_step     # Length of a row in bytes~%uint8[] data         # Actual point data, size is (row_step*height)~%~%bool is_dense        # True if there are no invalid points~%~%================================================================================~%MSG: sensor_msgs/PointField~%# This message holds the description of one point entry in the~%# PointCloud2 message format.~%uint8 INT8    = 1~%uint8 UINT8   = 2~%uint8 INT16   = 3~%uint8 UINT16  = 4~%uint8 INT32   = 5~%uint8 UINT32  = 6~%uint8 FLOAT32 = 7~%uint8 FLOAT64 = 8~%~%string name      # Name of field~%uint32 offset    # Offset from start of point struct~%uint8  datatype  # Datatype enumeration, see above~%uint32 count     # How many elements in the field~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Detection3D>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'results) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'bbox))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'source_cloud))
     1
     4 (cl:length (cl:slot-value msg 'tracking_id))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Detection3D>))
  "Converts a ROS message object to a list"
  (cl:list 'Detection3D
    (cl:cons ':header (header msg))
    (cl:cons ':results (results msg))
    (cl:cons ':bbox (bbox msg))
    (cl:cons ':source_cloud (source_cloud msg))
    (cl:cons ':is_tracking (is_tracking msg))
    (cl:cons ':tracking_id (tracking_id msg))
))
