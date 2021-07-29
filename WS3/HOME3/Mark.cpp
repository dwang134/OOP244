//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/26/2019
//File name: Mark.cpp

#include <iostream>
#include <iomanip>
#include <cstring>
#include "Mark.h"

using namespace std;

namespace sdds{

	void Mark::flushKeyboard() const {
            char character;
            do {
                character = cin.get();
            } while (character != '\n');
      }

	void Mark::set(int displayMode) {
		m_displayMode = displayMode;
	};

	void Mark::set(double mark, int outOf) {
		m_mark = mark;
		m_outOf = outOf;
	}

	void Mark::setEmpty() {
		m_displayMode = DSP_UNDEFINED;
		m_mark = -1;
		m_outOf = 100;
        m_name[0]= '\0';
	};

	bool Mark::isEmpty()const {
		return (m_mark == -1) ? true : false;
	}

	int Mark::percent()const {
		int percentage;
		percentage = ((m_mark / m_outOf) * 100) + 0.5;
		return percentage;
	}

	double Mark::rawValue()const {
		double  division; 
		division = (m_mark / m_outOf);
		return division;
	};

	bool Mark::read(const char* prompt) { 
        bool valid;
        cout << prompt; 
        cin >> m_mark;
        cin.ignore();
        cin >> m_outOf;

        if (cin.fail()){
            cin.clear();
            setEmpty();
            valid = false; 
        }

        else{
            valid = true;
        }

		flushKeyboard();
        return valid;
	};

	std::ostream& Mark::display(int width) const {
        if (isEmpty()){
            cout<< "Empty Mark object!";
        }

		if (!isEmpty()) 
		{
             if (m_name[0]!= '\0'){
                cout<< std::left << std::setw(width) << std::setfill('.') << m_name ;
             }
            
    		if (m_displayMode == DSP_RAW) {
				cout<< setprecision(2) << fixed << rawValue();
			}
			else if (m_displayMode == DSP_PERCENT) {
				cout << "%" << percent();
			}
            else if (m_displayMode == DSP_ASIS) {
                    cout << setprecision(1) << fixed << m_mark << "/" << m_outOf;
            }
			else if (m_displayMode == DSP_UNDEFINED) {
				cout << "Display mode not set!";
			}
            else if (m_displayMode == DSP_LETTER){
                prnLetter();
            }
            else if (m_displayMode == DSP_GPA){
                cout<< setprecision(1) << fixed << GPA();
            }
			else {
				cout << "Invalid Mark Display settings!";
			}

		    }

        return cout; 
	};


    void Mark::prnLetter()const{

        if (m_mark!= -1 ){ 

            if (percent()>= 0 && percent()<= 49){
                cout<< "F";
            }
            else if (percent()>=50 && percent()<= 54){
                cout<< "D";
            }
            else if (percent()>=55 && percent()<= 59){
                cout<< "D+";
            }
            else if (percent()>=60 && percent()<= 64){
                cout<< "C";
            }
            else if (percent()>= 65 && percent() <= 69){
                cout<< "C+";
            }
            else if (percent()>=70 && percent()<= 74){
                cout<< "B";
            }
            else if (percent()>=75 && percent()<= 79){
                cout<< "B+";
            }
            else if (percent()>= 80 && percent() <= 89){
                cout<< "A";
            }
            else if (percent()>= 90 && percent() <= 100){
                cout<< "A+";
            }
            else if (percent()> 100){
                cout<< "?";
            }
        }
        else{

        }
    }

    void Mark::set(const char* name){
        strncpy(m_name, name, 50);
    };

    void Mark::set(const char* name, double rawMark, int outof){
        set(name);
        set(rawMark, outof);
    }

    bool Mark::readName(const char* prompt, int maxLen){
        bool valid;
        valid = true;
        if (maxLen > 50){
            maxLen= 50;
        }

        cout<< prompt;
        cin.getline(m_name, maxLen+ 1);

        if (cin.fail())
        {
            cin.clear();
            flushKeyboard();
            setEmpty(); 
            valid = false;
        }

        return valid;
    };

    void Mark::changeOutOf(int value){
        
        m_mark = m_mark * (value/m_outOf);

        m_outOf= value; 

        if (value < 1){
            setEmpty();
        }

    }

    double Mark::GPA()const{
        double gpa;
        gpa= rawValue() * 4;
        return gpa;
    };

    double Mark::letterBasedGPA()const{
        
        double grade;

        if (percent()>= 0 && percent()<= 49){
            grade = 0.0;
        }
        else if (percent()>=50 && percent()<= 54){
            grade= 1.0;
        }
        else if (percent()>=55 && percent()<= 59){
            grade= 1.5;
        }
        else if (percent()>=60 && percent()<=64){
            grade=  2.0;
        }
        else if (percent()>= 65 && percent()<= 69){
            grade = 2.5;
        }
        else if (percent()>=70 && percent()<= 74){
            grade= 3.0;
        }
        else if (percent()>=75 && percent()<= 79){
            grade= 3.5;
        }
        else if (percent()>= 80 && percent() <= 89){
            grade= 4.0;
        }
        else if (percent()>= 90 && percent() <= 100){
            grade= 4.0;
        }
        return grade;
    };

}