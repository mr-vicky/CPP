#include "BankAccount.h"

int main()
{
	BankAccount myAccount("Vicky", 10000);
	BankAccount NiteshAccount("Nitesh");

	int a = 0;
	int b;
	b = 0;

	NiteshAccount.deposite(500000);
	NiteshAccount.deposite(50);
	myAccount.deposite(100);
	myAccount.withdraw(100);
	cout << "Nitesh's Account cotains " << NiteshAccount.getBalence() << endl;
	cout << "Vicky's Account contains " << myAccount.getBalence() << endl;
	cout << "myAccount owner name: " << myAccount.getOwner() << endl;


	return 0;
}