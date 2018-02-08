#include<stdio.h>
void main()
{
  char a[100];
  int i,n;
  printf("enter a string");
  scanf("%s",a);
  printf("enter a number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%s\n",a);
  }
}
  
