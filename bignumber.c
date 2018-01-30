#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("a is greater than b and c");
    if(b>c&&b>a)
    printf("b is greater than c and a");
    if(c>a&&c>b)
    printf("c is greater than a and b");
}
