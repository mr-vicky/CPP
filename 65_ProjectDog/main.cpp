#include<iostream>
#include<stdexcept>
#include"Dog.h"
using namespace std;

int main()
{
	try
	{
		Dog dog1("Bulldog");
		Dog dog2("Labrador Retriver");
		Dog dog3("German Shepherd");
		Dog dog4("Poodle");

		cout<< dog1.getBreed()<<endl;
		cout << dog2.getBreed() << endl;
		cout << dog3.getBreed() << endl;
		cout<< dog4.getBreed()<<endl;

	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}

	return 0;
}