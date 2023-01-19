#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,t;
    float x,y;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    t=(b*b)-(4*a*c);
    x=(-b+pow(t,0.5))/(2*a);
    y=(-b-pow(t,0.5))/(2*a);
    printf("Quadratic roots are:%0.1f %0.1f",x,y);   
}