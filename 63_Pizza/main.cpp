#include"Pizza.h"

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