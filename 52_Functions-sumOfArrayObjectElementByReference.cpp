#include<iostream>
#include<array>
using namespace std;

void sumArray(array<int, 10>myArray, int& sum);

int main()
{
    int sum;
    array<int,10>myArray{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int theResult = 0 ;
    sumArray(myArray, theResult);

    cout<<"TheResult : "<<theResult;
    return 0;
}

void sumArray(array<int,10>myArray, int& sum)
{
    sum = 0 ;
    for(auto a: myArray)
    {
        sum += a;
    }

}