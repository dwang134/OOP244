#include "SavingsAccount.h"
#include "ChequingAccount.h"

namespace sict
{

	const double interest = 0.05;
	const double transaction = 0.50;
	const double month = 2.00;


		iAccount* CreateAccount(const char* type, double balance)
		{
			iAccount *p = nullptr;
			if (type[0] == 'S')
			{
				p = new SavingsAccount(balance, interest);
			}else if (type[0] == 'C') {
				p = new ChequingAccount(balance, transaction, month);
			}
			return p;
		}
}
