#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d;
    printf("enter the value for a");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        d=b%10;
        c=c*10+d;
        b=b/10;
    }
    if(a==c)
    printf("%d is palindrome",a);
    else
    printf("%d is not palindrome",a);
}
