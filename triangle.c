// check traingle is correct


#include <stdio.h>

void main()
{
	int first_angle;
	int second_angle;
	int third_angle;
	
	printf("Enter a sides of triangle\n");
	scanf("%d%d%d",&first_angle,&second_angle,&third_angle);
	
	int sum;
	
	sum = first_angle + second_angle;
	
	if (sum >= third_angle)
	{
		printf("The triangle is valid");
	}
	else
	{
		printf("Triangle is inValid");
	}
	
	
}
