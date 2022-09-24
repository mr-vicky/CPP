#include "Pizza.h"

Pizza::Pizza(string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;
	toppings.push_back("Cheese"); 
}

void Pizza::addToppings(string topping)
{
	toppings.push_back(topping); // here we have passed the variable
}

string Pizza::getName() const
{
	return name;
}

int Pizza::getDiameter() const
{
	return diameter;
}

int Pizza::getCost() const
{
	return cost;
}

void Pizza::printToppings() const
{
	for (string toppings : toppings)
	{
		cout << toppings << endl;
	}
}