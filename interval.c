#include<stdio.h>
void main()
{
int s,e,i;
printf("enter a number");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
while(i!=0)
{
r=i%10;
s=s+(r*r*r);
i=i/10;
}
printf("%d",&i);
}
}
