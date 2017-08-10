#include<stdio.h>
 
int main() {
   char str1[30], str2[30];
   int k;
 
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
 
   k = 0;
   while (str1[k] == str2[k] && str1[k] != '\0')
      k++;
   if (str1[k] > str2[k])
      printf("str1 > str2");
   else if (str1[k] < str2[k])
      printf("str1 < str2");
   else
      printf("str1 = str2");
 
   return (0);
}
