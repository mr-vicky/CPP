#include<iostream>
#include<string>
#include"House.h"
#include"House.cpp"
using namespace std;

void printHouseData(House house);


int main()
{
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(30);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    // yourHouse.color="Orange"; // ERROR inaccessible

    // cout<<"My House is "<<myHouse.getColor()<<" and has "
    //     <<myHouse.getNumStories()<<" stories and "
    //     <<myHouse.getNumWindows()<<" windows. "<<endl;

    // cout<<"Your House is "<<yourHouse.getColor()<<" and has "
    //     <<yourHouse.getNumStories()<<" stories and "
    //     <<yourHouse.getNumWindows()<<" windows."<<endl;

    /*printHouseData(myHouse);
    printHouseData(yourHouse);*/

    myHouse.print();
    yourHouse.print();

    return 0;
}

void printHouseData(House house)
{
    cout << "The House is " << house.getColor() << " and has "
        << house.getNumStories() << " stories and "
        << house.getNumWindows() << " windows. " << endl;

}