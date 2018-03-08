#include<stdio.h>
int main()
{
int a,b,i,c;
printf("enter two numbers");
scanf("%d%d",&a,&b);
  c=a*b;
  for(i=0;i<c;i++)
  {
    if(c==i*i)
    {
printf("yes");
return 0;
}
}
printf("no");
}

