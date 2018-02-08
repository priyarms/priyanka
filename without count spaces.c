#include<stdio.h>
void main()
{
  char a[100];
  int i,count;
  printf("enter a string");
  scanf("%[^\n]s",a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]!=' ')
    count++;
}
printf("%d",count);  
}
