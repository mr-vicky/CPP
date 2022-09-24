#include<iostream>
#include<string>
using namespace std;

int main()
{
    /* Array:   - array is a linear data type, 
                - which stores the elements of the same datatype.
                - the size of the array is fixed. 
                - index of the array starts from the 0. 
                - highest_index of the array = array_size - 1 */

    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];
    string names[4] = {"Nitesh", "Prathamesh", "Sanket", "Vicky"};

    myArray[0] = 5;
    myArray[1] = 2;
    myArray[2] = 6;
    myArray[3] = 9;
    myArray[4] = 10;

    for(int i=0; i<ARRAY_SIZE; i++)
    {
        cout<<myArray[i]<<endl;
    }

    // for loop--->
    // for(int i=0;i<4;i++)
    // {
    //     cout<<names[i]<<endl;
    // }

    //  'Inhanced-for loop' OR 'Range-based for loop' OR 'for-each loop'--->

    for(auto name : names) //auto:'auto' is the keyword in cpp that can automatically identify the data type of the variable 

    {
        cout<<name<<endl;
    }
   
    
    return 0;
}