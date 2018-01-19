#include<stdio.h>
void main()
{
int s,e,i;
printf("enter two numbers");
scanf("%d%d",&s&e);
for(i=s;i<=e;i++)
{
if((i%1==0)||(i%i==0))
printf("%d",i);
}
}
