//Name: Dylan Wang
//Course: OOP244SAA
//StudentNum:  114099187
//Date: 07/26/2019
//File name: SavingAccount.h
#ifndef SICT_SAVINGSACCOUNT_H__
#define SICT_SAVINGSACCOUNT_H__
#include <iostream>
#include "Account.h"

namespace sict
{
	class SavingsAccount : public Account
	{
	public:
		SavingsAccount(double balance, double interestRate);
		void monthEnd();
		void display(std::ostream& out) const;
		double m_Interest;
	};
}
#endif
