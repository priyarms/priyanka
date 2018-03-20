#include<stdio.h>
void main()
{
  int a,b,c,d,e;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
     c=a/b;
    scanf("%d%d",&c,&d);
    e=c%d;
    printf("%d/%d\n",a,b);
    printf("%d%%%d\n",c,d);
    printf("%d\n",c);
    printf("%d",e);
    
  }
