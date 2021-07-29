#include "Ore.h"
#include <iostream> 
#include <iomanip>
#include <cstring>
using namespace std; 

namespace sdds{

    Ore::Ore(){
        m_weight = 0.0;
        m_purity= 0;
        m_classification[0] = '\0';
    }

    Ore::Ore(double weight, int purity, const char* classify){
        
        if(weight < 1){
            m_weight = DEFAULT_WEIGHT;
        }
        else{
            m_weight = weight; 
        }

        if(purity < 1 || purity > 100){
            m_purity = DEFAULT_PURITY;
        }
        else{ 
            m_purity= purity; 
        }

        strncpy(m_classification, classify, CLASS_LEN);
        m_classification[CLASS_LEN] = '\0';
    }

    bool Ore::refine(){
        bool refined; 
    
        if (m_purity> 100){
            m_purity= 100;
            cout<< "Can no longer be refined" << endl;  
            refined= false; 
        }
        else{              //if m_purity< 100 
            m_weight-= 20; 
            m_purity+= 10;
            refined = true; 
        }

        return refined; 
    }

    ostream& Ore::display(ostream& os) const{

        if(m_weight != 0.0 && m_purity!= 0 && m_classification[0] != '\0'){
            os << "Weight: " << setprecision(2) << fixed << m_weight<<  endl;
            os << "Purity: "<< m_purity << endl;
            os << "Classification: " << m_classification << endl; 
        }
        else{
            os << "This ore is imaginary" << endl;
        }
        return os;
    }

    istream& Ore::input(istream &is){
        double storeWeight; 
        cout << "Enter a value for this ore's weight: ";
        is >> storeWeight;

        int storePurity; 
        
        cout << "Enter a value for this ore's purity: ";
        is >> storePurity;

        char storeClass[CLASS_LEN+1];
        cout<< "Enter a classification for the ore (MAX 30 chars): ";
        is.getline(storeClass, CLASS_LEN);
        is >> storeClass;
        is.ignore();

        *this = Ore(storeWeight,storePurity,storeClass);
        return is; 
    }

    ostream& operator<<(ostream& os, const Ore& ore){
        os << "Ore" << endl;
        ore.display(os);
        return os;

    }

    istream& operator>>(istream& is, Ore& ore){
        ore.input(is); 
        return is;
    }


}