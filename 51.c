#include<stdio.h>
 
int main()
{
   int *ptr1, *ptr2;
   int number;
 
   printf("\nEnter two numbers : ");
   scanf("%d %d", ptr1, ptr2);
 
   number = *ptr1 + *ptr2;
 
   printf("Sum = %d", number);
   return (0);
}
