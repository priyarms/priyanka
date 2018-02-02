#include <stdio.h>
void main()
{
    char s[1000];
    int count=0,i;

    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    for(i = 0; s[i] != '\0'; i++);
    {
        if(s[i]==' ')
        {
        count++;
        }
    }
    printf("Length of string: %d", count+1);
    
}
