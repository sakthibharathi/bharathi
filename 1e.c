#include <stdio.h>
int main()
{
    double N1, N2, N3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &N1, &N2, &N3);

    if( N1>=N2 && N1>=N3 )
        printf("%.2f is the largest number.", N1);

    if( N2>=N1 && N2>=N3 )
        printf("%.2f is the largest number.", N2);

    if( N3>=N1 && N3>=N2 )
        printf("%.2f is the largest number.", N3);

    return 0;
}
