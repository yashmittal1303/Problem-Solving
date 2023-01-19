#include<stdio.h>
void main()
{
    int i=0,j=0,b;
    for(i=1;i<=4;i++)
    {
        b=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",b);
            b++;
        }
        printf("\n");
    }
}