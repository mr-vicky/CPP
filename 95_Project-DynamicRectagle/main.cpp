#include <iostream>
#include"Rectangle.h"
using namespace std;


int main()
{
    const int ARRAY_SIZE = 3;
    Rectangle* rectPtrs[ARRAY_SIZE]{};

    rectPtrs[0] = new Rectangle(2, 4);
    rectPtrs[1] = new Rectangle(3, 6);
    rectPtrs[2] = new Rectangle(4, 8);

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout <<"Perimeter of rectangle " << rectPtrs[i]->perimeter() << endl;
        cout << "Area of rectangle " << rectPtrs[i]->area() << endl << endl;
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        delete rectPtrs[i];
        rectPtrs[i] = nullptr;
    }

    return 0;
}