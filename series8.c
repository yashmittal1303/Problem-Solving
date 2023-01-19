#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        sum=sum + i*(i+1)*(i+2);
    }
    printf("SUM=%d",sum);
}