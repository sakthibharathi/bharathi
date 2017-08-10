#include <stdio.h>
int main()
{
    int i, h, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &h);

    printf("Fibonacci Series: ");

    for (i = 1; i <= h; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
