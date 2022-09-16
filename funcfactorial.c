#include <stdio.h>
int fact(int);
void main()
{
 int n,factorial;
printf("Enter a number to calculate it's factorial\n");
	scanf("%d",&n);
	factorial=fact(n);
    printf("Factorial of the number %d = %d\n",n,factorial);
}
int fact(int m)
{
    int i,f=1;
    for(i=1;i<=m;i++)
    {
        f=f*i;
    }
    return f;
}