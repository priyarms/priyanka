#include<stdio.h>
void main()
{
int s,e,i,count=0,n;
printf("enter two numbers");
scanf("%d%d",&s&e);
for(i=s;i<=e;i++)
{
  for(n=2;n<i;n++)
  {
    if(i%n==0)
    {
      count++;
    }
  }
  if(count==0)
    printf("%d",i);
}
}
