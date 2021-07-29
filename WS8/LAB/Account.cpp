#include <iostream>
#include "Account.h"
using namespace std;

namespace sict
{
  bool Account::credit(double amount)
  {
      if (amount > 0)
      {
          m_Balance += amount;
          return true;
      } else {
          return false;
      }
  }

  bool Account::debit(double amount)
  {
      if (amount > 0)
      {
          m_Balance -= amount;
          return true;
      } else {
          return false;
      }
  }

  Account::Account(double balance)
  {
    (balance) ? m_Balance = balance : m_Balance = 0;
  }

  double Account::balance() const
  {
      return m_Balance;
  }
}
