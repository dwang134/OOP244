//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//File name: parts.h

#ifndef SDDS_PARTS_H
#define SDDS_PARTS_H

namespace sdds{

    const int MIN_FORCE = 50;

    class Arms{

        private: 

            int force; 

        public: 

            Arms();

            Arms(int armforce);

            int getForce() const;

            Arms& operator++(); 

            Arms operator++(int);
            
            Arms& operator+=(int);

    };

}
#endif 