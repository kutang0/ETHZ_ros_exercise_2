#pragma once

#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>


namespace husky_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class HuskyHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	HuskyHighlevelController(ros::NodeHandle& nodeHandle);

	/*!
	 * Destructor.
	 */
	virtual ~HuskyHighlevelController();

private:
  ros::NodeHandle nodeHandle_;
  ros::Subscriber subscriber_;
  std::string topic_name_;
  std::int32_t topic_size_queue_;

  void scanCallback(const sensor_msgs::LaserScan& msg);




};

} /* namespace */
