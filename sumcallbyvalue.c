#include<stdio.h>
int main() 
{    
 int a,b, x; 
  printf("Enter Two Number : "); 
        scanf("%d%d",&a,&b); 
        x = sum(a,b);
} 
int sum(int x,int y) 
{ 
    int z; 
        z=x+y; 
        printf("Sum of Two Number is : %d",z); 
        return 0; 
}