// area of equilateral triangle

#include <stdio.h>
#include <math.h>

void main()
{
	int a;
	int equilateralTriangle;
	
	printf("Enter a sides of equilateral triangle is : \n"); 
	
	scanf("%d",&a);
	
	equilateralTriangle = (sqrt(3)/4)* a * a;
	
	printf("Area of equilateral Triangle : %d",equilateralTriangle);
}
