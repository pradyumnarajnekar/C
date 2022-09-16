#include <stdio.h>
#include <string.h>
int main()
{
    char string[100];
    int i;
    printf("Enter the String: ");
    scanf("%s", string);
    printf("Length of Str is %ld", strlen(string));
    return 0;
}