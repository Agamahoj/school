// File:    decl.h
// Author:  Agamah Ojochete
// Program: assignment 7
// Date:    3/30/2016

// Description
// This file contains the declarations for the structs

#include <string>
using namespace std;

struct personType
{
   string name;    // student name
   int age;      // student test score
};

struct summaryType
{
   int maxScore;   // the maximum test score, read in from the data file
   double avg;    // average score for all students
   double median; // median score for all students
};