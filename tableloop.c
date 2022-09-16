#include<stdio.h>
int main()
{
   int i=1,n;
   printf("Enter the number whose table you want to print.");
   scanf("%d", &n);
   while(i<=10)
   {
       printf("%d * %d = %d \n", n, i, n*i);
       i++;
   }
   return 0;
}