#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        printf("%d ",i);
        else
        
        n=n/i;
    }
}    
