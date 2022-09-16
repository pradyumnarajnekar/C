#include <stdio.h>
int main()
{
    int k,s;
    printf("enter the value of k=");
    scanf("%d",&k);
    printf("enter the value of s=");
    scanf("%d",&s);
    int temp=k;
    k=s;
    s=temp;
    printf("\n After swapping:k=%d,s=%d",k,s);
    return 0;
}
