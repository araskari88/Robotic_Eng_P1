#include <gazebo/gazebo.hh>

namespace gazebo

{
	class ProjOneWorldPlugin:public WorldPlugin
	{
		public: ProjOneWorldPlugin():WorldPlugin()
		{
			printf("Welcome to Arash's world!\n");
		}
		
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(ProjOneWorldPlugin)
}
