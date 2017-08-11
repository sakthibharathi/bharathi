
#include <stdio.h>
 
void main()
{
    int arr[100], i, num;
 
    printf("Enter the size of an array \n");
    scanf("%d", &num);
    printf("Enter the elements of the array \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Even numbers in the array are - ");
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d \t", arr[i]);
        }
    }
    printf("\n Odd numbers in the array are -");
    for (i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d \t", arr[i]);
        }
    }
