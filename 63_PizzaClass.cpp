#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Pizza
{
	public:
		Pizza(string name, int cost, int diameter);
		void addToppings(string topping);
		string getName() const;
		int getDiameter() const;
		int getCost() const;
		void printToppings() const;
	
	
	private:
		string name;
		int cost;
		int diameter;
		vector<string>toppings;

};

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



void printPizzaData(const Pizza& pizza);

int main()
{
	Pizza johnsPizza("Cheese pizza", 5, 8);
	Pizza mattsPizza("Pepperoni pizza", 7, 8);
	mattsPizza.addToppings("pepperoni");

	Pizza special("The Special pizza", 12, 10);

	special.addToppings("pepperoni");
	special.addToppings("Black Olives");
	special.addToppings("Onion");
	special.addToppings("mushroom");

	printPizzaData(johnsPizza);
	printPizzaData(mattsPizza);
	printPizzaData(special);

	return 0;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name : " << pizza.getName()<<endl;
	cout << "Diameter : " << pizza.getDiameter() << endl;
	cout << "Cost : $" << pizza.getCost() << endl;
	cout << "Toppings:" << endl;

	pizza.printToppings();
	cout << endl;

}