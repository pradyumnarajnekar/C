#include <stdio.h>
int main()
{
    int i,j,Product[2][2];
    int a[2][2]={{1,2}, {3,4}};
    int b[2][2]={{5,6}, {7,8}};
    printf("Product of 2 arrays is :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            Product[i][j]=a[i][j]*b[i][j];
        }
    }
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",Product[i][j]);
        }
        printf("\n");
    }
    return 0;
}