#include <stdio.h>
int main()
{
    int i, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(i != 0)
    {
        remainder = i%10;
        reversedNumber = reversedNumber*10 + remainder;
        i /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
