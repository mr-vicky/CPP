#include<iostream>
#include<array> 
using namespace std;

int main()
{
    array<int, 5>myIntArray{}; // here it will fill the values by zeros because of '{}', it is used to prevent garbage value
    /* syntax: container_type < data_type, size> container_name;
        -pieces of data inside the angular braced(<data>) are
         called template parameters.
      */

    myIntArray[0]=2;
    myIntArray[1]=4;
    myIntArray[2]=34;
    myIntArray[3]=56;
    myIntArray[4]=63;


    for(auto a: myIntArray)
    {
        cout<<a<<endl;
    }
    cout<<"size of the array: "<<myIntArray.size()<<endl; //size() function is used to get the size of the array 
    return 0;
}