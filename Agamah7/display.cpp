void display(int array[] , ostream & f)
{
  if (array[0] >0)
   {
       f << setw(20) << left << "0-9";
      f << setw(5) << right << array[0] << endl;
   }
  if (array[1] >0)
   {
       f << setw(20) << left << "10-19";
      f << setw(5) << right << array[1] << endl;
   }

   if (array[2] >0)
   {
       f << setw(20) << left << "20-29";
      f << setw(5) << right << array[2] << endl;
   }
   
   
   if (array[3] >0)
   {
       f << setw(20) << left << "30-39";
      f << setw(5) << right << array[3] << endl;
   }
   
   
   if (array[4] >0)
   {
       f << setw(20) << left << "40-49";
      f << setw(5) << right << array[4] << endl;
   }
   
   
   if (array[5] >0)
   {
       f << setw(20) << left << "50-59";
      f << setw(5) << right << array[5] << endl;
   }
   
   if (array[6] >0)
   {
       f << setw(20) << left << "60-69";
      f << setw(5) << right << array[6] << endl;
   }
   
   if (array[7] >0)
   {
       f << setw(20) << left << "70-79";
      f << setw(5) << right << array[7] << endl;
   }
   
   
   if (array[8] >0)
   {
       f << setw(20) << left << "80-89";
      f << setw(5) << right << array[8] << endl;
   }
   
   
   if (array[9] >0)
   {
       f << setw(20) << left << "90-99";
      f << setw(5) << right << array[9] << endl;
   }
   
   
   if (array[10] >0)
   {
      f << setw(20) << left << "100+";
      f << setw(5) << right << array[10] << endl;
   }
   
   

}