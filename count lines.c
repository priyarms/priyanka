#include<stdio.h>
void main()
{
char s[100];
int i,count=0;
printf("enter the string");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
  if(s[i]=='.')
  {
  count++;
  }
}
printf("%d",count+1);
}
