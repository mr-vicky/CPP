#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "r1 area is " << r1.area() << endl;
	cout << "r2 area is " << r2.area() << endl;


	r1.setLength(22);
	r1.setWidth(12);

	cout << "r1 length is now " << r1.getLength() << endl;
	cout << "r1 width is now " << r1.getWidth() << endl;

	cout << "r1 area is now " << r1.area() << endl;

	cout << "perimeter of r1 is " << r1.perimeter() << endl;
	cout << "perimeter of r2 is " << r2.perimeter() << endl;

	return 0;
}