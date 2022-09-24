#include"Person.h"
#include<stdexcept>
using namespace std;

Person::Person(string name)
{
	setName(name);
}

string Person::getName() const noexcept
{
	return name;
}

void Person::setName(string name)
{
	if (name != "Vicky")
	{
		this->name = name;
	}
	else 
	{
		throw runtime_error("Vicky? this is runtime_error");
	}
}
	
