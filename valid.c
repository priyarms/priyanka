#include<stdio.h>
void main()
{
char n;
printf("enter a number");
scanf("%c",&n);
if(isdigit(n))
{
printf("yes");
}
else
{
printf("no");
}
}
