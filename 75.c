#include<stdio.h>
void main()
{
  char a[30];
  int i,count=0,c;
  printf("enter string");
  scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
count++;
}
c=count/2;
if(c%2==0)
{
a[c]='*';
printf("%s",a);
}
else
a[c]='*';
a[c-1]='*';
printf("%s",a);
}
