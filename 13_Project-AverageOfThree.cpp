#include<iostream>
using namespace std;
int main()
    {
        double num1, num2, num3;

        // taking the input from the user---->
        cout<<"Please enter the 1st numbers: "<<endl;
        cin>>num1;
        
        cout<<"Please enter the 2nd numbers: "<<endl;
        cin>>num2;

        cout<<"Please enter the 3rd numbers: "<<endl;
        cin>>num3;

        double avg = (num1 + num2 +num3)/3;

        cout<<"\nnum1 = "<<num1<<"\nnum2 = "<<num2<<"\nnum3= "<<num3<<endl;

        cout<<"\nAverage = "<<avg<<endl;
        return 0;

    }