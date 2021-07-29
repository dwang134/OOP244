//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: Tools.cpp 
//Desc: Containing all the helper functions who have no relation with a phone book and are used as utilities only.
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
using namespace std;
#define MAX_REC_NO 100
#include "Tools.h"

namespace sdds{

long long getPhoneNumber() {
   return getLongLong(1000000000LL, 9999999999LL, "Phone Number");
}

bool yes() {
   char ch;
   ch = cin.get();
   cin.ignore(1000, '\n');
   return ch == 'y' || ch == 'Y';
}

void toLowerCase(char* lowerCase, const char* str) {
   int i;
   for (i = 0;str[i] && i < 30; i++) {
      lowerCase[i] = str[i] | 0x20;
   }
   lowerCase[i] = 0;
}

void getStr(char* str, int len) {
   cin.getline(str, len, '\n');
}


void getName(char* name) {
   getStr(name, 30);
}

bool valid(long long min, long long max, long long val) {
   return min <= val && val <= max;
}

};