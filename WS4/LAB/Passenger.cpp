// TODO: add file header comments here
//Name: Dylan Wang
//StudentNum= 114099187
//CourseSection= OOP244SAA
// TODO: add your headers here
#include <iostream>
#include <cstring>
#include "Passenger.h"

// TODO: continue your namespace here
using namespace std;
namespace sict{
    // TODO: implement the default constructor here
    Passenger::Passenger(){
      m_pName[0]= '\0';
      m_dest[0]= '\0';
    };
    // TODO: implement the constructor with 3 parameters here
    Passenger::Passenger(const char *name, const char *destination){

        if (name!= nullptr && name[0]!= '\0' && destination!= nullptr && destination[0]!= '\0'){
          strncpy(m_pName, name, name_size-1);
          strncpy(m_dest, destination, name_size-1);
        }
        else {
          m_pName[0]= '\0';
          m_dest[0]= '\0';
        };
    };

    // TODO: implement isEmpty query here
    bool Passenger::isEmpty()const{
      if (m_pName[0]== '\0'){
        return true;
      }
      else{
        return false;
      }
    };

    // TODO: implement display query here
    void Passenger::display() const{

          if (m_pName[0]!= '\0'){
            cout << m_pName << " - " << m_dest << endl;
          }
          else{
            cout << "No passenger!" << endl;
          };

    };
};
