#include<stdio.h>
int main()
{
    int m;
    printf("choice: 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n ");
    printf("enter your choice ");
    scanf("%d",&m);
    switch(m){
        case 1:
        printf("January");
        break;
        case 2:
        printf("February");
        break;
        case 3:
        printf("March");
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break;
        case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("October");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");
        break;
        default:
        printf("invalid input");
    }
    return 0;
}