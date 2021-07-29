//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/15/2019
//File name: PhoneApp.cpp 
//Desc: the main function that calls the PhoneDir function to begin the program 
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
using namespace std;
using namespace sdds;
#define MAX_REC_NO 100
#include "PhoneDir.h"
#include "Contact.h"
#include "File.h"
#include "Tools.h"

int main() {
   phoneDir("SDDS Phone Directory", "phones.txt");
   return 0;
};

