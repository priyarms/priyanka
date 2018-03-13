#include<stdio.h>
#include<string.h>
void main()
{
  char a[40],b[40],c[40];
  int i,j,k,count=0;
  printf("enter a string");
  scanf("%s",a);
  j=0;
  k=0;
  for(i=0;a[i]!='\0';i++)
  {
    count++;
  }
  for(i=0;i<count;i++)
  {
  if(i%2!=0)
  {
    b[j]=a[i];
    j++;
  }
  else
   c[k]=a[i];
   k++;
  }
c[k]='\0';
  printf("%s    %s",b,c);
  
}
