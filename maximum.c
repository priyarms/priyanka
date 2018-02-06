#include<stdio.h>
void main()
{
int i,n=10,a[10],m;
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
m=a[0];
for(i=1;i<n;i++)
{
if(a[i]>m)
{
m=a[i];
}
}
printf("%d",m);
}

