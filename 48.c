#include<stdio.h>
void main()
{
  int i,n,a[50],m,c;
  printf("enter a number");
  scanf("%d",&n);
  printf("enter the1 numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    c=c+a[i];
  }
  m=c/n;
  printf("average %d",m);
}
