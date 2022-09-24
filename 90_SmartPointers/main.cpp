#include<iostream>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;

	//unique_ptr<double> myDubPtr(new double); // syntax acc. to c++11
	// OR
	unique_ptr<double>myDubPtr = make_unique<double>(); // syntax acc. to C++14
	
	*myDubPtr = 3.14;
	cout << "Pointer value: " << *myDubPtr << endl;

	unique_ptr<double> otherPtr = move(myDubPtr);
	cout << "OtherPtr : " << *otherPtr << endl; // changing the ownership 


	auto myArray = make_unique<int[]>(ARRAY_SIZE);

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout<<myArray[i] << endl;
	}

	return 0;
}