#include<iostream>
#include<deque>
using namespace std;

void printDeque(deque<int>deck);

int main()
{
	deque<int> myDeck;

	myDeck.push_back(1);
	myDeck.push_back(5);
	myDeck.push_back(7);
	cout << "First Print: " << endl;
	printDeque(myDeck);

	myDeck.push_front(10);
	myDeck.push_front(20);
	cout << "Next Print: " << endl;
	printDeque(myDeck);


	return 0;
}

void printDeque(deque<int>deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}
	cout << endl;
}