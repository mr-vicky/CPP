#include<iostream>
#include<stdexcept>
#include"warpDriveOverheating.h"
using namespace std;


void warpTest(int temp);

int main()
{
	try
	{
		 warpTest(50);
		 warpTest(70);
		 warpTest(100);

		
	}
	catch (const overflow_error& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}

void warpTest(int temp)
{
	if (temp < 80)
	{
		cout << "Temperature is within tolerence" << endl;
	}
	else
	{
		throw warpDriveOverheating();
	}

	

}
