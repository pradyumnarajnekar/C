#include <stdio.h>
void fun(char *arr, unsigned char n)
{
    char i;
    for(i=0;i<n;i++)
    printf("%c ",arr[i]);
}
char main()
{
    char arr[]={'a','b','c','d','e','f'};
   unsigned char n = sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
    return 0;
}