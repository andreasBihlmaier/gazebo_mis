#include "gazebo/gazebo.hh"
#include "gazebo/gui/GuiIface.hh"
#include "gazebo/rendering/RenderingIface.hh"
#include "gazebo/rendering/RenderEngine.hh"
#include "gazebo/rendering/Scene.hh"
#include "gazebo/rendering/ogre_gazebo.h"
#include "gazebo/physics/PhysicsIface.hh"

#include <ros/ros.h>


namespace gazebo
{
  class GazeboMISServerPlugin : public SystemPlugin
  {
    public:
      virtual ~GazeboMISServerPlugin()
      {
      }

      virtual void Load(int /*_argc*/, char ** /*_argv*/)
      {
        if (!ros::isInitialized()) {
          ROS_FATAL_STREAM("A ROS node for Gazebo has not been initialized, unable to load plugin. "
            << "Load the Gazebo system plugin 'libgazebo_ros_api_plugin.so' in the gazebo_ros package)");
          return;
        }
      }

    private:
      virtual void Init()
      {
        std::cout << "------------------- GazeboMISServerPlugin -------------------" << std::endl;
        std::string worldName = gui::get_world();
        std::cout << "get_world(): " << worldName << std::endl;
        std::cout << "Disabling physics engine" << std::endl;
        physics::WorldPtr world = physics::get_world();
        world->EnablePhysicsEngine(false);
      }
  };

  // Register this plugin with the simulator
  GZ_REGISTER_SYSTEM_PLUGIN(GazeboMISServerPlugin)
}
