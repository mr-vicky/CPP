This is a incomplete program
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
#include"ItemFrequencies.h"
using namespace std;

int main()
{
	ItemFrequencies itemFrequencies;
	ifstream infile;
	string tempName;

	infile.open("Shopping.txt");

	if (!infile)
	{
		cout << "ERROR opening file. Bailing out..." << endl;
		return 1;
	}
	
	while (!infile.eof())
	{
		infile >> tempName;
		itemFrequencies.addItems(tempName); 
	}

	itemFrequencies.printFrequencies();

	infile.close();
	return 0;
}