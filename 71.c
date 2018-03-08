#include<stdio.h>
#include<string.h>
void main()
{
  char a[40];
  printf("enter string");
  scanf("%s",a);
  if(a==strrev(a))
  printf("palindrome");
  else
  printf("not palindrome");
}
