#include "gazebo/gui/GuiIface.hh"
#include "gazebo/rendering/rendering.hh"
#include "gazebo/gazebo.hh"

namespace gazebo
{
  class GazeboMIS : public SystemPlugin
  {
    public:
      virtual ~GazeboMIS()
      {
      }

      virtual void Load(int /*_argc*/, char ** /*_argv*/)
      {
        std::cout << "Hello from GazeboMIS" << std::endl;
      }

    private:
      virtual void Init()
      {
      }
  };

  // Register this plugin with the simulator
  GZ_REGISTER_SYSTEM_PLUGIN(GazeboMIS)
}
