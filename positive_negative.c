// check num is positive or negative

#include<stdio.h>

void main()
{
	int num;
	
	printf("Enter a number \n");
	
	scanf("%d",&num);
	
	if( num >= 0)
	{
		printf("Number is positive");
	}
	else
	{
		printf("Number is negative");
	}
}
