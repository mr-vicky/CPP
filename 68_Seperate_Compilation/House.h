// This is the Specification OR Header File
// - it contains just the data members and the prototype for the member functions

#ifndef HOUSE_H
#define HOUSE_H
#include<string>
using namespace std;
class House
{
    public: // Access Specifiers OR Access Modifiers
        void setNumStories(int numStories);
        
        void setNumWindows(int numWindows);
        
        void setColor(string color);
        
        int getNumStories() const;
        
        int getNumWindows() const;
        
        string getColor() const;
        
        void print() const;
        
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

#endif
