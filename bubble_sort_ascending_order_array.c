#include<stdio.h>
int main()
{
    int arr[10];
    int n;
    printf("Enter a number of elements to be entered in the array (less than 10) : \n");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array entered is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("\nNow sorting the array using bubble sort\n");
    for(int i=0; i<n-1; i++)//n-1 because for n elements, there exists n-1 passes
    {
        for(int j=0; j<n-i-1; j++)//doubt : why we took another another j variable?
        {
            if(arr[j]>arr[j+1])//logic : if 2>1 then it will be swapped
            {
                int temporary = arr[j];//swapping
                arr[j] = arr[j+1];
                arr[j+1] = temporary;
            }
        }    
    }
    printf("After sorting the array, the resulatant array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
