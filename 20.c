#include <stdio.h>
int main()
{
    int n, j;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(j=1; j<=10; ++j)
    {
        printf("%d * %d = %d \n", n, j, n*j);
    }
    
    return 0;
}
