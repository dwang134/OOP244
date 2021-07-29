//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: Contact.cpp
//Desc: this file contains contact related functions to make is accessible for user to contact other people
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
using namespace std;
#define MAX_REC_NO 100
#include "Contact.h"

namespace sdds{

void printContact(const Contact* C) {
   cout << setw(35) << setfill('.') << setiosflags(ios::left) << C->name << C->phoneNumber << endl;
}

int compare(const Contact* A, const Contact* B) {
   return strcmp(A->name, B->name);
}

void sort(Contact c[], int n) {
   Contact temp;
   for (int i = n - 1; i > 0; i--) {
      for (int j = 0; j < i; j++) {
         if (compare(&c[j] , &c[j + 1]) > 0) {
            temp = c[j];
            c[j] = c[j + 1];
            c[j + 1] = temp;
         }
      }
   }
}

bool nameInContact(const Contact* C, const char* nameSubStr) {
   char name[31];
   char subName[31];
   toLowerCase(name, C->name);
   toLowerCase(subName, nameSubStr);
   return strstr(name, subName) != nullptr;
}

void getContact(Contact* C){
   cout << "Name: ";
   getName(C->name);
   cout << "Phone Number: ";
   C->phoneNumber = getPhoneNumber();
}

int search(Contact* found, const Contact* C, const char* name, int noOfRecs) {
   int i;
   int noOfMatches = 0;
   for (i = 0; i < noOfRecs; i++) {
      if (nameInContact(&C[i], name)) {
         found[noOfMatches] = C[i];
         noOfMatches++;
      }
   }
   return noOfMatches;
}

void printContacts(const Contact* C, int num) {
   for (int i = 0; i < num; i++) {
      printContact(&C[i]);
   }
}

};