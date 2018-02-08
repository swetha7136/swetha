#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum,a,r;
    printf("enter the value for n");
    scanf("%d",&n);
    sum=0;
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==a)
    printf("%d is amstrong",a);
    else
    printf("%d is not amstrong",a);
}
