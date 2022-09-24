#include<iostream>
using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum); //passing the address means i.e call-by-reference
void threeTimesN(int input, int& output );

int main()
{  
    int myNumber = 20;
    
    cout<<"myNumber before calling valueChanged1 : "<<myNumber<<endl;
    valueChanged1(myNumber);
    cout<<"myNumber after calling valueChanged2 : "<<myNumber<<endl;

    cout<<endl<<endl;

    cout<<"myNumber before calling valueChanged2 : "<<myNumber<<endl;
    valueChanged2(myNumber);
    cout<<"myNumber After calling valueChanged2 : "<<myNumber<<endl;

    cout<<endl<<endl;

    int myInputNum;
    threeTimesN(100, myInputNum);
    cout<<"After threeTimeN myInputNum is "<<myInputNum<<endl;

    

    return 0;
}

void valueChanged1(int someNum) // call by value
{
    someNum = 100;
    cout<<"someNum in valueChanged1 : "<<someNum<<endl;
}

void valueChanged2(int& someNum) // call by reference
{
    someNum = 100;
    cout<<"someNum in valueChanged2m : "<<someNum<<endl; 
}

void threeTimesN(int input, int& output ) // call by reference
{
    output = input*3;

}
