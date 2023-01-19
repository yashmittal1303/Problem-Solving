#include<stdio.h>
void main()
{
    int i=0,j=0,b;
    char c;
    for(i=5;i>=1;i--)
    {
        b=i;
        for(j=5;j>=i;j--)
        {
            c=64+b;
            printf("%c",c);
            b++;
        }
        printf("\n");
    }
}