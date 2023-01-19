#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,k,i,n,x;
    printf("Enter the value of a,b and k");
    scanf("%d%d%d",&a,&b,&k);
    n=pow(a,b);
    for(i=0;i<k;i++)
    {
        x=n%10;
        n=n/10;
    }
    printf("kth digit is:%d",x);
}