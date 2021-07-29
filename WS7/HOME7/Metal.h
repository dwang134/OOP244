//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 11/15/2019
//File name: Metal.h

#ifndef SDDS_METAL_H
#define SDDS_METAL_H
#include <iostream>
#include "Ore.h"
#include <iostream>
#include <fstream>


namespace sdds{

        const double DEFAULT_MOHS= 2.5;

        const int NAME_LEN = 10;

    class Metal: public Ore{

        private: 
 
            char* m_name; 

            double m_mohs; 

        public: 

            Metal();

            ~Metal();

            Metal(double weight, int purity, const char* classify, const char* name, double mohs);

            void refine();

            ostream& display(ostream& os) const;

            istream& input(istream& is);
            
    };
            ostream& operator<<(ostream& os, const Metal& met); 

            istream& operator>>(istream& is, Metal& met);


};
#endif 