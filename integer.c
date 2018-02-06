#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c,i;
    clrscr();
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        n/=10;
        c=c+1;
    }
    printf("%d is c",c);
    getch();
}
