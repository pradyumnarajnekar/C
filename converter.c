#include<stdio.h>
int main(){
    int a;
    int c;
    printf("1. for currency convertor \n 2. for temperature convertor \n 3. for weight convertor \n 4. for length convertor \n 5. for time convertor \n 6. for energy convertor \n");
    printf("enter your choice: ");
    scanf("%d",&c);
    printf("enter the values of a ");
    scanf("%d",&a);
    switch(c){
        case 1:
        printf("%d dollar = %d rs.",a,a*75);
        break;
        case 2:
        printf("%d ceclius  = %d k",a,a+273);
        break;
        case 3:
        printf("%d kg = %d gram ",a,a*1000);
        break;
        case 4:
        printf("%d metre = %d cm",a,a*100);
        break;
        case 5:
        printf("%d hour = %d minutes",a,a*60);
        break;
        case 6:
        printf("%d kilojoule = %d joule",a,a*1000);
        break;
        default:
        printf("inalid");
    }
    return 0;
}