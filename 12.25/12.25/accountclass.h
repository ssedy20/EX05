#pragma once

class Account
{
public:
	Account();
	double balance;
	double annualInterestRate; 
	double getBalance();
	void Deposit(double money);
	void Withdraw(double money);
};