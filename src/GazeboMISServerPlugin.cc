#include "GazeboMISServerPlugin.h"

// system includes

// library includes
#include "gazebo/physics/PhysicsIface.hh"

#include <ros/ros.h>

// custom includes


namespace gazebo
{
/*---------------------------------- public: -----------------------------{{{-*/
  GazeboMISServerPlugin::~GazeboMISServerPlugin()
  {
  }

  void
  GazeboMISServerPlugin::Load(int /*_argc*/, char ** /*_argv*/)
  {
    if (!ros::isInitialized()) {
      ROS_FATAL_STREAM("A ROS node for Gazebo has not been initialized, unable to load plugin. "
        << "Load the Gazebo system plugin 'libgazebo_ros_api_plugin.so' in the gazebo_ros package)");
      return;
    }
  }
/*------------------------------------------------------------------------}}}-*/

/*---------------------------------- private: ----------------------------{{{-*/
  void
  GazeboMISServerPlugin::Init()
  {
    std::cout << "------------------- GazeboMISServerPlugin -------------------" << std::endl;
    std::cout << "Disabling physics engine" << std::endl;
    physics::WorldPtr world = physics::get_world();
    world->EnablePhysicsEngine(false);
  }
/*------------------------------------------------------------------------}}}-*/

  // Register this plugin with the simulator
  GZ_REGISTER_SYSTEM_PLUGIN(GazeboMISServerPlugin)
}
