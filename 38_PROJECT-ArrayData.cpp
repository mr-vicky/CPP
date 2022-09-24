#include<iostream>
#include<array>
using namespace std;
int main()
{
    const int ARRAY_SIZE= 5;
    array<int,ARRAY_SIZE>arr;
    
    
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        cout<<"Enter the element:\n";
        cin>>arr[i];
    }
        
    cout<<"\nNow here the doubled amount:\n";
    for(auto j: arr)
    {
        cout<<j*2<<endl;
    }
    return 0;
}