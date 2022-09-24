#include<iostream>
#include"Dictionary.h"
using namespace std;

void printMenu();
void uiAddWord(Dictionary& dictionary);
void uiGetDefination(const Dictionary& dictionary);


int main()
{
	Dictionary theDictionary;
	int userChoice;
	cin >> userChoice;
	cin.get(); // consume the newline character!

	while (userChoice != 0)
	{
		if (userChoice == 1)
		{
			uiAddWord(theDictionary);
		}
		else if(userChoice == 2)
		{
			uiGetDefination(theDictionary);
		}
		else if(userChoice == 3)
		{
			cout << "Printing all the definations:" << endl;
			theDictionary.printAll();
			cin.get(); // consume the newline character!
		}

	}// end while
	
	cout << "Program Done!" << endl;
	return 0;
}

void printMenu()
{
	cout << endl;
	cout << "Type your selection " << endl;
	cout << "1 - Add a new word and defination " << endl;
	cout << "2- Get the defination for the word" << endl;
	cout << "3- Print all definations" << endl;
	cout << "0- Exit the program" << endl;
	cout << endl;
}

void uiAddWord(Dictionary& dictionary)
{
	string word;
	string defination;

	cout << "Enter the word" << endl;
	getline(cin, word);

	cout << "Enter the defination for " << word << endl;
	getline(cin, defination);

	dictionary.addDefination(word, defination);
}

void uiGetDefination(const Dictionary& dictionary)
{
	string theWord;

	cout << "For which word you want defiantion?" << endl;
	getline(cin, theWord);

	cout << dictionary.getDefination(theWord) << endl;
	cout << endl;

}