#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z'))
    {
        printf("%c is ALPHABET.", c);
    }
    else if(c >= '0' && c <= '9')
    {
        printf("%c is DIGIT.", c);
    }
    else 
    {
        printf("%c is SPECIAL CHARACTER.", c);
    }

    return 0;
}
