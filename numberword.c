#include <stdio.h>
int main()
{
    int a;
    printf("Write the name of number between 1 to 5");
    printf("Enter a number between 1 to 5 ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    printf("One");
    break;
    case 2:
    printf("Two");
    break;
    case 3:
    printf("Three");
    break;
    case 4:
    printf("Four");
    break;
    case 5:
    printf("Five");
    break;
    default:
    printf("you entered wrong choice\n");
    break;
    }
    return 0;
}