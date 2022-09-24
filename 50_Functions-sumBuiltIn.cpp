#include<iostream>
using namespace std;

int sumArray(int arr[], int arraySize);

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = sumArray(arr, 10);
    cout<<"SUm of the all elements of the array : "<<sum<<endl;
    return 0;
}

int sumArray(int arr[], int arraySize)
{
    int sum = 0;
    for(int i=0; i<arraySize; i++)
    {
        sum += arr[i]; // OR sum = sum + arr[i];
    }
    return sum;
}