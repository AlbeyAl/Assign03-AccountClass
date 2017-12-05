#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
	Account		acct01;
	Account		acct02("Harold M. Ferguson", 2000);
	Account		acct03("Elise Janet Simmons", 3500);
	Account		acct04("James Holder", 0);

	cout << endl << "Account information - initial" << endl;
	acct01.displayAccountInfo();		// show account information - initial values
	acct02.displayAccountInfo();
	acct03.displayAccountInfo();
	acct04.displayAccountInfo();

	acct01.setAccountHolder("Mary A. Tarleton");
	acct01.setBalance(542.39);
	acct04.setAccountHolder("James Ellis Holder");
	acct04.setBalance(1990.75);

	cout << endl << "Account information after changes" << endl;
	acct01.displayAccountInfo();		// show account information after changes
	acct02.displayAccountInfo();
	acct03.displayAccountInfo();
	acct04.displayAccountInfo();

	acct01.depositAmount(455);			// make deposits
	acct02.depositAmount(-19.95);		// negative deposit not allowed - set to zero
	acct03.depositAmount(4365.27);
	acct04.depositAmount(95.63);

	cout << endl << "Account information after deposits" << endl;
	acct01.displayAccountInfo();		// show account information after deposits
	acct02.displayAccountInfo();
	acct03.displayAccountInfo();
	acct04.displayAccountInfo();

	acct01.withdrawAmount(37.39);
	acct02.withdrawAmount(-475.25);		// withdrawal may be positive or negative (absolute value)
	acct03.withdrawAmount(0.25);
	acct04.withdrawAmount(50.00);

	cout << endl << "Account information after withdrawals" << endl;
	acct01.displayAccountInfo();		// show account information after withdrawals
	acct02.displayAccountInfo();
	acct03.displayAccountInfo();
	acct04.displayAccountInfo();

	cout << endl;
	system("pause");
	return 0;
}