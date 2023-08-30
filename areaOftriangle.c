// area of triangle

#include<stdio.h>

void main()
{
	int h;
	int b;
	
	int areaOftriangle;
	
	printf("Enter hight and base of triangle:\n");
	scanf("%d%d",&h,&b);
	
	areaOftriangle = (h * b) / 2;
	
	printf("Area of triangle is : %d",areaOftriangle);
	
	
}
