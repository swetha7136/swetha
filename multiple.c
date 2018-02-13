#include<stdio.h>
void main()
{
    int n,i,p;
    printf("enter the value for n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=n*i;
      printf("%d\n",p);  
    }
}
