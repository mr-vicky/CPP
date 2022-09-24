#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int, 10>myNum;
    
    for(int i=0;i<myNum.size();i++)
    {
        myNum[i]=i*2;
    }// end of for loop

    for(auto a: myNum)
    {
        cout<<a<<endl;
    }

    return 0;
}