#include <stdio.h>
int main()
{
    int a, k, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&a);

    for(k=1; k <= a; ++k)
    {
        sum += k; 
    }

    printf("Sum = %d",sum);

    return 0;
}
