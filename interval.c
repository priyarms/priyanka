#include<stdio.h>
void main()
{
int s,e,i,m=0,r;
int x,n;
printf("enter a number");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
  x=i;
  n=i;
  m=0;
while(x!=0)
{
r=x%10;
m=m+(r*r*r);
x=x/10;
}
if(m==n)
printf("%d",m);
}
}
