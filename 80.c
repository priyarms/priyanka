#include<stdio.h>
void main()
{
  int a,s=0,r;
  printf("enter number");
  scanf("%d",&a);
  while(a>0)
  {
    r=a%10;
    s=(s*10)+r;
    a=a/10;
  }
  while(s>0)
  {
    r=s%10;
    if(r%2!=0)
    printf("%d\t",r);
    s=s/10;
  }
}
