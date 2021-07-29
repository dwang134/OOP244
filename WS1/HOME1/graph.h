//Name: Dylan Wang
//Course: OOP244NEF
//StudentNum:  114099187
//Date: 09/12/2019
//File name: graph.h

#ifndef SDDS_GRAPH_H
#define SDDS_GRAPH_H
#define MAX_NO_OF_SAMPLES 20
#define GRAPH_WIDTH 65
#include "tools.h" //we're including this because in the graph.cpp we're using some functions from tools.h
namespace sdds{
// Finds the largest sample in the samples array, if it is larger than 70,
// therwise it will return 70.
int findMax(int samples[], int noOfSamples);
// Prints a scaled bar relevant to the maximum value in samples array
void printBar(int val, int max);
// Prints a graph comparing the sample values visually
void printGraph(int samples[], int noOfSamples);
// Fills the samples array with the statistic samples
void getSamples(int samples[], int noOfSamples);
};
#endif
