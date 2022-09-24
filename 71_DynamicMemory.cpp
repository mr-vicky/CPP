#include<iostream>
using namespace std;

int main()
{
    int *myIntPtr = new int;
    *myIntPtr = 123;
    cout<< *myIntPtr<<endl;

    bool *myBoolPtr = new bool(1);
    cout<<boolalpha;
    cout<<*myBoolPtr<<endl;

    delete myBoolPtr;
    myBoolPtr = nullptr;

    delete myIntPtr;
    myIntPtr = nullptr;
    return 0;
}