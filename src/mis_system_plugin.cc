#include "gazebo/gui/GuiIface.hh"
#include "gazebo/rendering/RenderingIface.hh"
#include "gazebo/rendering/RenderEngine.hh"
#include "gazebo/rendering/Scene.hh"
#include "gazebo/gazebo.hh"
#include "gazebo/rendering/ogre_gazebo.h"

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
      }

    private:
      virtual void Init()
      {
        std::cout << "------------------- GazeboMIS -------------------" << std::endl;
        std::cout << "get_world(): " << gui::get_world() << std::endl;

        rendering::ScenePtr scene = rendering::RenderEngine::Instance()->GetScene();
        Ogre::SceneManager* sceneManager = scene->GetManager();

        Ogre::Root *root = rendering::RenderEngine::Instance()->root;
        Ogre::ResourceGroupManager::getSingleton().addResourceLocation("/usr/share/OGRE-1.7.4/media/models/", "FileSystem");
        Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();


        Ogre::Entity* headEntity = sceneManager->createEntity("Head", "ogrehead.mesh");
        Ogre::SceneNode* headNode = sceneManager->getRootSceneNode()->createChildSceneNode("HeadNode");
        headNode->attachObject(headEntity);
      }
  };

  // Register this plugin with the simulator
  GZ_REGISTER_SYSTEM_PLUGIN(GazeboMIS)
}
