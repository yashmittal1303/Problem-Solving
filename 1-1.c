#include<stdio.h>
void main()
{
    int basic,hra,da,allow,pf,total;
    char grade;
    printf("Enter the basic salary of a person\n");
    scanf("%d",&basic);
    printf("Enter the grade\n");
    scanf(" %c",&grade);
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grade=='A')
    allow=1700;
    else if(grade=='B')
    allow=1500;
    else
    allow=1300;
    total=basic+hra+da+allow-pf;
    printf("total salary=%d",total);
}