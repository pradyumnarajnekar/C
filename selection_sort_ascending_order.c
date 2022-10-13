//Selection sort
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
    printf("\nNow sorting the array using selection sort\n");
    for(int i=0; i<n-1; i++)
    {
        int minimum = i;//arr[i] is assigned as minimum
        for(int j=i+1; j<n; j++)//j=i+1 because we want j to be the next element after i
        {
            if(arr[minimum]>arr[j])//logic : if 2>1 then it will be swapped
            {
                int temporary = arr[j];
                arr[j] = arr[minimum];
                arr[minimum]=temporary;
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
