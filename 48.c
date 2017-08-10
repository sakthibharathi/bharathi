#include <stdio.h>

int main() 
{
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int s, loop;
   float avg;

   s = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      s = s + array[loop];
   }
   
   avg = (float)s/ loop;
   
   printf("Average of array values is %.2f", avg);   
   
   return 0;
}
