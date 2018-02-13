#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
