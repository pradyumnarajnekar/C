#include <stdio.h>
int main()
{
    int i,j,arr[10],temp;
    printf("enter the elements of array");
    for(i=0;i<10;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("the array in increasing order is as follow");
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}