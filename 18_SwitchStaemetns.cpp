// Selection control statement --> Switch statement
#include<iostream>


using namespace std;
int main()
    {
        char grade;

        cout<<"Enter the Grade :==> "<<endl;

        cin>>grade;

        switch (grade)
        {
        case 'A':     
        case 'a':  //----> you can check one or more cases for the same block of code
        // case 'j':
        // case 'k':
        // case 'l':
        // case 'm':
        // case 'e':
            cout<<"Great job!"<<endl;
            break;
        case 'B':
        case 'b':
            cout<<"Good job!"<<endl;
            break;
        case 'C':
        case 'c':
            cout<<"You can do better!"<<endl;
            break;
        case 'D':
        case 'd':
            cout<<"You are close to failing !"<<endl;
            break;
        case 'F':
        case 'f':
            cout<<"You are failing the course!"<<endl;
            break;
        default:
            cout<<"Ivalid input! please try again..."<<endl;

        
        }

        return 0;
    }
    // Algorithm for this program -->
    // 1. Taking the input from the user
    // 2. Checking the input from te user by using the switch-case statement
    // 3. Printing the output according the cases.