#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,t;
    printf("enter the value for a and b:");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d\t%d",a,b);
}
