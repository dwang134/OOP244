//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//File name: Robot.h

#ifndef SDDS_ROBOT_H
#define SDDS_ROBOT_H
#include "Parts.h"
#include <iostream>

using namespace std;

namespace sdds{

    const int NICK_MAX_LEN= 10;

    class Robot {

        private:

            char nickname[NICK_MAX_LEN+ 1];
            
            int durability; 

            Arms arms; 

        public:

            Robot();

            Robot(const char*, int, int);

            std::ostream& display() const; 

            operator bool() const;  

    };

}
#endif