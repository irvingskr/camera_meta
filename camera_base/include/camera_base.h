//
// Created by irving on 22-9-22.
//

#ifndef SRC_CAMERA_BASE_H
#define SRC_CAMERA_BASE_H
#include <camera_info_manager/camera_info_manager.h>
#include <dynamic_reconfigure/client.h>
#include <sensor_msgs/TimeReference.h>
#include <rm_msgs/CameraStatus.h>
#include <rm_msgs/EnableImuTrigger.h>
#endif  // SRC_CAMERA_BASE_H

namespace camera_base
{
class CameraBase
{
public:
  struct TriggerPacket
  {
    uint32_t trigger_counter_;
    ros::Time trigger_time_;
  };
  virtual void triggerCB(const sensor_msgs::TimeReference::ConstPtr& time_ref) = 0;

  virtual void enableTriggerCB(const ros::TimerEvent&) = 0;
};
}  // namespace camera_base