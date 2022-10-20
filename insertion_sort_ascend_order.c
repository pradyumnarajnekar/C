//Insertion sort
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
    printf("\nNow sorting the array using insertion sort\n");
    int x;
    for (int i = 1; i < n; i++)
    {
      x = arr[i]; // x is set arr[i], i is for passes, j is for indexes of an array
      int j = i - 1; //doubt : why i - 1?
      while (j>=0 && arr[j] > x) // when j is greater than x or arr[i]
	  {
	    arr[j + 1] = arr[j];//j is swapped with its preceeding element
	    j = j - 1; // doubt : why j-1?
	  }
      arr[j + 1] = x; // j + 1 (which was j before swapping, but now has become j+1) is set x
    }
    printf("After sorting the array, the resulatant array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
