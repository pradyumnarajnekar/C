#include<stdio.h>
int main()
{
    int m;
    printf("Enter the operation you want to get\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    scanf("%d", &m);
    switch(m)
    {
        case 1:
        {
            int x, y;
            printf("Enter the values of x\n");
            scanf("%d", &x);
            printf("Enter the value of y\n");
            scanf("%d", &y);
            printf("The sum of x and y is %d \n", x+y);
        }
        break;
        case 2:
        {
            int x, y;
            printf("Enter the values of x\n");
            scanf("%d", &x);
            printf("Enter the value of y\n");
            scanf("%d", &y);
            printf("The difference of x and y is %d \n", x-y);
        }
        break;
        case 3:
        {
            int x, y;
            printf("Enter the values of x\n");
            scanf("%d", &x);
            printf("Enter the value of y\n");
            scanf("%d", &y);
            printf("The product of x and y %d \n", x*y);
        }
        break;
        default:
        printf("Invalid input");
        case 4:
        {
            int x, y;
            printf("Enter the values of x\n");
            scanf("%d", &x);
            printf("Enter the value of y\n");
            scanf("%d", &y);
            printf("The ratio of x and y is %d \n", x/y);
        }
        break;
    }
    return 0;
}