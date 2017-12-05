#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account
{
public:
	Account();								// default constructor
	Account(string name, double amount);	// constructor with two parameters

	int		getAccountID()		const;		// ACCESSOR member functions
	string	getAccountHolder()	const;		// return name of account holder
	double	getBalance()		const;		// return account balance

	void	setAccountHolder(string name);	// MUTATOR member functions
	void	setBalance(double amt);			// assign amount to balance
	void	depositAmount(double amt);		// add amount to balance
	void	withdrawAmount(double amt);		// subtract absolute value of amount from balance
											// HELPER member functions
	void	displayAccountInfo()	const;	// display account information

private:
	static	int	accountNumber;				// starting value for account#
	int		getNextAccountNumber()	const;	// get next account# (return pre-incremented accountNumber)
											// private DATA members
	int		accountID;						// account# identifier
	string	accountHolder;					// name of account holder
	double	balance;						// account balance
};

#endif
