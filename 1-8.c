#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the x coordinate");
    scanf("%d",&x);
    printf("Enter the y coordinate");
    scanf("%d",&y);
    if(x>0&&y>0)
    printf("I quadrant");
    else if(x<0&&y>0)
    printf("II quadrant");
    else if(x<0&&y<0)
    printf("III quadrant");
    else if(x>0&&y<0)
    printf("IV quadrant");
    else
    printf("origin");
}