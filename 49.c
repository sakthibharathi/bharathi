
#include <stdio.h>
int sum(int arr[], int n)
{
    int s = 0; 
    int i;

    for (i = 0; i < n; i++)
    s += arr[i];
 
    return s;
}
 
int main()
{
    int arr[] = {12,3,4,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum of given array is %d", s(arr, n));
    return 0;
}
