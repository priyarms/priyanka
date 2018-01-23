#include<stdio.h>
void main()
{
int n,k,d,sum=0,temp,i;
scanf("%d%d%d",&n,&k,&d);
for(i=0;i<n;i++)
{
t=sum+k;
sum=t;
k=k+d;
}
printf("%d",t);

}
