#include<stdio.h>
void main(void)
{
  char str1[25],str2[25];
  int i=0,k=0;
  printf("\nEnter First String:");
  gets(str1);
  printf("\nEnter Second String:");
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[k]!='\0')
  {
    str1[i]=str2[k];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s",str1);
  return 0;
}
