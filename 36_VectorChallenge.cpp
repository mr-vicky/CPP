#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<string>names;
    names.push_back("Vishal");
    names.push_back("Vikas");
    names.push_back("Ajay");
    names.push_back("Aniket");
    names.push_back("Suraj");
    cout<<"Vector:\n";
    for(auto a: names)
    {
        cout<<a<<endl;
    }

    cout<<"\nVector after adding and popping the element:\n";
    names.insert(names.begin()+2,"Jon Baugh"); // adding the name at the 3rd position
    names.pop_back();

    for(auto b: names)
    {
        cout<<b<<endl;
    }
    return 0;
}