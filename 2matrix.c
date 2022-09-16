#include <stdio.h>
int main()
{
    int r,c,arr[2][2];
    printf("Taking the input from user for the 2x2 Matrix : \n");
    for(r=0;r<=1;r++)
    {
        for(c=0;c<=1;c++)
        {
            printf("Enter the Element for the Location %d,%d :",r+1,c+1);
            scanf("%d",&arr[r][c]);
        }
    }
    printf("\n The 2x2 matrix is : \n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf(" %d ",arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}