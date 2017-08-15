#include<stdio.h>
int main()
{
    unsigned long int num, e1,e2,e3;
    int count;

    for(count=0; count<10; count++)
    {

        scanf("%ld",&n);

        e1=num/2;
        e2=num/3;
        e3=num/4;

        if(e1+e2+e3<n)
        {
            printf("%ld\n",num);
        }

        else

            printf("%ld\n",e1+e2+e3);

    }

    return 0;
}
