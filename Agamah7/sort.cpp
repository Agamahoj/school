void sort(personType human[], int n)
{
   personType temp;
   int big;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      big=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (human[j].age < human[big].age)
            big=j;
      temp = human[i];         // put smallest in proper position
      human[i] = human[small];
      human[big] = temp;
   }
}