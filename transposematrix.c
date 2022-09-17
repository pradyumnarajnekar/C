// C program to print the transarr1 of a matrix.
#include <stdio.h>
int main()
{
    int arr1[10][10], transarr1[10][10];
    int i, j, m, n;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the coefficients of the matrix\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("The given matrix is \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0;i < m;i++)
    {
        for (j = 0; j < n; j++)
        {   
            transarr1[j][i] = arr1[i][j]; // Logic = here, for transarr1, the elements in row becomes the elements in column and vice versa
        }
    }
    
    printf("Transpose of the matrix is \n");
    for (i = 0; i< n; i++)
    {
        for (j = 0; j < m; j++)
        {
           printf("%d ", transarr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
