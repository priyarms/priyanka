#include<stdio.h>
#define size 50
void main()
{
int a[size],i,j,temp,n;
printf("enter num");
scanf("%d",&n);
printf("numbers");
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
    printf("Sorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    }
