#include <iostream>
using namespace std;

class Rectangle
{
public:
    Rectangle();
    Rectangle(double length, double width);
    double getLength() const;
    double getWidth() const;
    void setLength(double length);
    void setWidth(double width);
    double area() const;
    double perimeter() const;

private:
    double length;
    double width;

}; // end of rectangle class

Rectangle::Rectangle()
{
    this->length = 1.0;
    this->width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
    this->length = length;
    this->width = width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setLength(double length)
{
    this->length = length;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::area() const
{
    return length * width;
}

double Rectangle::perimeter() const
{
    return 2*(length+width);
}

int main()
{
    Rectangle r1;
    Rectangle r2(2.0, 3.0);

    cout << "Area of r1 is " << r1.area() << endl;
    cout << "Area of r2 is " << r2.area() << endl;

    r1.setLength(20);
    r1.setWidth(30);

    cout << "Now the area of the r1 is " << r1.area() << endl;

    cout<<"Perimeter of the r1 "<<r1.perimeter()<<endl;
    cout<<"Perimeter of the r2 "<<r2.perimeter()<<endl;

    return 0;
}