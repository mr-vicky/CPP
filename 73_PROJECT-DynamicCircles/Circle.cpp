#include"Circle.h"
#include<cmath> 
const double MY_PI = 3.14159;

Circle::Circle()
{
	this->radius = 1.0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{	
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	this->radius = radius;
}

double Circle::circumference() const
{
	return 2 * MY_PI * radius;
}

double Circle::area() const
{
	return MY_PI * pow(radius, 2);
}
