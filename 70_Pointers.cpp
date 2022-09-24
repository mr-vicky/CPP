#include<iostream>
using namespace std;

int main()
{
    int myLovelyInt = 150;
    int *somePtr = &myLovelyInt;

    double myDouble = 3.14;
    double *doublePtr = &myDouble;

    cout<<"myLovelyInt is originally : "<<myLovelyInt<<endl;
    cout<<"pointer holds value : "<<somePtr<<endl;
    cout<<"Pointer dereference : "<<*somePtr<<endl;

    *somePtr = 200;

    cout<<"myLovelyInt is now : "<<myLovelyInt<<endl;

    cout<<endl;
    cout<<"myDouble : "<<myDouble<<endl;
    cout<<"doublePtr : "<<doublePtr<<endl;
    cout<<"*doublePtr : "<<*doublePtr<<endl;

    return 0;
}