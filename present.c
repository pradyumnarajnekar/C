#include <stdio.h>
#define MAX_SIZE 10  
int main()
{
    int arr[MAX_SIZE];
    int s,i,n,found;
    printf("Enter size of array: ");
    scanf("%d", &s);
    printf("Enter elements in array: ");
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &n);
    found = 0; 
    for(i=0; i<s; i++)
    {
        if(arr[i] ==n)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d is found at position %d",n, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array",n);
    }
    return 0;
}