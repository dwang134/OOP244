// TODO: include the necessary headers
#include <iostream>
#include "CellPhone.h"
/*
#Dylan Wang
#OOP244SBB
#StudentNum= 114099187
#Date: 01/26/2019
#CellPhone.cpp
*/

// TODO: the sict namespace
using namespace std;
namespace sict {


    // TODO: definition for display(...)
	void display(CellPhone& p)
	{
		cout << "Phone " << p.m_model << " costs $" << p.m_price <<"!" << endl;

	}

		void display(const CellPhone pArray[], int size)
	{
		double CheapPhone= 0;

		cout << "------------------------------" << endl;
		cout << "Phones available at the mall:" << endl;
		cout << "------------------------------" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << i + 1 << ". " << "Phone "<< pArray[i].m_model << " costs $" << pArray[i].m_price << "!" << endl;
			if(pArray[i].m_price < CheapPhone || i == 0)
			{
				CheapPhone= pArray[i].m_price;

			}
		}
		cout << "------------------------------" << endl;
		cout << "The cheapest phone costs $" << CheapPhone <<"."<< endl;
		cout << "------------------------------" << endl;


	}

}
