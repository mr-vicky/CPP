#include<iostream>
#include<string>
using namespace std;

int main()
    {
        char singleChar = 'a'; /* char: 'char' variable can only hold the single character variabe, 
                                inside single qotation marks
                                - 'a': this is a character literal */
        char secondChar = 'xyz'; // here the only the last variable will be printed

        string myName = "Vicky Sarade"; // here the whole srting will be printed
        cout<<"singleChar = "<<singleChar<<endl;
        cout<<"secondChar = "<<secondChar<<endl;
        cout<<"myName = "<<myName<<endl;
        cout<<"Hellow my name is "<<myName<<endl;
        return 0;
    }
