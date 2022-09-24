#include<iostream>
using namespace std;

void printHellow(); // void parameterless function
void printNumber(int a); // void parameterised function
int giveMe10(); // value returning function with no parameters
int addThese(int num1, int num2);  // value returning parameterised function, it has two parameters
int square(int b);


int main()
{
    int num1 = 40;
    int num2 = 80;

    printHellow();
    printNumber(45); // here the 45 is the argument

    int someData = giveMe10();
    cout<<"some data = "<<someData<<endl;

    int totalValue = addThese(num1, num2);
    cout<<totalValue<<endl;

    printNumber(addThese(num1, 60)); 
    cout<<"square of 3 is "<<square(3);


    return 0;
}

void printHellow()
{
    cout<<"Hellow"<<endl;  
}

void printNumber(int a)
{
    cout<<"The number is "<<a<<endl;
}

int giveMe10()
{
    return 10;
}

int addThese(int num1 ,int num2)
{
    return num1 + num2;
}

int square(int b)
{
    return b*b;
}