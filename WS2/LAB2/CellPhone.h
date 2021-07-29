// TODO: header safeguards
#ifndef HEADER_CELLPHONE_H
#define HEADER_CELLPHONE_H
/*
#Dylan Wang
#OOP244SBB
#StudentNum= 114099187
#Date: 01/22/2019
#CellPhone.h
*/
// TODO: sict namespace
namespace sict {
	// TODO: define the structure CellPhone in the sict namespace
	struct CellPhone
	{
		char m_model[32];
		int m_price;
	};

	// TODO: declare the function display(...),
	void display(CellPhone& P);

}
//         also in the sict namespace
#endif 

