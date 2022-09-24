#include<iostream>
#include"Rectangle.h"
#include"RectangleHelper.h"
using namespace std;

int main()
{
	RectangleHelper helper;
	Rectangle r1(10, 25);
	cout << "r1 area: " << r1.area() << endl;

	changeData(r1);
	cout << "Now, r1 area : " << r1.area() << endl;

	helper.modifyRectangle(r1);
	cout << "After class friend area: " << r1.area() << endl;
	cout << endl;

	printData(r1);

	return 0;
}

void changeData(Rectangle& rect)
{
	rect.width = 100;
	rect.length = 100;

}

void printData(Rectangle& rect)
{
	cout << "Printing the data using the printData function" << endl;
	cout << "Width: " << rect.width << endl;
	cout << "Length: " << rect.length << endl;
}