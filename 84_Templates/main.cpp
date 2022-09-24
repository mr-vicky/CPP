#include<iostream>
#include<string>
#include"Swapper.h"
using namespace std;

template<typename T>
T getBigger(T a, T b);

template<class T>
T getSmaller(T a, T b);


int main()
{
	Swapper<int>intSwapper(24, 74);
	Swapper<string>stringSwapper("Vishal", "Sohel");

	string name1 = "Vishal";
	string name2 = "Sohel";

	double biggerDob = getBigger(2.53, 3.14);
	int biggerInt = getBigger(3, 7);
	string biggerStr = getBigger(name1, name2);

	double smallerDob = getSmaller(2.53, 3.24);
	int smallerInt = getSmaller(3, 7);
	string smallerString = getSmaller(name1, name2);

	cout << "Bigger Items" << endl;
	cout << "\t" << biggerDob << endl;
	cout << "\t" << biggerInt << endl;
	cout << "\t" << biggerStr << endl;
	cout << endl << endl;

	cout << "Smaller Items: " << endl;
	cout << "\t" << smallerDob << endl;
	cout << "\t" << smallerInt << endl;
	cout << "\t" << smallerString << endl;
	cout << endl << endl;

	cout << "Testing the swapper!" << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl<<endl;
		
	intSwapper.swap();
	stringSwapper.swap();

	cout << "After the swap..." << endl;
	cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
	cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
	cout << endl << endl;

	return 0;
}

template<typename T>
T getBigger(T a, T b)
{
	if (a > b)
	{
		return a;
	}

	return b;
}

template<class T>
T getSmaller(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}