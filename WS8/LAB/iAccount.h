//Name: Dylan Wang
//Course: OOP244SAA
//StudentNum:  114099187
//Date: 07/26/2019
//File name: iAccount.h
#ifndef SICT_IACCOUNT_H__
#define SICT_IACCOUNT_H__
#include <iostream>
using namespace std;

namespace sict
{
	class iAccount
	{
	public:
		virtual bool credit(double amount)=0;
		virtual bool debit(double amount)=0;
		virtual void monthEnd()=0;
		virtual void display(ostream& out) const=0;
		virtual ~iAccount() = default;
	};

	iAccount* CreateAccount(const char* type, double balance);
}
#endif
