#include<iostream>
using namespace std;

int main()
    {
        string fullName, location;
        int initialScore;

        cout<<"What is your project score? 0-100"<<endl;
        cin>>initialScore;
        cin.get(); // this function is used to get string inout after the another string input

        cout<<"What is your full name?  "<<endl;
        getline(cin, fullName); /* here we use the getline function to read the input 
                                   because this inout will contains the spaces */
        cout<<"What is your city state/provience, and country?"<<endl;
        getline(cin, location);
        
        

        cout<<"Hello "<<fullName<<endl;
        cout<<"We heard you are from "<<location<<endl;
        cout<<"Your original score is "<<initialScore;
        cout<<" but with five points added, your score is now "<<(initialScore+5)<<endl;

        return 0;
    }
    