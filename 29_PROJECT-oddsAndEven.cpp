#include<iostream>
using namespace std;

int main()
{
    int i,odd,even;
    for(i=0;i<50;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" is even"<<"\n";
        }
        else 
        {
            cout<<i<<" is odd."<<endl;
        }
        
    }
    return 0;
}