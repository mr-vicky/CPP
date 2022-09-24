#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    const int NUM_PEOPLE = 5;
    vector<string>names;
    vector<double>weight;
    string nameInput;
    double weightInput;

    for(int i=0;i<NUM_PEOPLE;i++)
    {
        cout<<"please enter a persons full name "<<endl;
        getline(cin,nameInput); // getline() is used to get string with spaces(for full name)

        cout<<"please enter "<<nameInput<<"'s weight."<<endl;
        cin>>weightInput;
        cin.get(); // consumes newline character

        names.push_back(nameInput);
        weight.push_back(weightInput);
    }
     
    cout<<endl<<endl;
    // printing the output by using subscript
    for(int i=0; i<NUM_PEOPLE ; i++)
    {
        cout<<names[i]<<" weighs "<<weight[i]<<" kgs"<<endl; 
        // we use the subscript/index for vectors also
    }
    return 0;
}