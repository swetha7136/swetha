#include <stdio.h>

int main()
{
	int a[20];
	int n,i,max=a[0];
	printf("enter the elements:");
	scanf("%d",&n);
	printf("\n enter elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
