#include "GazeboMISGuiPlugin.h"

// system includes

// library includes
#include "gazebo/gui/GuiIface.hh"
#include "gazebo/rendering/RenderingIface.hh"
#include "gazebo/rendering/RenderEngine.hh"
#include "gazebo/rendering/Scene.hh"
#include "gazebo/rendering/ogre_gazebo.h"

// custom includes


namespace gazebo
{
/*---------------------------------- public: -----------------------------{{{-*/
  GazeboMISGuiPlugin::~GazeboMISGuiPlugin()
  {
  }

  void
  GazeboMISGuiPlugin::Load(int /*_argc*/, char ** /*_argv*/)
  {
  }
/*------------------------------------------------------------------------}}}-*/

/*---------------------------------- private: ----------------------------{{{-*/
  void
  GazeboMISGuiPlugin::Init()
  {
    std::cout << "------------------- GazeboMISGuiPlugin -------------------" << std::endl;
    //rendering::ScenePtr scene = rendering::RenderEngine::Instance()->GetScene();
    //Ogre::SceneManager* sceneManager = scene->GetManager();

#if 0
    std::cout << "Adding OGRE head to scene" << std::endl;
    Ogre::Root *root = rendering::RenderEngine::Instance()->root;
    Ogre::ResourceGroupManager::getSingleton().addResourceLocation("/usr/share/OGRE-1.7.4/media/models/", "FileSystem");
    Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();

    Ogre::Entity* headEntity = sceneManager->createEntity("Head", "ogrehead.mesh");
    Ogre::SceneNode* headNode = sceneManager->getRootSceneNode()->createChildSceneNode("HeadNode");
    headNode->attachObject(headEntity);
#endif // 0
  }
/*------------------------------------------------------------------------}}}-*/

  // Register this plugin with the simulator
  GZ_REGISTER_SYSTEM_PLUGIN(GazeboMISGuiPlugin)
}
