 #include<stdio.h>
  int main()
  {
  int n,n1,n2,k,r;
  printf("enter the n1");
  scanf("%d",&n1);
  printf("enter the n2");
  scanf("%d",&n2);
  for(n=n1;n<=n2;++n)
  {
  r=0;
  for(k=2;k<=n/2;k++)
  if((n%k)==0)
  {
  r++;
  break;
  }
  }
  if(r==0)
  printf("%d",n);
  return 0;
  }
