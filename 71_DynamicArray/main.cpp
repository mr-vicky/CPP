#include<iostream>
using namespace std;

int main()
{
	int array_size = 0;
	cout << "Enter the size of Array : " << endl;
	cin >> array_size;

	int* myArray = new int[array_size];

	for (int i = 0; i < array_size; i++)
	{
		myArray[i] = i * 2;
	}
	cout << endl;
	for (int i = 0; i <array_size; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;

	return 0;
}
