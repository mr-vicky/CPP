#include"Circle.h"

void printCircleData(const Circle& c);


int main()
{
	Circle cir1;
	Circle cir2(5);

	printCircleData(cir1);
	printCircleData(cir2);
	return 0;
}

void printCircleData(const Circle& c)
{
	cout << "The radius of the circle is " <<c.getRadius() << " :" << endl;
	cout << "\tThe area of circle: "<<c.area() << endl;
	cout << "\tThe circumference of the circle: " << c.circumference();
	cout << endl << endl;
}