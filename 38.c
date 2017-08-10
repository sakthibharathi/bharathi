#include <stdio.h>
 
void main()
{
    int n1, n2, n3;
 
    printf("Enter the values of n1, n2 and n3\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("n1 = %d\tn2 = %d\tn3 = %d\n", n1, n2, n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("n1 is the greatest among three \n");
        }
        else
        {
            printf("n3 is the greatest among three \n");
        }
    }
    else if (n2 > n3)
        printf("n2 is the greatest among three \n");
    else
        printf("n3 is the greatest among three \n");
}
