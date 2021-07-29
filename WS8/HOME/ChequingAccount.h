//Name: Dylan Wang
//Course: OOP244SAA
//StudentNum:  114099187
//Date: 07/26/2019
//File name: ChequingAccount.h
#ifndef SICT_CHEQUINGACCOUNT_H__
#define SICT_CHEQUINGACCOUNT_H__

#include "Account.h"

namespace sict
{
	class ChequingAccount : public Account
	{
		double m_MonthEnd;
		double m_Transaction;

		public:
			ChequingAccount(double balance, double transFee, double monthlyFee);

			bool credit(double amount);

			bool debit(double amount);

			void monthEnd();

			void display(std::ostream& out) const;
	};
}
#endif
