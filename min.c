#include<stdio.h>
void main()
{
int a,h,m;
printf("enter the minutes");
scanf("%d",&a);
h=a/60;
m=a%60;
printf("%d:%d",h,m);
}
