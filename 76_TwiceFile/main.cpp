#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	int tempNum[6];
	cout << "Opening the file..." << endl;

	inFile.open("Numbers.txt");
	outFile.open("output.txt");

	if (!inFile)
	{
		cout << "ERROR in opening the files..." << endl;
		return 1;
	}

	for (int i = 0; i < 6; i++)
	{
		inFile >> tempNum[i];
		outFile << (tempNum[i] * 2) << endl;
	}

	inFile.close();
	outFile.close();
	cout << "Done!" << endl;
	return 0;
}