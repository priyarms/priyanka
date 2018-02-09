#include<stdio.h>
void main()
{
  int i,n,a[50]41,m;
  printf("enter a number");
  scanf("%d",&n);
  printf("enter th numbers");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  m=a[0];
  for(i=1;i<n;i++)
  {
  if(a[i]>m)
  {
    m=a[i];
  }
  }
    printf("large %d\t",m);
      for(i=1;i<n;i++)
      {
if(a[i]<m)
{
  m=a[i];
  
}
}
printf("small %d",m);
}
