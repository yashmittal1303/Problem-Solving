#include<stdio.h>
void main()
{
    int r,d,a;
    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    d=2*r;
    a=(d*d)/2;
    printf("Area of largest rectangle is:");
    printf("%d",a);
}