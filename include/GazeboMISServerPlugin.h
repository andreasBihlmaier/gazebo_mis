#ifndef _GAZEBO_MIS_SERVER_PLUGIN_H_
#define _GAZEBO_MIS_SERVER_PLUGIN_H_

// system includes

// library includes
#include "gazebo/gazebo.hh"

// custom includes


// forward declarations



namespace gazebo
{
  class GazeboMISServerPlugin
    : public SystemPlugin
  {
    public:
      // enums
  
      // typedefs
  
      // const static member variables
   
      // static utility functions
  
  
      // constructors
      virtual ~GazeboMISServerPlugin();
  
      // overwritten methods
  
      // methods
  
      // variables
  
  
    private:
      // overwritten methods
      virtual void Load(int /*_argc*/, char ** /*_argv*/);
      virtual void Init();

      // methods
  
      // variables
  
  
  };
}

#endif // _GAZEBO_MIS_SERVER_PLUGIN_H_
