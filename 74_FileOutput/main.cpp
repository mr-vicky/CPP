#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void printFormatted(ofstream& outfile, int n);

int main()
{
	ofstream  outfile;
	int n;
	cout << "Enter the number of lines: ";
	cin >> n;

	cout << "Writing to file" << endl;

	outfile.open("output.txt");

	outfile << fixed << showpoint;
	cout << fixed << showpoint;

	printFormatted(outfile, n);

	outfile.close();

	cout << "Done!" << endl;
	return 0;
}

void printFormatted(ofstream& outfile, int n)
{
	for (int i = 1; i <= n; i++)
	{
		outfile << setw(12) << setprecision(2) << (i * 34.775)
			<< setw(12) << setprecision(3) << (i * 56.876) << endl;

		cout << setw(12) << setprecision(2) << (i * 34.775)
			<< setw(12) << setprecision(3) << (i * 56.876) << endl;

	}
}