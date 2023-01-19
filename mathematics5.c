#include<stdio.h>
void main()
{
    int i,j,N;
    printf("Enter the value of N range from 2 to 1000\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if (i==1)
        {
            printf("1\n");
        }
        else if(i%2==0)
        {
            printf("2\n");
        }
       else
       {
         for(j=3;j<=i;j+=2)
        {
            if(i%j==0)
            {
                printf("%d\n",j);
                break;
            }
        }
       }
    }
}