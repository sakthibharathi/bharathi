#include <stdio.h>
int main()
{
    int n1, n2, k, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);

    for(i=1; k <= n1 && k <= n2; ++k)
    {
       
        if(n1%i==0 && n2%i==0)
            gcd = k;
    }

    lcm = (n1*n2)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);

    return 0;
}
