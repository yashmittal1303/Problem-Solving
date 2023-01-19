#include<stdio.h>
void main()
{
    int i=0,j=0;
    char c;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            c=64+i;
            printf("%c",c);
        }
        printf("\n");
    }
}