#include<iostream>
using namespace std;
int main()
{
    // code challenge using while loop --->
    // int sum=0, num;
    // cout<<"Enter the +ve number [NOTE:-ve number to quit]: "<<endl;
    // cin>>num;
    // while(num>=0)
    // {
    //     sum=sum+num;
    //     cout<<"Enter the +ve number [NOTE:-ve number to quit]: "<<endl;
    //     cin>>num;
    // }
    // cout<<"TotalSum = "<<sum;
    
    // code challenge using do-while loop 
    int num;
    int sum = 0;
    do
    {
        cout<<"Enter the +ve integer[Note: -ve number to quit]:\n";
        cin>>num;
        if(num>0)
        sum += num; //OR sum=sum+num;
        
    } while (num>=0);
    cout<<"Total : "<<sum;
    return 0;
}