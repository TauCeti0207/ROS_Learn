;; Auto-generated. Do not edit!


(when (boundp 'loop_action::KeyFrameHandleFeedback)
  (if (not (find-package "LOOP_ACTION"))
    (make-package "LOOP_ACTION"))
  (shadow 'KeyFrameHandleFeedback (find-package "LOOP_ACTION")))
(unless (find-package "LOOP_ACTION::KEYFRAMEHANDLEFEEDBACK")
  (make-package "LOOP_ACTION::KEYFRAMEHANDLEFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude KeyFrameHandleFeedback.msg.html


(defclass loop_action::KeyFrameHandleFeedback
  :super ros::object
  :slots (_saving ))

(defmethod loop_action::KeyFrameHandleFeedback
  (:init
   (&key
    ((:saving __saving) 0)
    )
   (send-super :init)
   (setq _saving (round __saving))
   self)
  (:saving
   (&optional __saving)
   (if __saving (setq _saving __saving)) _saving)
  (:serialization-length
   ()
   (+
    ;; uint32 _saving
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint32 _saving
       (write-long _saving s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint32 _saving
     (setq _saving (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get loop_action::KeyFrameHandleFeedback :md5sum-) "462113d864566488f4e0ca18af3ef254")
(setf (get loop_action::KeyFrameHandleFeedback :datatype-) "loop_action/KeyFrameHandleFeedback")
(setf (get loop_action::KeyFrameHandleFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message 
uint32 saving

")



(provide :loop_action/KeyFrameHandleFeedback "462113d864566488f4e0ca18af3ef254")

