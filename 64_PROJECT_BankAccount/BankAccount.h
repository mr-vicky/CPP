#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	public :
		BankAccount(string owner);
		BankAccount(string owner, int balence);
		void deposite(int amount);
		void withdraw(int amount);
		string getOwner()  const;
		int getBalence() const;

	private:
		string owner;
		int balence;
		int amount;
		/*int withdrawl;*/
};

#endif
