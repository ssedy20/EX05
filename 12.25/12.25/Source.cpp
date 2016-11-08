#include <iostream>
#include<vector>
#include "accountclass.h"

using namespace std;
//Sarah Sedy HW5 12.25 172-1//

int main()
{
	string accountChoice;
	int selection;
	double transaction = 0;

	Account::Account()
	{
		balance = 0;
	}

	Account::Account(double money)
	{
		balance = money;
	}

	void Account::Deposit(double money)
	{
		balance += money;
	}
	void Account::Withdraw(double money)
	{
		if (money > balance)
			cout << "Error: Insufficient Funds" << endl;
		else
			balance -= money;
	}
	double Account::getBalance()
	{
		return balance;
	}
	do
	{
		cout << "Please make a selection:" << endl;
		cout << "1.) Deposit" << endl;
		cout << "2.) Withdraw" << endl;
		cout << "3.) Transfer" << endl;
		cout << "4.) Get Balance" << endl;
		cout << "5.) Quit" << endl;
		cin >> selection;

		if (selection == 1)
		{
		
			cout << endl << "Please enter the amount to be deposited:" << endl;
			cin >> transaction;
			cout << endl;

			deposit(transaction);
		}
		else if (selection == 2)
		{
			
			cout << endl << "Please enter the amount to be withdrawn:" << endl;
			cin >> transaction;
			cout << endl;

			withdraw(transaction);
		}
		else if (selection == 3)
		{
			
			cout << endl << "Please enter the amount to be transferred:" << endl;
			cin >> transaction;
			cout << endl;

			transfer(transaction, accountChoice);
		}
		else if (selection == 4)
			printBalances();
		else
			cout << "Closing program, Goodbye George." << endl;
	} while (selection != 5);

	return 0;
}

void deposit(double amount, string account)
{
	Account savings, checking;
	checking.Deposit(amount);
}

void withdraw(double amount, string account)
{
	Account savings, checking;
	checking.Withdraw(amount);
}

void printBalances()
{
	Account checking;

	cout << "Your current balance is: " << checking.getBalance() << endl
}

