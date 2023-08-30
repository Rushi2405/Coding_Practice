// check leap year 

#include <stdio.h>

void main()
{
	int year;
	
	printf("Enter a year\n");
	scanf("%d",&year);
	
	if(year % 4 == 0)
	{
		printf("Given year is leap year");
	}
	else
	{
		printf("Given year is not an leap year");
	}
}
