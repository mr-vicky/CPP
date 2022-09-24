#include<iostream>
using namespace std;
int main()
{
    // Break: cause a early exit from the repetition control statement
    // continue: causes an iteration of repetition control statement to be skipped

    // int count=0;
    // for(count=0;count<10;count++)
    // {
    //     if(count==7)
    //     {
    //         count++; 
    //         continue;   // here it skipped the 7

    //     }
    //     cout<<count<<endl;
    // }

    for(int i=0;i<10;i++)
    {
       
        if(i==5)
        {
            
            // continue; //  it skipped the 5
            i++;
            break; // it breaks the loop before 5
                   // break keyword is always used to immediately exit the loop
        }
         cout<<i<<endl;
    }

    return 0;
}