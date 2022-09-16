#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the vale of n \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("i=%d", i);
        if(i==5)
        {
            break;
            printf("Break statement will execute");
        }
    }
    printf("Out of loop");
    return 0;
}