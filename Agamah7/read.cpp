void read(summaryType& testsummary, personType human[], int& count)
{
   int num;
   count=0;
   ifstream infile;
   infile.open("data");
   if (infile.is_open())
   {
      infile >> human[count].age;
       while (!infile.eof() && count<arraysize)  // same as while (!infile.eof()
//      while (infile && count<arraysize)  // works for '\n' after last line or not
//      while (!infile.eof() && count<arraysize)   // same as while (infile.good()
      {
	//cout << "count = " << count << endl;
	 human[count].name = name;  // best to never read directly into an array
	 infile.ignore(80, '\n');
	 count++;
	 infile >> human[count].age;
      }
      infile.close();
      //cout << "count = " << count << endl;
   }
   else
      cout << "error opening 'data'\n";
}
   
