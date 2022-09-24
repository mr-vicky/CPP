#include<iostream>
using namespace std;

int main()
{
	enum Directions { UP, DOWN, LEFT, RIGHT, STANDING};
	Directions myDirection = STANDING;
	cout << myDirection<<endl;

	if (myDirection == UP)
	{
		cout << "UP!" << endl;
	}
	else if (myDirection == DOWN)
	{
		cout << "DOWN!" << endl;
	}
	else if (myDirection == LEFT)
	{
		cout << "LEFT!" << endl;
	}
	else if (myDirection == RIGHT)
	{
		cout << "RIGHT!" << endl;
	}
	else if (myDirection == STANDING)
	{
		cout << "Still Standing!" << endl;
	}

	return 0;
}