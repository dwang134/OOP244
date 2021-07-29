//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 11/07/2019
//File name: Figurine.h 
#ifndef SDDS_FIGURINE_H
#define SDDS_FIGURINE_H
#include <iostream>
using namespace std;

namespace sdds{

    const int MAX_NAME_LEN= 20;
    
    const double DEFAULT_PRICE= 25.25;

    class Figurine{

        private: 

            char m_name[MAX_NAME_LEN+ 1];

            char * m_pose; 

            double m_price; 
        
            bool m_copy; 

        
        public: 

            Figurine();

            Figurine(const char* name, const char* pose, double price);

            Figurine(const Figurine & other);

            Figurine& operator=(const Figurine& other);

            Figurine(const Figurine* other);

            void setName(const char* name);
    
            void setPose(const char* pose);

            void setPrice(double price);

            bool isCopy() const; 

            ostream& display() const;

            operator bool() const; 

            ~Figurine();

            //NEW PUBLIC for the comparison operator 
            string getName() const;

            char* getPose() const;

            double getPrice() const;

            //bool getCopy() const;
    };

            bool operator==(const Figurine& first, const Figurine& second);

}
#endif 