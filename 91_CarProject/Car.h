#ifndef CAR
#define CAR
#include<string>
using namespace std;

class Car
{
	public:
		Car(string color, int numDoors);
		string getColor();
		int getNumDoors();

	private:
		string color;
		int numDoors;

};

#endif