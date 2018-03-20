#include<stdio.h>
void main()
{
  int a,b,c,d,e,f;
    printf("enter numbers\n");
    scanf("%d%d",&a,&b);
     c=a/b;
    scanf("%d%d",&d,&e);
    f=d%e;
    printf("%d/%d\n",a,b);
    printf("%d%%%d\n",d,e);
    printf("%d\n",c);
    printf("%d",f);
    
  }
