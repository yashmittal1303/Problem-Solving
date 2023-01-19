#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,fac,x;
    float sum=1;
    printf("Enter the value of n and x\n");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
        }
        sum=sum+((pow(-1,i))*(pow(x,i))/fac);
    } 
    printf("SUM=%f",sum);
}