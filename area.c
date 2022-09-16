#include <stdio.h>
int main()
{
    int s,l,b,S_area, R_area;
    float r, R_circle;  
    printf("enter the side of sqaure in cm.\n");
    scanf("%d",&s);
    printf("enter the value of length and bridth of rectangle in m. \n ");
    scanf("%d%d",&l,&b);
    printf("enter the value of radius of circle in mm.");
    scanf("%f",&r);
    printf("area of square is %d sq.cm\n", s*s);
    printf("area of rectangle is %d sq.m \n", l*b);
    printf("area of cicle is %.2f sq.mm", 3.14*r*r);
    return 0;
}