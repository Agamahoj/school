// File:    Average.cpp
// Author:  Agamah Ojochete
// Program: assignment 7
// Date:    3/30/2016

// Description: This file contains the function average. 
#include "decl.h"

using namespace std;

// Function: avg
// Description: calculates the average of numbers in a file.
// Input:  human data (array of structs) , countVal 
// Output: average
// Preconditions:  data file should have at least 1 student
// Postconditions: Return a single int or floating point number as average.

double getAverage(const personType human[], int countVal)
{
  // display the average value of values in the array
  
  float sum = 0.0;
  double average = 0.0;
  for (int index=0; index<countVal; index++)

    sum += human[index].age;
   average = (sum/static_cast<float>(countVal));
   return average;
}
