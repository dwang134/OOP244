//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: File.cpp
//Desc: manipulates file and controls data file management 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <stdio.h>
using namespace std;
#include "File.h"
#define MAX_REC_NO 100

namespace sdds{

bool readContact(Contact* C, FILE* fptr) {
   return fscanf(fptr,"%[^,],%lld", C->name, &C->phoneNumber) == 2;
}

void writeContact(FILE* fptr, const Contact* C) {
   fprintf(fptr, "%s,%lld", C->name, C->phoneNumber);
}

int readContacts(Contact* contacts, const char* filename) {
   FILE* fptr = fopen(filename, "r");
   Contact C;
   int num;
   for (num = 0; fptr && num < MAX_REC_NO && readContact(&C, fptr); num++) {
      contacts[num] = C;
   }
   return num;
}

void writeContacts(Contact* contacts, int cntno, const char* filename) {
   FILE* fptr = fopen(filename, "w");
   int num;
   for (num = 0; num < cntno; num++) {
      writeContact(fptr, &contacts[num]);
   }
   fclose(fptr);
}

}// end of namespace sdds

