#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand(time(nullptr));
    bool guessedNumber=false; //
    int guessCount = 0; // assigning ZERO to avoid garbage value
    int computerNumber = rand() % 100 + 1; // in range of >=1 and <=100
    int ourGuess;
    
    while(!guessedNumber)
    {
        cout<<"Enter your guess:\n";
        cin>>ourGuess;

        // code for the guess that will be out of range
        if(ourGuess<1 || ourGuess>100)
        {
            cout<<"Wasted guess! you must enter the nuber between 1 to 100\n";
            guessCount++;
            continue;
        }

        // code for the guess in range
        if(ourGuess == computerNumber)
        {
            cout<<"Congratualations you guessed in "<<guessCount<<" guesses.\n";
            cout<<"thanks for playing...\n";
            guessedNumber=true;
        }
        else if(ourGuess > computerNumber)
        {
            cout<<"Your guess is too high!"<<endl;

        }
        else if(ourGuess < computerNumber)  
        {
            cout<<"your guess is too low\n";
        }

        guessCount++;
    }// end of loop block

    return 0;
}