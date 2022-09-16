#include <stdio.h>
int main()
{    int num1, num2, result;
     printf("\nEnter the two number: ");
	 scanf("%d %d", &num1, &num2);
     result = add(&num1, &num2);
     printf("\nAddition of %d and %d is %d", num1, num2, result);
}
int add(int *x, int *y)
{
	int res;
	res = *x + *y;
	return res;
}