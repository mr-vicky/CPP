#include<iostream>
#include<stdexcept>
using namespace std;

void feedKitty(int numTreats);

class AngryCatException : public runtime_error
{
    public:
        AngryCatException() : runtime_error("Made kitty angry!")
        {
        }

        AngryCatException(const string& err) : runtime_error(err)
        {
        }
};
 
int main()
{
    int numTreats = 0;
    cout<<"How many treats do you want to feed kitty? : ";
    cin>>numTreats;

    try
    {
        feedKitty(numTreats);
    }
    catch(const AngryCatException& err)
    {
        cout<<err.what()<<endl;
    }

    return 0;
}

void feedKitty(int numTreats)
{
    if(numTreats < 3)
    {
        throw AngryCatException();
    }
    else(numTreats < 6)
    {
        throw AngryCatException();
    }

    cout<<"Kitty is happy with "<<numTreats
        <<" treats"<<endl;
}