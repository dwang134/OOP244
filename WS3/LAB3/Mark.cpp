#include <iostream>
#include <cstring>
#include <string>
#include "Mark.h"

using namespace std;

namespace sdds {

	void Mark::flushKeyboard() const {
            char ch;
            do {
                  ch = cin.get();
            } while (ch != '\n');

      }

	void Mark::set(int displayMode) {
		m_displayMode = displayMode;
	};

	void Mark::set(double mark, int outOf) {
		m_mark = mark;
		m_outOf = outOf;
		if (outOf!= 1){
			outOf=1;
		}
	}

	void Mark::setEmpty() {
		m_displayMode = DSP_UNDEFINED;
		m_mark = -1;
		m_outOf = 100;
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

	std::ostream& Mark::display() const {

		if (isEmpty()){
			cout<< "Empty Mark object!";
		}
		else if (!isEmpty()) 
		{
			if (m_displayMode == DSP_RAW) {
				cout<< rawValue();
			}
			else if (m_displayMode == DSP_PERCENT) {
				cout << "%" << percent();
			}
			else if (m_displayMode == DSP_ASIS) {
				cout << m_mark << "/" << m_outOf;
			}
			else if (m_displayMode == DSP_UNDEFINED) {
				cout << "Display mode not set!";
			}
			else {
				cout << "Invalid Mark Display settings!";
			}
		}
        return cout; 
	};
};