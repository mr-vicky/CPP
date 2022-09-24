#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>myVec;
    int input;

    cout<<"Enter any positive integer to add in the vector, or"
        <<" Negative integer to quit!"<<endl;
    cin>>input;

    while(input >= 0) // while input is positve
    {
        myVec.push_back(input);
        cout<<"Enter any positive integer to add in the vector, or"
            <<" Negative integer to quit!"<<endl;
        cin>>input;
    }

    // printing the double values of the input
    cout<<"Doubles of the inserted amount"<<endl;
    for(auto num: myVec)
    {
        cout<<num*2<<endl;
    }

    return 0;
};