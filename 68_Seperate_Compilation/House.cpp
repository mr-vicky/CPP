//This is the Implementation File

#include<iostream>
#include "House.h"
#include <iostream>
using namespace std;

// following are the member functions of class
void House::setNumStories(int numStories)
{
    this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}

void House::setColor(string color)
{
    this->color = color;
}

int House::getNumStories() const
{
    return numStories;
}

int House::getNumWindows() const
{
    return numWindows;
}

string House::getColor() const
{
    return color;
}

void House::print() const 
{
    cout << "The House is " << color << " and has "
        << numStories << " stories and "
        << numWindows << " windows. " << endl;
    // thus this is a member function so we can direcly access the data members
}

/* The Above functions are called as 'Member Functions OR Method's':
    - The functions which live inside of the class are member functions or Method's
    - Member functions are functions whose behavior belongs to the perticular class
    - each object exibits this behavior
*/