#include<iostream>
using namespace std;
int main()
    {
        int age; 
        char gender;

        // Solution NO. 1 ----->
        // cout<<"Enter you gender: "<<endl;
        // cin>>gender;
        // switch (gender)
        // {
        //     case 'F':
        //     case 'f':
        //            cout<<"Enter the age:"<<endl;
        //            cin>>age;
        //            if(age>=60)
        //             cout<<"You are eligible for this discount!"<<endl;
        //            else
        //             cout<<"You are not eligible for the discout!"<<endl;
        //             break;
        //     default:
        //             cout<<"Sorry! You are not eligible for this!\nIt is only for womens...";
        // }


        // Solution no 2 ----->
        // cout<<"Enter the gender: "<<endl;
        // cin>>gender;
        // if(gender=='F' || gender == 'f')
        // {
        //     cout<<"Enter your age:"<<endl;
        //     cin>>age;
        //     if( age>=60)
        //      {
        //         cout<<"You are eligible for the Discout"<<endl;
        //      }
        //      else
        //      cout<<"You are not eligible!"<<endl;
        // }
        // else
        //     cout<<"You are not eligible! "<<endl;
        //     cout<<"This is only for women"<<endl;
        
        // soution 3------->
        cout<<"Enter the gender"<<endl;
        cin>>gender;
        cout<<"Enter the age:"<<endl;
        cin>>age;

        if((gender == 'F' || gender == 'f') && (age >= 60))
        {
            cout<<"You qualify the discount."<<endl;
        }
        else
            cout<<"You do not qualify the discout."<<endl;


        return 0;
    }