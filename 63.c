#include <stdio.h>
#include<string.h>
void main()
{
    char s[1000];
    int count=1,i;

    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    for(i = 0;s[i] != '\0'; i++)
    {
        if(s[i]==' ')
        {
        count++;
        }
    }
    printf("Length %d", count);
    
}
