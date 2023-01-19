#include<stdio.h>
void main()
{
    int a,n,s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0 || s>9)
    {
        if(n==0)
        {
            n=s;
            s=0;
        }
        a=n%10;
        n=n/10;
        s=s+a;
    }
    printf("%d",s);
}