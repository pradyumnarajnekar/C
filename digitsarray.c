#include<stdio.h>
int main()  
{   
    int a[10] = {0}, num, reminder, i; 
    printf("Enter a positive number\n");  
    scanf("%d", &num); 
    while(num)  
    { 
        reminder = num % 10;  
        a[reminder] = a[reminder] + 1;  
        num = num / 10;  
    } 
    printf("\n");  
    for(i = 0; i < 10; i++)  
    {
        if(a[i] != 0) 
            printf("%d is appeared %d times.\n", i, a[i]);  
    }  
return 0;  
}