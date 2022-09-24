#include<iostream>
#include<stdexcept>
#include"Person.h"
using namespace std;

int main()
{
	try
	{
		Person person1("Nitesh");
		Person person2("Sanket");
		Person person3("Prathamesh");
		Person person4("Vicky");

		cout << person1.getName()<< endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;

	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}