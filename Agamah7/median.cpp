// File:    median.cpp
// Author:  Agamah Ojochete
// Program: assignment 7
// Date:    3/30/2016

#include "decl.h"

// Function: median
// Description: calculates the median of numbers in a file.
// Input:  human data (array of structs) , countVal 
// Output: median
// Preconditions:  data file should have at least 1 student
// Postconditions: Return a single int or floating point number as median.


float getMedian(const personType human[], int countVal)
{
  int findMed;
  float med;
  findMed = human[countVal/2].age;
  if (countVal%2==1)
  {
    med = (human[findMed] + human[findMed-1])/2.0;
  }
  else
  {
    med = human[findMed].age;
  }
  
  return med;
}
