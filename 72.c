#include<stdio.h>
void main()
{
  char a[30];
  int i,count=0;
  printf("enter string");
  scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
count++;
}
}
if(count==0)
printf("no");
else
printf("yes");
}
