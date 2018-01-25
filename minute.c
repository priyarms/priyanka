#include<stdio.h>
void main()
{
int h,m,b,;
scanf("%d",&b);
if(b>60)
{
h=b/60;
m=b%60;
printf(" %d hour  %d mins",h,m);
}
else
{
printf("%d",b);
}

}
