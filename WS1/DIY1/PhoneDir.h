//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: PhoneDir.h
//Desc: prototypes for PhoneDir.cpp
#ifndef SDDS_PHONEDIR_H
#define SDDS_PHONEDIR_H
#include "Contact.h"
#include "Tools.h"

namespace sdds{
    
    int menu();

    long long getLongLong(long long min, long long max, const char* valueName);

    void phoneDir(const char* title, const char* filename);

};
#endif