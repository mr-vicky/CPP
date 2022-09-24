// Repetition control statements ---->
// 1. while loop
// 2. do-while loop
// 3. for loop

#include<iostream>
using namespace std;
int main()
    {
        // 1. While loop------>
        // syntax: while(//loop continuation condition)
        //         {
        //          code;
        //          increment OR decreament 
        //         }
        // - while looop is the pre-test loop i.e it checks the condition before executing the code
       
       
        // int count = 0;

        // while (count<10)
        // {
        //     cout<<count<<endl;
        //     count++;
        // }
        
        // do-while loop------>
        // - is the post-test loop
        // - there is semicolon(;) after the do-while loop
        // int count = 0;
        // do
        // {
        //     cout<<count<<endl;
        //     count++;
        // }while(count<20);

        // for looop------->
        // -Syntax: 
        // for(Initialization;Condition;Increament OR Decreament)
        // {
        //     /* Code */
        // }

        
        for(int count=0; count<15; count++)
        {
            cout<<count<<endl;
        }

        return 0;
    } 