//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/12/2019
//File name: tools.h

#ifndef SDDS_TOOLS_H
#define SDDS_TOOLS_H
#include <iostream>

namespace sdds{
// Performs a fool-proof integer entry
int getInt(int min, int max);

// Draws a line and adds a label if provided
void line(int n, const char* label = nullptr); 

// moves the cursor backwards
void goBack(int n);

// displays the user interface menu
int menu(int noOfSamples);

};
#endif