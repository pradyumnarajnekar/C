#include<stdio.h>
int main()
{
  int n, r, c;
  printf("Enter number of rows: ");
  scanf("%d",&n);
  for(r=1;r<=n;r++)
  {
    for(c=1;c<=2*n;c++)
    if(c<=r||c>(2*n-r)) printf("* ");
    else printf(" ");
    printf("\n");
  }
  return 0;
}
