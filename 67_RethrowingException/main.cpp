#include<iostream>
#include<stdexcept>
using namespace std;

void processPisitive(int num);
void doSomething(int num);

int main()
{
	int input;

	try
	{
		cout << "Enter a number to process!" << endl;
		cin >> input;
		doSomething(input);
		cout << "Yey! main was able to completly "
			<< "process the num! " << endl;

	}
	catch (const invalid_argument& err)
	{
		cout << "main says there is an error!" << endl;
		cout << err.what() << endl;
	}

	return 0;
}

void processPositive(int num)
{
	cout << "Welcome to the positive integer processor!" << endl;
	if (num >= 0)
	{
		cout << "Good job! you passed in a positive num to processPositive" << endl;
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
		cout << "Yey! doSomething could process that num!" << endl;
	}
	catch (const invalid_argument& err)
	{
		cout << "doSomething says there is a problem!" <<endl;
		throw; // rethrow
	}

}