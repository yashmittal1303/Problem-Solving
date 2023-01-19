#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,fac;
    float sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac=1;
        for(j=1;j<=((2*i)-1);j++)
        fac=fac*j;
        sum=sum-((pow(-1,i)*i)/fac);
    }
    printf("SUM=%f",sum);
}