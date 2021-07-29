#include "SavingsAccount.h"
namespace sict
{
	const double interest = 0.05;
	iAccount* CreateAccount(const char* type, double balance)
	{
		iAccount *p = nullptr;
		if (type[0] == 'S') p = new SavingsAccount(balance, interest);
		return p;
	}
}
