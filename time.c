#include<stdio.h>
void main()
{
int a,b,c,d,s,m;
printf("enter two times in hr:min");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("%d:%d\n %d:%d",a,b,c,d);
s=a-c;
m=b-d;
printf("time %d:%d",s,m);
}
