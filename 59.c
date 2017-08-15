#include <stdio.h>
#include <string.h>
void main()
{
    char s[500];
    int c = 0, k;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (k = 0;s[k] != '\0';k++)
    {
        if (s[k] == ' ')
            c++;    
    }
    printf("number of words in given string are: %d\n", c + 1);
    return 0;
}
