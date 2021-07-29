#include "Robot.h"
#include "Parts.h"
#include <iostream>
#include <cstring>

using namespace std;

namespace sdds{

    Robot::Robot(){
        nickname[0]= '\0';
        durability= 0;
    }

    Robot::Robot(const char* name, int armsForce, int durable){
        
        if (name!= nullptr && name[0]!= '\0'){
            strncpy(nickname, name, NICK_MAX_LEN-1);
            nickname[NICK_MAX_LEN -1] = '\0';

            arms = Arms(armsForce);

            if (durable< 1){
                durability= 100;
            }
            else{
                durability = durable; 
            };
        }

        else{
            nickname[0]= '\0';
            durability= 0; 
        }
    }

    ostream& Robot::display() const {
        if ((nickname[0]== '\0') && (durability == 0)){
            cout << "This Robot isn't operational" << endl; 
        }
        else{
            cout<< "***Robot Summary***" << endl; 
            cout<< "Nickname: " << nickname << endl;
            cout<< "Arm Power: " << arms.getForce() << endl;
            cout<< "Durability: " << durability << endl; 
        }
        return cout;
    }

    Robot::operator bool() const{
        return ((nickname[0]== '\0') && (durability == 0)) ? true : false;
    }



}