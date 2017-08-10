#include <stdio.h>
int main()
{
    int n1, n2, j, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(j=1; j <= n1 && j <= n2; ++j)
    {
       
        if(n1%j==0 && n2%j==0)
            gcd = j;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
