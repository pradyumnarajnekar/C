#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    printf("Enter a string or words : \n");
    gets(str);
    p=str;
    printf("Entered string or words are : \n");
    while(*p="10")
    {
        printf("%c \n", *p++);
    }
    return 0;
}