#include<iostream>
#include<cstdlib> // it contains srand() function 
#include<ctime> // this will provide current time of the system
using namespace std;
int main()
{
    srand(time(nullptr));
    int val= rand() % 100+1; // val is the range of >=1 and <=100

    
    int num;
    cout<<"Enter your guess:\n";
    cin>>num;
    
    for(int i=0;i<=100;i++)
    {   
         if(num<val)
        {
            cout<<"your guess is low!\nEnter your guess:"<<endl;
            cin>>num;
            

        }
        else if(num>val)
        {
            cout<<"Your guess is high\nEnter your guess:"<<endl;
            cin>>num;
        }
        else if(num==val)
        {
            cout<<"congratulations! you guessed the number in "<<i<<" guesses"<<endl;;
            break;
        }
        else if(num<100 && num>1)
        {
            cout<<"Your guess is out out of the range, [Range: 1 to 100]\n";
        }
    }
    return 0;
}