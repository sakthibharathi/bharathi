#include <stdio.h>

int main()
{
    int j, n;
 
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);
    for(j=1; j<=n; j++)
    {
      
        if(j%2 == 0)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
