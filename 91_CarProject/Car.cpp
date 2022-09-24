#include"Car.h"

Car::Car(string color, int numDoors)
{
	this->color = color;
	this->numDoors = numDoors;
}

string Car::getColor()
{
	return color;
}

int Car::getNumDoors()
{
	return numDoors;
}