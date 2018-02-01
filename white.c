#include<stdio.h>
void main()
{
char s[40];
int i,count=0,flag=0;
printf("enter a character");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';++i)
{
if(s[i]==' ')
{
++count;
flag=0;
}
printf("%d",count);
}
}
