#include<iostream>
#include<stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);


int main()
{
    int input;

    try
    {
        cout<<"Enter a number to process: "<<endl;
        cin>>input;
        doSomething(input);
        cout<<"Yey! the main was able completely process the num! "<<endl;
    }
    catch(const invalid_argument& err)
    {
        cout<<"main says there is an error!"<<endl;
        cout<<err.what()<<endl;
    }
    catch(const out_of_range& err)
    {
        cout<<"main says the number is too big!"<<endl;
        cout<<err.what()<<endl;
    }
    return 0;
}

void processPositive(int num)
{
    cout<<"Welcome to the positive integer processer!"<<endl;
    if(num > 100)
    {
        cout<<"process pisitive says the number is too big!"<<endl;
        throw out_of_range("Number cannot be greater than 100!");
    }
    else if(num >= 0)
    {
        cout<<"Good job! you passed in a positive num to processPositive"<<endl;
    }
    else 
    {
        throw invalid_argument("Negative number passed in!");
    }
}

void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout<<"Yey! doSomething could process that num!"<<endl;

    }
    catch(const invalid_argument& err)
    {
        cout<<"do something says there is a problem! "<<endl;
        throw; //rethrow
    }
    catch(const out_of_range& err)
    {
        cout<<"doSomething says the number is too big!"<<endl;
        throw; //rethrow
    }

}