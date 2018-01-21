#include<stdio.h>
void main()
{
int s,e,i,m=0,r;
printf("enter a number");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
while(i!=0)
{
r=i%10;
m=m+(r*r*r);
i=i/10;
}
printf("%d",m);
}
}
