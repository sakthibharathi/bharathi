#include <stdio.h>
int main()
{
    int base, expo;

    long long result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an expo: ");
    scanf("%d", &expo);

    while (expo != 0)
    {
        result *= base;
        --expo;
    }

    printf("Answer = %lld", result);

    return 0;
}
