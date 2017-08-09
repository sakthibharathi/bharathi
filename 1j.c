#include <stdio.h>
int main()
{
    long long N;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%lld", &N);

    while(N != 0)
    {
       
        N /= 10;
        ++c;
    }

    printf("Number of digits: %d", c);
}
