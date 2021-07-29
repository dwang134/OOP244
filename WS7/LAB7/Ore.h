//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 11/14/2019
//File name: Ore.h

#ifndef SDDS_ORE_H
#define SDDS_ORE_H
#include <iostream>
using namespace std; 

namespace sdds{

    const double DEFAULT_WEIGHT= 300.50; 

    const int DEFAULT_PURITY= 20;

    const int CLASS_LEN = 30;

    class Ore{

            double m_weight; 

            int m_purity; 

            char m_classification[CLASS_LEN+ 1]; 

            public: 

            Ore();

            Ore(double weight, int purity, const char* classify= "Unknown");

            bool refine();

            ostream& display(ostream& os) const; 

            istream& input(istream& is);

    };

        ostream& operator<<(ostream& os, const Ore& ore);

        istream& operator>>(istream& os, Ore& ore);

}
#endif