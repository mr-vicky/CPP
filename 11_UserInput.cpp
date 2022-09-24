#include<iostream>
#include<string>

using namespace std;

int main()
    {
        int age;
        string fulName;
        
        cout<<"Please Enter your name : ";
        getline(cin, fulName);  /* 'cin' indicates the source of the data
                                    'fulName' indicates where the data is to go (sync of the data)     */

        cout<<"Please Enter your Age : ";
        cin>>age;

        cout<<endl<<"Name: "<<fulName<<endl;
        cout<<"Age : "<<age<<endl;
        
        return 0;
    }