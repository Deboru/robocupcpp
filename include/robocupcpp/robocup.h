#ifndef robocupcpp__robocup_H
#define robocupcpp__robocup_H

#include <sstream>
#include <robocupcpp/segment.h>

namespace robocupcpp
{
	class robocup
	{
		private:
		public:
			robocup();
			~robocup();

			Segment<5> base;
			Segment<1> torso;
			Segment<2> head;
			Segment<8> armRight;
			Segment<8> armLeft;

			Joint getJoint(std::string jointName);
			void setJoint(robocupcpp::Joint joint);
	};
}

#endif
