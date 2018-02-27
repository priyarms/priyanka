#include<stdio.h>
void main()
{
  int c[40],n,i,m;
  printf("enter a number");
  scanf("%d",&n);
  printf("numbers");
  for(i=0;i<n;i++)
  scanf("%d",&c[i]);
  m=c[0];
  for(i=1;i<n;i++)
  {
  if(c[i]>m)
  {
    m=c[i];
  }
  
}
   printf("%d",m);
}
  
