#include<stdio.h>
void main()
{
int n,a[20],i,m,temp,j;
printf("enter the size");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for (i = 0; i < n; i++)
    {
     for (j = 0; j < (n- i - 1); j++)
        {
        if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
if(n%2==0)
{
m=(n/2)-1;
printf("\t%d",a[m]);
}
else
			m=(n/2);
		printf("%d",a[m]);
		

}
