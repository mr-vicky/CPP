#include<iostream>
#include<string>

using namespace std;

int main()
    {
        string adjective1, girlsName, adjective2, occupation1, placeName, clothing, hobby,
        adjective3, occupation2, boysName, mansName;

        
        cout<<"Enter a adjective:\n";
        getline(cin, adjective1); 
        cout<<"Enter the name of the girl:\n";
        getline(cin, girlsName);
        cout<<"Enter the another adjective:\n";
        getline(cin, adjective2);
        cout<<"Enter the occupation:\n";
        getline(cin, occupation1);
        cout<<"Enter the name of the place:\n";
        getline(cin, placeName);
        cout<<"Enter the name of piece if clothing(plurals):\n";
        getline(cin, clothing);
        cout<<"Enter the hobby:\n";
        getline(cin,hobby);
        cout<<"Enter the third adjective:\n";
        getline(cin, adjective3);
        cout<<"Enter the another occupation:\n";
        getline(cin, occupation2);
        cout<<"Enter the boys name:\n";
        getline(cin, boysName);
        cout<<"Enter the mans name:\n";
        getline(cin, mansName);

        cout<<"There once was a "<<adjective1<<" girl named "<<girlsName<<" who was a "<<adjective2
        <<" "<<occupation1<<" in the kingdom of "<<placeName<<". She loved to wear "<<clothing<<
        " and "<<hobby<<". She wanted to marry the "<<adjective3<<" "<<occupation2<<" named "<<boysName
        <<" but her father, king "<<mansName<<" forbid her from seeing him.\n"<<endl; 
        return 0;

    }
// Algorithem of the program---->
// 1. Declaring all the variables as string datatype
// 2. Taking the input from the user for each variable
// 3. Merging and printing the final output on the console