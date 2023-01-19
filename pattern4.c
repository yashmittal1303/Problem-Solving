#include<stdio.h>
void main()
{
    int i=0,j=0,b;
    char c;
    for(i=1;i<=4;i++)
    {
        b=i;
        for(j=1;j<=i;j++)
        {
            c=64+b;
            printf("%c",c);
            b++;
        }                           
        printf("\n");
    }
}