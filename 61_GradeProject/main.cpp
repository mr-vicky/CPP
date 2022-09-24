#include<iostream>
#include<stdexcept>
using namespace std;

char getGrade(int percent);

int main()
{
	char letter;
	letter = getGrade(100);

	try
	{
		letter = getGrade(98);
		cout << letter << endl;

		letter = getGrade(78);
		cout << letter << endl;

		letter = getGrade(-30);
		cout << letter << endl;

	}
	catch (const out_of_range& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}

char getGrade(int percent)
{
	char grade;
	if (percent < 0 || percent > 100)
	{
		throw out_of_range("Your percent must be within 0 and 100, inclusive\n");
	}
	else if (percent >= 90)
	{
		grade = 'A';
	}
	else if (percent >= 80)
	{
		grade = 'B';
	}
	else if (percent >= 70)
	{
		grade = 'C';
	}
	else if (percent >= 60)
	{
		grade = 'D';
	}
	else if (percent >= 50)
	{
		grade = 'E';
	}
	else
	{
		grade = 'F';
	}

	return grade;
}