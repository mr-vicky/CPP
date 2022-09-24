#include<iostream>
using namespace std;

void noConst(); // non-constant pointer to non-consant data
void cp2ncd();	// constant pointer to non-consant data
void ncp2cd();	// non-constant pointer to consant data
void cp2cd();	// constant pointer to consant data

void noChange(const double* const someData );


int main()
{
	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	ncp2cd();
	cout << endl;

	cp2cd();
	cout << endl;

	double* myDoublePtr = new double(5.67);
	noChange(myDoublePtr);
	delete myDoublePtr;
	myDoublePtr = nullptr;

	return 0;
}

// neither is a constant (both can be changed)
void noConst()
{
	cout << "In noConst" << endl;

	int* intPtr = new int(50);

	cout << "\tOriginal value : " << *intPtr << endl;

	*intPtr = 100;
	cout << "\tChange data : " << *intPtr << endl;

	delete intPtr; // delete current dynamic int

	intPtr = new int(125);
	cout << "\tnew intger entirely: " << *intPtr << endl;

	delete intPtr;
}

// pointer is constant(cannot be changed)
// data is non constant(can be changed)
void cp2ncd()
{
	cout << "In cp2ncd" << endl;

	int* const intPtr = new int(100);
	cout << "\tOrig value : " <<*intPtr<< endl;

	*intPtr = 250;
	cout << "\tnew integer value: " <<*intPtr<< endl;

	delete intPtr;

	// intPtr = new int(222);// ERROR! ptr is constant
}

// pointer is non-constant (can be changed)
// data is constant (cannot be changed)
void ncp2cd()
{
	cout << "In ncp2cd" << endl;
	
	const int* intPtr = new int(400);
	cout << "\tOriginal value : " << *intPtr << endl;
	
	// *intPtr = 5000; // ERROR! data is constant
	cout << "\tchanged value : " << *intPtr << endl;

	delete intPtr;

	intPtr = new int(6000); // ok!
	cout << "\tnew integer value: " << *intPtr << endl;

}

// pointer is constant (cannot be changed)
// data is constant (canno be changed)
void cp2cd()
{
	cout << "In cp2cd" << endl;

	const int* const intPtr = new int(900);
	cout << "\tOrig value : " << *intPtr << endl;

	// no changes allow
	// *intPtr = 1000; // ERROR! data is constant 
	// intPtr = new int(200); //ERROR ptr is constant
	delete intPtr;
}

void noChange(const double* const someData)
{
	cout << "In noChange" << endl;
	cout << "\tOrig value : " << *someData << endl;
}