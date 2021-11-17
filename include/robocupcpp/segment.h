#ifndef robocupcpp__SEGMENT_H
#define robocupcpp__SEGMENT_H

#include <robocupcpp/joint.h>

namespace robocupcpp
{
	template <int T> class Segment
	{
		private:

		public:
			Segment() { };
			~Segment() { };
			int size() const { return T; }
			Joint joints[T];
	};
}

#endif
