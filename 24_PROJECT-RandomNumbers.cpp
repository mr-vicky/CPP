#include<iostream>
#include<cstdlib> // this library included to use srand() function
#include<ctime> // this returns the current system time
using namespace std;
int main()
{
    srand(time(nullptr));

    //  this code generates the random value
    int val1=rand()%10; // val1 >= 0 and <10
    
    // shift it
    int val2=rand()%10 + 1; // val2 >= 1 and <= 10

    cout<<val1<<endl;
    cout<<val2<<endl;
 
    return 0;
}