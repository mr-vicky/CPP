#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    srand(time(nullptr));
    // int val1 =  rand() % 6;
    // int val2 = rand() % 6+1;

    for(int i=0;i<10;i++)
    {
        int dieValue =  rand() % 6 + 1; // it will take value from 1-6

        cout<<dieValue<<endl;
        // cout<<val2<<endl;
    }

    

    return 0;
}
