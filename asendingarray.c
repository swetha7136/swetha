#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3],i,j;
    printf("enter the array:");
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
    if(a[i]>a[j])
    {
        int t;
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
  }
}
for(i=0;i<3;i++)
{
    printf("%d",a[i]);
}
}
