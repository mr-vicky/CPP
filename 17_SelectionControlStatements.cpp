// Selection Control Statements--->
// Three specific selection control statements:
//      1. if statement
//      2. if-else statement
//      3. switch statement

#include<iostream>
using namespace std;

int main()
    {
        int age;
        cout<<"Welcome to the Pub and Grille!"<<endl;
        cout<<"Please enter your age:"<<endl;
        cin>>age;

        if(age>=16 || age<21)
        {
            cout<<"Here have a coke!\nand, at least you can drive."<<endl;
        }
        else if(age>=21)
        {
            cout<<"Hear a bear and Grille!"<<endl;
        }
        else
        {
            cout<<"Here have a coke!"<<endl;
        }
        cout<<"Thanks for coming to the Pub and Grille!"<<endl;
        return 0;
    }