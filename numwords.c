#include<stdio.h>
int main(){
    int a;
    printf("enter the no. (1-5)\n");
    printf("enter your choice ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("%d=one",a);
        break;
        case 2:
        printf("%d=two",a);
        break;
        case 3:
        printf("%d=three",a);
        break;
        case 4:
        printf("%d=four",a);
        break;
        case 5:
        printf("%d=five",a);
        break;
        default:
        printf("invalid syntax");
        }
    return 0;
}