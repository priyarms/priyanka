#include<stdio.h>
void main()
{
int a,s,r,t;
printf("enter number");
scanf("%d",&a);
while(a!=0)
{
  r=a%10;
  s=s*10+r;
  a=a/10;
  
}
while(s!=0)
{
  t=s%10;
printf("%d\t",t);
s=s/10;
}
}
