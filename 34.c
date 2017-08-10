#include <stdio.h>
void main()
{
    char string[80];
    int count, n = 0, sum = 0;
 
    printf("Enter the string containing both digits and alphabet \n");
    scanf("%s", string);
    for (count = 0; string[count] != '\0'; count++)
    {
        if ((string[count] >= '0') && (string[count] <= '9'))
        {
            n += 1;
            sum += (string[count] - '0');
        }
    }
    printf("NO. of Digits in the string = %d\n", n);
    printf("Sum of all digits = %d\n", sum);
    return 0;
}
