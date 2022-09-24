#ifndef WARP_DRIVE_OVERHEATING
#define WARP_DRIVE_OVERHEATING

#include<stdexcept>
using namespace std;

class warpDriveOverheating : public overflow_error
{
	public:
		warpDriveOverheating() : overflow_error("Warp drive had exceeded the safe temperature tolerence")
		{
		}

};

#endif