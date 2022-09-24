#include<iostream>
#include<string>
using namespace std;

class House
{
    public: // Access Specifiers OR Access Modifiers
        void setNumStories(int numStories)
        {
            this->numStories=numStories;
        }

        void setNumWindows(int numWindows)
        {
            this->numWindows=numWindows;
        }

        void setColor(string color)
        {
            this->color=color;
        }

        int getNumStories() const
        {
            return numStories;
        }

        int getNumWindows() const
        {
            return numWindows;
        }

        string getColor() const
        {
            return color;
        }
        /* The Above functions are called as 'Member Functions OR Method's':
            - The functions which live inside of the class are member functions or Method's
            - Member functions are functions whose behavior belongs to the perticular class
            - each object exibits this behavior
        */
   
    private: // Access Specifiers OR Access Modifiers
        int numStories;
        int numWindows;
        string color;
        /* The Above variables are called as Data Members OR Fields  */

}; // end of the class House

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

    printHouseData(myHouse);
    printHouseData(yourHouse);

    return 0;
}

void printHouseData(House house)
{
    house.setColor("Orange");
    cout<<"The House is "<<house.getColor()<<" and has "
        <<house.getNumStories()<<" stories and "
        <<house.getNumWindows()<<" windows. "<<endl;

}