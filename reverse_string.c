// REVERSE A STRING

#include<stdio.h>
#include<string.h>

void reverse(char *str) 
{
    int i, j;
    for (i = 0 ,j=strlen(str)-1 ; i < strlen(str)/2 && str[i] != '\0'&& str[j]!='\0'; ++i,--j)
    {
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\nReversed String: %s", str); 
}

void main()
{
    char s[100];
    printf("ENTER A STRING : ");
    gets(s);
    reverse(&s[0]);
}