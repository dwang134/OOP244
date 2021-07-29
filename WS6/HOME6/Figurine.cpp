//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 11/07/2019
//File name: Figurine.cpp

#include "Figurine.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std; 

namespace sdds{

    Figurine::Figurine(){
        m_name[0]= '\0';
        m_pose= nullptr;
        m_price= 0.0; 
        m_copy = false; 
    }

    Figurine::Figurine(const char* name, const char* pose, double price){

        m_name[0]= '\0';
        m_pose= nullptr;
        m_price= 0.0;
        m_copy = false; 

        if (name[0]!= '\0' && pose!= nullptr && pose[0]!= '\0'){
            setName(name);
            //m_pose = nullptr;
            setPose(pose);
            setPrice(price);
        }
        /*
        else{
            m_name[0]= '\0';
            m_pose= nullptr;
            m_price= 0.0;
        }*/
    };

    //COPY CONSTRUCTOR
    Figurine::Figurine(const Figurine & other){
        strncpy(m_name, other.m_name, MAX_NAME_LEN);
        m_price = other.m_price;
        m_copy= true;
        if (other.m_pose!= nullptr && other.m_pose[0]!= '\0'){
            int pose_length= strlen(other.m_pose);
            m_pose= new char[pose_length+1];
            strncpy(m_pose, other.m_pose, pose_length);
            m_pose[pose_length] = '\0';
            //m_copy= true;
        }
        else{
            m_pose = nullptr;
            //*this = Figurine();
        }
    }

    Figurine& Figurine::operator=(const Figurine& src) {
      //check for self-assignment
      if (this != &src) {
         setName(src.m_name);
         setPrice(src.m_price);
         if (src.m_pose != nullptr)
            setPose(src.m_pose);
        else
            m_pose = nullptr;
         m_copy = true;
      }
      //return current object 
      return *this;
   }


    bool operator==(const Figurine& first, const Figurine& second){

        if (first.getName() == second.getName() && first.getPose() == second.getPose() && first.getPrice() == second.getPrice()){
            return true; 
        }
        else if(first != second){
            return true; 
        }
        else{
            return false;  
        }

    }

    string Figurine::getName() const{
        return m_name;
    }

    char* Figurine::getPose() const{
        return m_pose;
    }

    double Figurine::getPrice() const{
        return m_price;
    }

    // bool Figurine::getCopy() const{
    //     return m_copy;
    // }

    void Figurine::setName(const char* name){
        int name_length= strlen(name);
        if (name_length > MAX_NAME_LEN){
            strncpy(m_name, name, MAX_NAME_LEN);
            m_name[MAX_NAME_LEN]= '\0';
        }
        else{
            strcpy(m_name, name);
        }

    }

    void Figurine::setPose(const char* pose){
        delete [] m_pose;
        int poseLength = strlen(pose);
        m_pose= new char[poseLength+ 1];
        strncpy(m_pose, pose, poseLength);
        m_pose[poseLength]= '\0';
    }

    void Figurine::setPrice(double price){
        if (price < 1){
            m_price = DEFAULT_PRICE;
        }
        else{
            m_price = price; 
        }
    }

    ostream & Figurine::display() const{
        //if (m_name!= nullptr && m_name[0]!= '\0' && m_pose!= nullptr && m_pose[0]!= '\0' && m_price != 0.0){
        if (m_name[0] != '\0' && m_pose!= nullptr){
            
            cout << "Figurine Details" <<endl;
            cout << "Name: " << m_name << endl;
            cout << "Pose: " << m_pose << endl;
            cout << "Price: " << setprecision(2) << fixed << m_price << endl;
            if (m_copy == true){
                cout << "This is a replica" << endl;
            }
        }
        else{
            cout << "This Figurine has not yet been sculpted" << endl;
            if (m_copy == true){
                cout << "This is a replica of emptiness" << endl;
            }
        }
        return cout; 
    }

    Figurine::operator bool() const{
        if(m_name[0]!= '\0'){
            return false;
        }
        else{
            return true;
        }
    }

    Figurine::~Figurine(){
        delete [] m_pose;
        m_pose= nullptr; 
    }




}