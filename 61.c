#include<stdio.h>
void main()
{
  char a[40];
  int n,i;
  printf("enter a string");
  scanf("%s",a);
  printf("enter a number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("%c",a[i]);
  }
  }
