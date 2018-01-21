
#include<stdio.h>
void main()    
{    
int n,r,sum=0,n1;    
printf("enter the number=");    
scanf("%d",&n);    
n1=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(n1==sum)    
printf("armstrong  number ");    
else    
printf("not armstrong number");    
return 0;  
}   

