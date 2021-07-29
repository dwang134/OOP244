#include <iostream>
#include "Account.h"
#include "math.h"
using namespace std;

namespace sict
{

  Account::Account(double balance)
  {
    if (balance>= 0)
    {
      m_Balance= balance;
    }else{
      m_Balance= 1;
    }
  }

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
      }else{
          return false;
      }
    }

    double Account::balance() const
    {
        return round(m_Balance);
    }
}
