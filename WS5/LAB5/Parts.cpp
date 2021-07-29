#include "Parts.h"
#include <iostream>

using namespace std;

namespace sdds{

        Arms::Arms(){
            force = 0;
        }

        Arms::Arms(int armforce){
            if(armforce < 1){
                force = MIN_FORCE;
            }
            else{
                force = armforce;
            }
        }

        int Arms::getForce() const{
            return force; 
        }

        Arms& Arms::operator++(){
            force += 10;
            return *this;
        }

        Arms Arms::operator++(int){
            Arms temp= *this;
            ++*this;
            return temp;
        }

        Arms& Arms::operator+=(int add){
            force+= add; 
            if (force< 1){
                force= 0;
            }
            return *this;
        }

}