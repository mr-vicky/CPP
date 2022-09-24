#include<iostream>
using namespace std;

int main()
{
    int myNum[2][3]{
                    {1, 2, 3},
                    {4, 5, 6}
    };  // 2D array that is 2 x 3

    cout<<myNum[0][2]<<endl;

    cout<<myNum[0][1]<<"\n";
    myNum[0][1]=14; // we can change the value of the element at any position
    cout<<myNum[0][1]<<endl;

    // printing the whole array
    cout<<"Whole array:\n";
    for(int i=1;i>=0;i--)
    {
        for(int j=2;j>=0;j--)
        {
            cout<<myNum[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    return 0;
}