//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: Tools.h
//Desc: prototype for tools.cpp
#ifndef SDDS_TOOLS_H
#define SDDS_TOOLS_H
#include "PhoneDir.h"
namespace sdds{

    long long getPhoneNumber();
    
    bool yes();

    void toLowerCase(char* lowerCase, const char* str);

    void getStr(char* str, int len);

    void getName(char* name);

    bool valid(long long min, long long max, long long val);
};
#endif