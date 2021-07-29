#include <iostream>
#include "SavingsAccount.h"

namespace sict
{
  SavingsAccount::SavingsAccount(double balance, double interestRate) : Account(balance)
  {
    (interestRate > 0) ? m_Interest = interestRate : m_Interest = 0.0;
  }

  void SavingsAccount::monthEnd()
  {
    double interest = (balance() * m_Interest);
    credit(interest);
  }

  void SavingsAccount::display(std::ostream& out) const
  {
      out << "Account type: Savings" << std::endl;
      out.unsetf(std::ios::floatfield);
      out.precision(2);
      out.setf(std::ios::fixed, std::ios::floatfield);
	    out << "Balance: $" << balance() << std::endl;
	    out << "Interest Rate (%): " << m_Interest * 100 << std::endl;
  }
}
