#include<stdio.h>
void main()
{
    int n,k,rev=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
    k=n;
    n=n%10;
    rev=rev*10+n;
    if(rev==k)
    printf("palindrome no.");
}