#include<iostream>
#include<string>
using namespace std;

class House
{
    public: 

        House(); //constructor
        House(int numStories, int numWindows, string color); // parameterised constructor
        ~House(); // destructor
        void setNumStories(int numStories);

        void setNumWindows(int numWindows);
        
        void setColor(string color);
        
        int getNumStories() const;
        
        int getNumWindows() const;
        
        string getColor() const;
        
        void print() const;
        
   
    private: 
        int numStories;
        int numWindows;
        string color;
        

}; // end of the class House

        House::House() // this is a no argument Constructor
        {
            this->numStories = 1;
            this->numWindows = 4;
            this->color = "white";
        }

        House::House(int numStories, int numWindows, string color)
        {
            this->numStories = numStories;
            this->numWindows = numWindows;
            this->color = color;
        }

        House::~House()
        {
            cout<<"The "<<color<<" house with "<<numStories<<" stories "
                <<" and "<<numWindows<<" windows is being destroyed!"<<endl;
        }

        void House::setNumStories(int numStories)
        {
            this->numStories=numStories;
        }

        void House::setNumWindows(int numWindows)
        {
            this->numWindows=numWindows;
        }

        void House::setColor(string color)
        {
            this->color=color;
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
            cout<<"The House is "<<color<<" and has "
        <<numStories<<" stories and "
        <<numWindows<<" windows. "<<endl;

        }
        

void printHouseData(House house);


int main()
{
    House myHouse;
    House yourHouse;
    House theirHouse(100, 200, "white");

    myHouse.print();
   

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("red");

    yourHouse.setNumStories(30);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("blue");

    myHouse.print();
    yourHouse.print();
    theirHouse.print(); 
    return 0;
}

void printHouseData(House house)
{
    house.setColor("Orange");
    

}