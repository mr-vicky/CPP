#include<iostream>
using namespace std;

int multiply(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    cout<<"Enter the number three numbers : "<<endl;
    cin>>num1; 
    cin>>num2; 
    cin>>num3;
    int multiplyResult = multiply( num1, num2, num3);

    cout<<multiplyResult<<endl;
    return 0;
}

int multiply(int num1, int num2, int num3)
{
    return num1*num2*num3;
}