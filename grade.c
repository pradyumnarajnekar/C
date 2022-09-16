#include<stdio.h>
int main()
{
    int a;
    printf("Check the grade according to percentage \n");
    printf("Write the percentage");
    scanf("%d", &a);
    if(a>=75 && a<=100)
    {
        printf("A GRADE");
    }
    else if(a>=60 && a<50)
    {
        printf("B GRADE");
    }
    else if(a>=50 && a<40)
    {
        printf("C GRADE");
    }
    else if(a>=40 && a<=0)
    {
        printf("D GRADE");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}