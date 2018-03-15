#include<stdio.h>
#include<string.h>
void main()
{
  char a[40];
  int i,j,k;
  printf("enter a string");
  scanf("%s",a);
  printf("odd\t");
  for(i=0;a[i]!='\0';i++)
  {
  if(i%2!=0)
   printf("%c",a[i]);
  }
  printf("\n");
  printf("even\t");
  for(i=0;a[i]!='\0';i++)
  {
  if(i%2==0)
   printf("%c",a[i]);
  }
}
  
