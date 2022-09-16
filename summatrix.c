#include <stdio.h>
int main()
{
    int i,j,sum[2][2];
    int a[2][2]={2,10,15,20};
    int b[2][2]={5,18,23,24};
    printf("Sum of 2 arrays is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("  %d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}