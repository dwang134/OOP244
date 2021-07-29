#include "ChequingAccount.h"
using namespace std;

namespace sict
{

	ChequingAccount::ChequingAccount(double balance, double transFee, double monthlyFee) : Account(balance)
	{
		if (transFee > 0)
		{
			m_Transaction = transFee;
		}
		else
		{
			m_Transaction = 0.0;
		};
		if(monthlyFee > 0)
		{
			m_MonthEnd = monthlyFee;
		}
		else
		{
			m_MonthEnd = 0.0;
		};
	}

	bool ChequingAccount::credit(double amount)
	{
		if (Account::credit(amount))
		{
			Account::debit(m_Transaction);
			return true;
		}else{
			return false;
		}
	};

	bool ChequingAccount::debit(double amount)
	{
		if (Account::debit(amount)){
			Account::debit(m_Transaction);
			return true;
		}
		else{
			return false;
		}
	};

	void ChequingAccount::monthEnd()
	{
		Account::debit(m_MonthEnd + m_Transaction);
	}

	void ChequingAccount::display(std::ostream& out) const
	{
		out << "Account type: Chequing" << std::endl;
		out.unsetf(std::ios::floatfield);
		out.precision(2);
		out.setf(std::ios::fixed, std::ios::floatfield);
		out << "Balance: $" << balance() << std::endl;
		out << "Per Transaction Fee: " << m_Transaction << std::endl;
		out << "Monthly Fee: " << m_MonthEnd << std::endl;

	}
}
