//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: File.h
//Desc: Prototype for file.cpp
#ifndef SDDS_FILE_H
#define SDDS_FILE_H
#include "Contact.h"
using namespace std;

namespace sdds
{
    void phoneDir(const char* title, const char* filename);
    
    bool readContact(Contact* C,FILE* fptr);

    void writeContact(FILE* fptr, const Contact* C);

    int readContacts(Contact* contacts, const char* filename);

    void writeContacts(Contact* contacts, int cntno, const char* filename);

}
#endif