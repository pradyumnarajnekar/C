#include<stdio.h>
int main()
{
    int num;
    int arr[5]={1,2,3,4,5};
    printf("The entered array is:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the number that to be searched:");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        if(num==arr[i])
        {
            printf("The number at %d index position.",i);
        }
    }
return 0;
}