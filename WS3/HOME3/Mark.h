//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/26/2019
//File name: Mark.h
#ifndef SDDS_MARK_H
#define SDDS_MARK_H
#include <iostream>

namespace sdds{

    const int DSP_RAW = 1;

	const int DSP_PERCENT = 2;

	const int DSP_ASIS = 3;

	const int DSP_UNDEFINED = -1;

    const int DSP_GPA = 4;

    const int DSP_LETTER = 5; 


    class Mark{

        private:

            int m_displayMode;

            double m_mark;

            int m_outOf;

            void flushKeyboard()const;

            char m_name[50+1];

            void prnLetter()const;        

        public: 

            void set(int displayMode);

            void set(double mark, int outOf);

            //void setEmpty();

            bool isEmpty()const;

            int percent()const;

            double rawValue()const;

            bool read(const char* prompt);

            //std::ostream& display() const;

            ///////////////////////////
            

            void set(const char* name);

            void set(const char* name, double rawMark, int outof = 1 );

            void setEmpty();

            bool readName(const char* prompt, int maxLen= 50);

            void changeOutOf(int value);

            double GPA()const; 

            double letterBasedGPA()const;

            std::ostream& display(int width= 55)const;


    };

}
#endif