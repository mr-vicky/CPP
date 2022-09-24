#include<iostream>
#include<array>
using namespace std;

int sumArray(array<int, 10>theArray);

int main()
{
    array<int, 10>theArray{2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int theResult = sumArray(theArray);
    cout<<"The size of the array : "<<theResult<<endl;
    
    return 0;
}

int sumArray(array<int, 10>theArray)
{
    int sum = 0;
    for(auto a: theArray)
    {
        sum += a; //OR sum = sum + a; 
    return sum;
}