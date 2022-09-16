#include <stdio.h>
int addition(int *arr , int n)
{  int i=0,sum=0;
for(i=0; i<n ; i++)
   { sum = sum + arr[i];
   }
return sum;
}
int main()
{
    int total = 0;
    int array[10] = {10,18,23,4,3,24,10,11,5};
total = addition(array,9);
	
    printf("\nThe sum of all array elements is : %d",total);
	
    return 0;
}
