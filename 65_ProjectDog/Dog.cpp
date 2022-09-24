#include"Dog.h"
#include<iostream>
#include<stdexcept>

using namespace std; 

Dog::Dog(string breed)
{
	
	if (breed != "Poodle" && breed != "poodle")
	{
		this->breed = breed;
	}
	else
	{
		throw runtime_error("Poodle? errror: runtime_error!");
	}
}

string Dog::getBreed() const
{
	return breed;
}