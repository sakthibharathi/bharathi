#include<stdio.h>
 
int calculateSum(int);
 
int main() {
   int i, num;
   int i, N, oddSum = 0, evenSum = 0;
   int resultt;
 
   printf("Input a number : ");
   scanf("%d", &num);
 
   result = calculateSum(num);
   printf("\nSum of Number From 1 to %d : %d", num, resultt);
 
   return (0);
}
 
int calculateSum(int num) {
   int res;
   if (num == 1) {
      return (1);
   } else {
      res = num + calculateSum(num - 1);
   }
   return (res);
   
{
printf("Enter the value of N\n");
scanf ("%d", &N);

for (i=1; i <=N; i++)
{
if (i % 2 == 0)
evenSum = evenSum + i;
else
oddSum = oddSum + i;
}

printf ("Sum of all odd numbers = %d\n", oddSum);
printf ("Sum of all even numbers = %d\n", evenSum);
}
result 0;
}
