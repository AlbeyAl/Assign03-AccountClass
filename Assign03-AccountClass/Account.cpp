#pragma once

#include "stdafx.h"
#include "Account.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int Account::getAccountID() const
{
	return Account::accountID;
}

string Account::getAccountHolder() const
{
	return Account::accountHolder;
}

double Account::getBalance() const
{
	return Account::balance;
}

void Account::setAccountHolder(string name)
{
	Account::accountHolder = name;
}

void Account::setBalance(double amt)
{
	Account::balance = amt;
}

void Account::depositAmount(double amt)
{
	Account::balance += amt;
}

void Account::withdrawAmount(double amt)
{
	Account::balance -= fabs(amt);
}

void Account::displayAccountInfo() const
{
	cout << left << setw(8) << getAccountID() << "   $  " << right << setw(10) << fixed << setprecision(2) << getBalance() << "    " << getAccountHolder() << endl;
}

int Account::getNextAccountNumber() const
{
	return ++Account::accountNumber;
}

int Account::accountNumber = 100000;

Account::Account()
{
	setAccountHolder("No Name");
	setBalance(0.0);

	Account::accountID = getNextAccountNumber();
}


Account::Account(string name, double amount)
{
	setAccountHolder(name);
	setBalance(amount);

	Account::accountID = getNextAccountNumber();
}
