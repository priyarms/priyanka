#include<stdio.h>
void main()
{
  char n[40];
  int i,count=0,count1=0;
  printf("enter number");
  scanf("%s",n);
  for(i=0;n[i]!='\0';i++)
  {
    count++;
  if(n[i]=='0'||n[i]=='1')
  count1++;
  }
  if(count==count1)
  printf("yes");
  else
  printf("no");  
}
