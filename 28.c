# include <stdlib.h>
int char c;
int i;
void main()
{

printf("Print 1 to 5 again and again");
while(1)
{
for(i=1;i<=5;i++)

     printf("\n%d",i);

    c=getch();
    if(c=='Q')
     exit(0);

    }
    getch();
    }
