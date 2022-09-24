#include<iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int myArray[ARRAY_SIZE];
    // for loop
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        myArray[i]=i+1;
    }

    // inhanced for loop OR for-each loop OR Range-based for loop
    for(auto arr: myArray)
    {
        cout<<arr<<endl;
    }
    return 0;
}
