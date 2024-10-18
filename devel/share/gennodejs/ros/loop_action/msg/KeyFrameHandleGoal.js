// Auto-generated. Do not edit!

// (in-package loop_action.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class KeyFrameHandleGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.function = null;
    }
    else {
      if (initObj.hasOwnProperty('function')) {
        this.function = initObj.function
      }
      else {
        this.function = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type KeyFrameHandleGoal
    // Serialize message field [function]
    bufferOffset = _serializer.uint32(obj.function, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type KeyFrameHandleGoal
    let len;
    let data = new KeyFrameHandleGoal(null);
    // Deserialize message field [function]
    data.function = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'loop_action/KeyFrameHandleGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '142cf54a24c318f027c4b4907179cc04';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the goal
    uint32 function  # 1 for add keyframe, 2 for save map keyframe
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new KeyFrameHandleGoal(null);
    if (msg.function !== undefined) {
      resolved.function = msg.function;
    }
    else {
      resolved.function = 0
    }

    return resolved;
    }
};

module.exports = KeyFrameHandleGoal;