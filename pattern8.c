#include<stdio.h>
void main()
{
    int i=0,j=0,k;
    for(i=1;i<=4;i++)
    {
        for(k=i;k<=3;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}