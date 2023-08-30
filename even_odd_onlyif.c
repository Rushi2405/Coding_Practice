
#include<stdio.h>

void main()
{
	int num = 10;
	
	int rem;
	
	rem = num % 2;
	
	if(!rem)
	{
		printf("Even");
	}
	if(rem)
	{
		printf("Odd");
	}
}
