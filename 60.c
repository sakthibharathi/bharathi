#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main( void )
{
   int k = 0;
   int a[11];

   int minimum[0];
   int max = a[0];

   srandom( (unsigned) time(NULL) );

   for (k=0;k<11;k++)
   {
       a[i]=random( ) % 100 ;

       printf("%d\n", a[k]);

       if (a[i] > max)
       {
           max = a[k];
       }
       else if (a[k] < minimum
       {
           minimum[k];
       }
   }

   printf("Min: %d\n", minimum
   printf("Max: %d\n", max);
   return ( 0 ) ;
  }
