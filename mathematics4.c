#include<stdio.h>
void main()
{
    int n,c=0,i,m,a,s=0,k=0;
    printf("Enter a odd-digit no.:\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(i=1;i<((c+1)/2);i++)
    {
        a=m%10;
        m=m/10;
        s=s+a;
    }
    printf("RHS half=%d\n",s);
    m=m/10;
    for(i=((c+1)/2);i<c;i++)
    {
        a=m%10;
        m=m/10;
        k=k+a;
    }
    printf("LHS half=%d\n",k);
    if(k==s)
    printf("Balanced no.");
    else
    printf("not");
}