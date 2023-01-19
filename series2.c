#include<stdio.h>
void main()
{
    int i,j,n,fac,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        sum=sum+(fac/i);
    }
    printf("sum=%d",sum);
}