#include<stdio.h>
 int main()
{
 	int r, c;
	
	int arr[2][2] = {{3, 4}, {5, 6}};

	printf("\nPrinting the 2D Array without taking input from the user\n");
 	for(r = 0; r < 2; r++)
  	{
  		for(c = 0; c < 2; c++)
  		{
  			printf("%d  ", arr[r][c]);
		}
   		printf("\n");
  	}  	

 	return 0;
}