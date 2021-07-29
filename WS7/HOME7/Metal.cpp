#include "Metal.h"
#include <iostream> 
#include <iomanip>
#include <cstring>

using namespace std; 


namespace sdds{

    Metal::Metal(){
        m_name = nullptr; 
        m_mohs = 0.0; 
    }

    Metal::Metal(double weight, int purity, const char* classify, const char* name, double mohs): Ore(weight, purity, classify) {

        if (name!= nullptr){
            m_name= new char[NAME_LEN+ 1];
            strncpy(m_name, name, NAME_LEN);
            m_name[NAME_LEN]= '\0';
        }
        else{
            m_name= nullptr; 
        }

        if (mohs> 0){
            m_mohs= mohs;
        }
        else{
            m_mohs= DEFAULT_MOHS; 
        }

    }

    void Metal::refine(){
        if(Ore::refine() == true){  
            m_mohs+= 1; 
        }
        else{ 
        }
    }

    ostream& Metal::display(ostream& os) const{ 
        
        if(m_name != nullptr && m_name[0]!= '\0' && m_mohs!= 0.0){
            os<< "Name: " << m_name << endl; 
            Ore::display(os); //calls ore display function 
            // os<< "Weight: " << << endl; 
            // os<< "Purity: " << m_purity << endl; 
            // os<< "Classification: " << endl;
            os<< "Mohs: " << m_mohs << endl; 
        }
        else{
            cout<< "This metal is imaginary" <<endl; 
        }
        return os;
    }

    istream& Metal::input(istream& is){
        bool allocate; //after it gets deleted we have to allocate 
        char storeName[NAME_LEN+1]; 
        cout << "Enter a value for this metal's name: ";
        // is >>  storeName;
        is.getline(storeName, NAME_LEN);

        if (m_name!= nullptr ){
            delete [] m_name; //deletes content in m_name, 
            //but if m_name gets deleted, we don't put anything inside it 
            //and it gets deleted again by the de-constructor that is the reason why 
            //compiler will tell me that "pointer being freed was not allocated"
            allocate = true; //at any given time if we delete m_name to prep for the next content we allocate at any given time
        }                    //cant only just do delete.
        
        if (m_name== nullptr || allocate == true){ //at any given time if it's empty 
            m_name= new char[NAME_LEN+ 1];
            strncpy(m_name, storeName, NAME_LEN);
            m_name[NAME_LEN]= '\0';
            allocate = false; 
        }

        double storeMohs;
        cout << "Enter a value for this metal's mohs: ";
        is >> storeMohs; 
        is.clear();
        is.ignore();

        //validation 
        if (storeMohs> 0){
            m_mohs= storeMohs;
        }
        else{
            m_mohs= DEFAULT_MOHS; 
        }

        //call ore input function 
        Ore::input(is);

        return is;
    }

    ostream& operator<<(ostream& os, const Metal& met){
        os << "Metal" << endl;
        met.display(os);
        return os;
    }

    istream& operator>>(istream& is, Metal& met){
        met.input(is);
        return is;
    }

    Metal::~Metal(){
        delete[] m_name; 
        m_name = nullptr;
    }
}