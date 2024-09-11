;; Auto-generated. Do not edit!


(when (boundp 'learning_communication::AddInts)
  (if (not (find-package "LEARNING_COMMUNICATION"))
    (make-package "LEARNING_COMMUNICATION"))
  (shadow 'AddInts (find-package "LEARNING_COMMUNICATION")))
(unless (find-package "LEARNING_COMMUNICATION::ADDINTS")
  (make-package "LEARNING_COMMUNICATION::ADDINTS"))
(unless (find-package "LEARNING_COMMUNICATION::ADDINTSREQUEST")
  (make-package "LEARNING_COMMUNICATION::ADDINTSREQUEST"))
(unless (find-package "LEARNING_COMMUNICATION::ADDINTSRESPONSE")
  (make-package "LEARNING_COMMUNICATION::ADDINTSRESPONSE"))

(in-package "ROS")





(defclass learning_communication::AddIntsRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod learning_communication::AddIntsRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass learning_communication::AddIntsResponse
  :super ros::object
  :slots (_sum ))

(defmethod learning_communication::AddIntsResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass learning_communication::AddInts
  :super ros::object
  :slots ())

(setf (get learning_communication::AddInts :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get learning_communication::AddInts :datatype-) "learning_communication/AddInts")
(setf (get learning_communication::AddInts :request) learning_communication::AddIntsRequest)
(setf (get learning_communication::AddInts :response) learning_communication::AddIntsResponse)

(defmethod learning_communication::AddIntsRequest
  (:response () (instance learning_communication::AddIntsResponse :init)))

(setf (get learning_communication::AddIntsRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get learning_communication::AddIntsRequest :datatype-) "learning_communication/AddIntsRequest")
(setf (get learning_communication::AddIntsRequest :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum
")

(setf (get learning_communication::AddIntsResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get learning_communication::AddIntsResponse :datatype-) "learning_communication/AddIntsResponse")
(setf (get learning_communication::AddIntsResponse :definition-)
      "# 客户端请求时发送的两个数字
int32 num1
int32 num2
---
# 服务器响应发送的数据
int32 sum
")



(provide :learning_communication/AddInts "4781436a0c2affec8025955a6041e481")


