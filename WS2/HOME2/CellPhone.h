// TODO: header safeguards
#ifndef HEADER_CELLPHONE_H
#define HEADER_CELLPHONE_H
/*
#Dylan Wang
#OOP244SBB
#StudentNum= 114099187
#Date: 01/26/2019
#CellPhone.h
*/
// TODO: sict namespace
namespace sict {
	// TODO: define the structure CellPhone in the sict namespace
	struct CellPhone
	{
		char m_model[32];
		double m_price;
	};

	// TODO: declare the function display(...),
	void display(CellPhone& p);

//         also in the sict namespace
	void display(const CellPhone pArray[], int size);

}
#endif
