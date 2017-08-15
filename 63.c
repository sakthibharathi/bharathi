#include <stdio.h>
 
#define OUT 0
#define IN  1
unsigned countWords(char *s)
{
    int state = OUT;
    unsigned wc = 0;  
    while (*s)
    {
       
        if (*s == ' ' || *s == 'n' || *s == 't')
            state = OUT
        else if (state == OUT)
        {
            state = IN;
            ++wc;
        }
 
   
        ++s;
    }
 
    return wc;
}
