#include "decl.h"
#include <fstream>
#include <iostream>
using namespace std;
void read(summaryType& testsummary, personType human[], int& count)
{
  string name;
   int age;
   count=0;
   ifstream infile;
   infile.open("data");
   if (infile.is_open())
   {
      infile >> name;//human[count].age;
       while (!infile.eof() )//&& count<arraysize)  // same as while (!infile.eof()
//      while (infile && count<arraysize)  // works for '\n' after last line or not
//      while (!infile.eof() && count<arraysize)   // same as while (infile.good()
      {
	//cout << "count = " << count << endl;
	 human[count].name = name;  // best to never read directly into an array
	 infile.ignore(80, '\n');
	 count++;
	 infile >> age;
   human[count].age = age;
      }
      infile.close();
      //cout << "count = " << count << endl;
   }
   else
      cout << "error opening 'data'\n";
}

