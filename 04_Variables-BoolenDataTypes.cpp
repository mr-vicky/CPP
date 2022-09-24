#include<iostream>
using namespace std;

int main()
    {
        bool isRaining = true; 
        /* here in c++ - the '0(zero)' value is considered to be 'false'| false=0
                       - the 'non-zero' value is considered to be 'true'| true=1
        */

        
        // cout<<isRaining<<endl;
        // cout<<boolalpha<<isRaining<<endl;   /* here the 'boolalpha' is used to print 
        //                                     the 'textual equivallence' of the variable */
        
        // Code Challenge
        bool isSunny = true;
        bool isWarm = false;

        // cout<<boolalpha;
        cout<<"sunny = "<<isSunny<<endl;
        cout<<"warm = "<<isWarm<<endl;
        

        return 0;
    }