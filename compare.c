#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 1st number");
    scanf("%d", &a);
    printf("Enter 2nd number");
    scanf("%d", &b);
    printf("Enter 3rd number");
    scanf("%d", &c);
    printf("Enter 4th number");
    scanf("%d", &d);
    if(a>b & a>c & a>d)
    {
        printf("a is greater than b, c and d");
    }
    else if(c>a & c>b & c>d)
    {
        printf("c is greater than a, b and d");
    }
    else if(b>a & b>c & b>d)
    {
        printf("b is greater than a, c and d");
    }
    else
    {
        printf("d is greater than a, b and c");
    }
    return 0;
}