#include <stdio.h>
int main()
{
    int a,b,c,i;
    a=0;
    b=1;
    printf("%d %d ",a,b);
    for(i=2;i<20;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}