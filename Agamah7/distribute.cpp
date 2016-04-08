#include "decl.h"

void distribute(personType human[], int countVal, int array[] )

{
   for (int index = 0; index < 11; index++)
   {
       array[index] = 0;
   }


   for (int index = 0; i < countVal; index++)
   {
      int age = human[index].age;
      age = age / 10;

      if (age > 10)
      {
        int values;
        array[10] = array[10]++;
      }

   else
   {
      array[age] = array[age]++;
   }
 }

}