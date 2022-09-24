#include "BankAccount.h"

BankAccount::BankAccount(string owner)
{
	this->owner = owner;
	this->balence = 0;  // inntially the balence will be zero
}

BankAccount::BankAccount(string owner, int balence)
{
	this->owner = owner;
	if (balence <= 0)
	{
		cout << "You must enter the balence > 0" << endl;
	}
	else
	{
		this->balence = balence;
	}
}

void BankAccount::deposite(int amount)
{
	if (amount > 0)
	{
		balence = balence + amount; // balence = balence + amount;
	}
	else
	{
		cout << "The amount of deposite is should be greater than 0" << endl;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balence)
	{
		balence -= amount; // balence = balence - amount;
	}
	
	else
	{
		cout << "The amount of withdrawing is should be greater than 0," 
			 <<" and should be more than your balence" << endl;
	}
}

string BankAccount::getOwner()  const
{
	return owner;
}

int BankAccount::getBalence() const
{
	return balence;
}