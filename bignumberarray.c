#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3],i,max=0;
    clrscr();
    printf("enter the array:");
    for(i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    getch();
}
