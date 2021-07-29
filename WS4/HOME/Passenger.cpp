// TODO: add file header comments here
//Name: Dylan Wang
//StudentNum= 114099187
//CourseSection= OOP244SAA
// TODO: add your headers here
#include <iostream>
#include <cstring>
#include "Passenger.h"

using namespace std;
namespace sict{

    Passenger::Passenger(){
      m_pName[0]= '\0';
      m_dest[0]= '\0';
      m_day= 0;
      m_month= 0;
      m_year= 0;
    };

    Passenger::Passenger(const char *name, const char *destination){

        if (name!= nullptr && name[0]!= '\0' && destination!= nullptr && destination[0]!= '\0' && m_day!= 0 && m_month!= 0 && m_year!= 0){
          strncpy(m_pName, name, name_size -1);
          m_pName[name_size -1] = '\0';
          strncpy(m_dest, destination, name_size -1);
          m_dest[name_size -1]= '\0';
          cout<< m_dest[name_size] << endl;
          cout<< m_pName[name_size] << endl;
          m_year= 2019;
          m_month= 10;
          m_day= 01;
        }
        else {
          *this= Passenger();
        };
    };

    bool Passenger::isEmpty()const{
      if (m_pName[0]== '\0'){
        return true;
      }
      else{
        return false;
      }
    };

    void Passenger::display() const{
        if(m_pName[0] == '\0' || m_dest[0] == '\0' || m_year == 0 || m_month == 0 || m_day  == 0)
        {
            cout << "No passenger!" << endl;
        }
        else
        {
	    if(m_month > 0 && m_month < 10)
            {
 		
            	cout << m_pName << " - " << m_dest << " on " << m_year << "/0" << m_month << "/0" << m_day << endl;
            }
	    else
	    {
        if (m_day ==1 )
        {
          cout << m_pName << " - " << m_dest << " on " << m_year << "/" << m_month << "/0" << m_day << endl;
        }
        else{
          	cout << m_pName << " - " << m_dest << " on " << m_year << "/" << m_month << "/" << m_day << endl;
        }
	    };
    };
  };

    Passenger::Passenger(const char *name, const char *destination, int year, int month, int day){

    bool yearValid= year>= 2019 && year<= 2021;
    bool monthValid= month>= 1 && month<= 12; 
    bool dayValid= day>= 1 && day<= 31;

    if (name == nullptr || destination == nullptr || yearValid== 0 || dayValid== 0 || monthValid== 0) {
        *this = Passenger();
    }
    else {
        strncpy(m_pName, name, name_size -1);
        strncpy(m_dest, destination, name_size -1);
        m_day = day;
        m_month= month;
        m_year = year;
    }
  };
  
  const char* Passenger::name() const{
    if (isEmpty() == true){
      return '\0';
    }
    else{
      return m_pName;
    }
  };

  bool Passenger::canTravelWith(const Passenger& p) const{
      if(strcmp(m_dest, p.m_dest) == 0 && m_year == p.m_year && m_month  == p.m_month && m_day == p.m_day){
      return true;
      }
      return false;
  };
};
