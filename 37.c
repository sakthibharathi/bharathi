#include <stdio.h>
int main() 
{
    int j = 65;
    int k = 120;
    printf(" value of i=%d k=%d before swapping", j, k);

    j = j ^ k;
    k = j ^ k;
    j = j ^ k;
    printf("value of i=%d k=%d after swapping", j, k);

    return 0;
}
