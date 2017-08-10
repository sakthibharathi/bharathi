#include <stdio.h>

int main()
{
   char str[1000], c;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(str);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&c);

   for(i = 0; str[i] != '\0'; ++i)
   {
       if(ch == str[i])
           ++frequency;
   }

   printf("Frequency of %c = %d", c, frequency);

   return 0;
}
