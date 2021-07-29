//Name: Dylan Wang
//Course: OOP244SAA
//StudentNum:  114099187
//Date: 07/26/2019
//File name: Account.h
#ifndef SICT_ACCOUNT_H__
#define SICT_ACCOUNT_H__
#include "iAccount.h"

namespace sict
{
	class Account : public iAccount
	{
		double m_Balance;
	public:
		Account(double balance);
		bool credit(double amount);
		bool debit(double amount);
	protected:
		double balance() const;
	};
	iAccount* CreateAccount(const char* type, double balance);
}
#endif
