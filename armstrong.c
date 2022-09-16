#include<stdio.h>
int main()
{
    int n, arm=0, a, x;
    printf("Enter the number\n");
    scanf("%d", &n);
    x=n;
    while(n>0)
    {
        a=n%10;
        arm=arm+a*a*a;
        n=n/10;
    }
    printf("Arm=%d \n", arm);
    if(x==arm)
    {
        printf("Arm number\n");
    }
    else
    {
        printf("Not Arm number");
    }
    return 0;
}