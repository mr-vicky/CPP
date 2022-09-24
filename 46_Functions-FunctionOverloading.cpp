#include<iostream>
#include<string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num);

int main()
{
    int resultName = getResult(20, 30);
    string nameResult = getResult("Vivek", "Sarade");
    int cubeResult = getResult(5);

    cout<<"Result num is "<<resultName<<endl;
    cout<<"Name result is "<<nameResult<<endl;
    cout<<"Cube result is "<<cubeResult<<endl;
    return 0;
}

int getResult(int num1, int num2)
{
    return num1 + num2;
}

string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}
int getResult(int num)
{
    return num*num*num;
}