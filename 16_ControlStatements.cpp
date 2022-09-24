// control statements-->  are the statements involved with the flow of control of the program
// Special syntax is used to change the normal(sequencial) flow of control throughout the program.

// Control Statements types-->
//      1. Sequential control statements(sequence statement):
//         - sequencial control statements are default, 
//         - statements which are written and executed in sequence on write after the other 
//           are considered as sequence control statements

//      2. Selection control statements(decision statement):
//      3. Repetition control Statements(loops):
#include<iostream>
using namespace std;

int main()
    {
        // Sequencial Statement Example-->
        int age = 15;
        cout<<age<<endl;

        // Selection control statemant Ex-->
        if(age >= 16)
        {
            cout<<"You can Drive!"<<endl;
        }
        else
        {
            cout<<"You cannot drive!"<<endl;
        }

        // Repetition control statement--->
        // for loop
        for(int i=1;i<=age;i++)
        {
            cout<<"Happy Birthday "<<i<<endl;
        }
        return 0;
    }