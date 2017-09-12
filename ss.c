#include<stdio.h>
void main()
{ 
int a,sum=0;
printf("enter the value:");
scanf("%d",&a);
for(int i=0;i<=a;i++)
{
sum=sum+i;
}
printf("SUM OF NATURAL NUMBERS=",sum);
}
