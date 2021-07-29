//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: Contact.h
//Desc: prototypes for Contact.cpp
#ifndef SDDS_CONTACT_H
#define SDDS_CONTACT_H
#include "Tools.h"
namespace sdds
{
    struct Contact {
        char name[31];
        long long phoneNumber;
    };

    void getContact(Contact* C);

    void printContact(const Contact* C);

    int compare(const Contact* A, const Contact* B);

    void sort(Contact c[], int n);

    bool nameInContact(const Contact* C, const char* nameSubStr);

    int search(Contact* found, const Contact* C, const char* name, int noOfRecs);

    void printContacts(const Contact* C, int num);
};
#endif