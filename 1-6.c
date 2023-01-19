#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 sides of the triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    printf("Equilateral Triangle");
    else if(a==b||b==c||c==a)
    printf("Isosceles Triangle");
    else
    printf("Scalene Triangle");
    
}