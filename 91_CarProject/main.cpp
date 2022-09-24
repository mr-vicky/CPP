#include<iostream>
#include<memory>
#include"Car.h"
using namespace std;

int main()
{
	unique_ptr<Car> myCar = make_unique<Car>("Black", 4);
	unique_ptr<Car> yourCar = make_unique<Car>("Red", 2);


	

	cout<<"Color: " << myCar->getColor()<<endl;
	cout << "Doors: " << myCar->getNumDoors() << endl;

	unique_ptr<Car> otherPtr = move(yourCar);
	cout << endl;
	cout << "OtherPtr: " << otherPtr->getColor() << endl;
	cout << "OtherPtr: " << otherPtr->getNumDoors() << endl;
	
	cout << endl;
	cout << "Color: " << yourCar->getColor() << endl;
	cout << "Doors: " << yourCar->getNumDoors() << endl;

	return 0;
}