#include<iostream>
using namespace std;
int num;
int factorial(int num);

int main()
{
    cout<<"Plz enter the number: ";
    cin>>num;
    int factResult = factorial(num);
    
    cout<<factResult<<endl;
    return 0;
}

int factorial(int num)
{
    if(num>1)
    {
        return num*factorial(num-1);
    }
    return 1;
}