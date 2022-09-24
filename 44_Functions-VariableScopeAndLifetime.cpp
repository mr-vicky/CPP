#include<iostream>
using namespace std;

void someFunction(int aParam);

// global variable
double myGlobalDouble = 3.14159; 

int main()
{   int localToMain = 20; // local variable
    cout<<"The local to main variable is "<<localToMain<<endl;
    cout<<"globle double in main function is "<<myGlobalDouble<<endl;

    // cout<<mylocalNum<<endl; // error

    someFunction(25);
    someFunction(28);
    someFunction(32);

    return 0;
}

void someFunction(int aParam)
{
    int mylocalNum = 100; // local variable
    // cout<<localToMain<<endl; // error
    static int myStatic =  500; // static local variable
    myStatic++;
    mylocalNum++;
    myGlobalDouble++;
    

    cout<<"My local number is "<<mylocalNum<<endl;
    cout<<"The parameter is "<<aParam<<endl;
    cout<<"My globle double (in someFunction) is "<<myGlobalDouble<<endl;
    cout<<"My static variable is "<<myStatic<<endl;
    cout<<endl<<endl;

    
}