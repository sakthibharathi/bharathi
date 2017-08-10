#include <stdio.h>

int main()
{
    int k, num1, num2, min, hcf=1;
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);
    min = (num1<num2) ? num1 : num2;

    for(k=1; k<=min; k++)
    {
      
        if(num1%k==0 && num2%k==0)
        {
            hcf = k;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    return 0;
}
