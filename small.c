#include<stdio.h>
void main()
{
int n,a[20],i,m;
printf("enter a number");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<n;i++)
{
if(m>a[i])
m=a[i];
}
printf("%d",m);
}
