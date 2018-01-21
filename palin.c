#include<stdio.h>
void main()
{
int n,sum=0,n1,rem;
printf("enter a number");
scanf("%d",&n);
n=n1;
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
if(sum==n1)
printf("yes");
else
printf("no");
}
