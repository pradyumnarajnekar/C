#include<stdio.h>
int main()
{
    float a,b,c;
    printf("The Value of a is\n");
    scanf("%f",&a);
    printf("The Value of b is\n");
    scanf("%f",&b);
    printf("The Value of c is\n");
    scanf("%f",&c);
    printf("The Average Value is %.2f",(a+b+c)/3);
    return 0;
}