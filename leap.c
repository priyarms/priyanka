#include<stdio.h>
void main()
{
int y,l;
printf("enter the year");
scanf("%d",&y);
l=y%4;
if(l==0)
{
printf("leap year");
else
printf("not leap year");
}
}
