#include <stdio.h>
int main()
{
    int arr[10];
    int i,max,min,n;
    printf("enter the no. of elemnts ");
    scanf("%d", &n);
    printf("enter the elements to find maximum and minimum of them");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum no. = %d\n", max);
    printf("Minimum no. = %d\n ", min);
    return 0;
}