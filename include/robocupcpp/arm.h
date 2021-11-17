#ifndef robocupcpp__ARM_H
#define robocupcpp__ARM_H

#include <robocupcpp/joint.h>

namespace robocupcpp
{
	class Arm
	{
		private:

		public:
			Arm();
			~Arm();
			Joint joints[8];
	};
}

#endif
