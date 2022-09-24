#include<iostream>
using namespace std;

void printSomething(); // function prototype 

int main() 
{
    printSomething(); // calling OR Invoking the function
    myName();
    return 0;
}

// this whole is function defination-->

void printSomething() // function header
// the below part is function's body
{
    cout<<"Hey look I am here!"<<endl;
}

void myName()
{
    cout<<"Vicky"<<endl;
}