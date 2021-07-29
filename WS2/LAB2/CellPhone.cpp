// TODO: include the necessary headers
#include <iostream>
#include "CellPhone.h"
/*
#Dylan Wang
#OOP244SBB
#StudentNum= 114099187
#Date: 01/22/2019
#CellPhone.c
*/

// TODO: the sict namespace
using namespace std;
namespace sict {

    // TODO: definition for display(...) 
	void display(CellPhone& P)
	{
		cout << "Phone " << P.m_model << " costs $" << P.m_price <<"!" << endl; 

	}

}
