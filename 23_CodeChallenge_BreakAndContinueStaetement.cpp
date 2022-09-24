// print the even number uo to the 10 excluding the 10
#include<iostream>
using namespace std;
int main()
    {
        int i;
        for(i=0;i<10;i++)
        {
            if(i%2!=0) // OR 
            {
                i++; // here i had a doubt? 
                continue;
                // i++;
            }
            cout<<i<<endl;
        }
    }