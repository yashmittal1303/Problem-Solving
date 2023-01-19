#include<stdio.h>
void main()
{
    int n,a,m,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a=m%10;
        m=m/10;
        rev=rev*10+a;
    }
    if(n==rev)
    printf("palindrome no.");
    else
    printf("not");
}