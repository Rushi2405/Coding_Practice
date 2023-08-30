// total days in month

#include <stdio.h>

void main()
{
	int numOfmonth;
	
	printf("Enter a number of month\n");
	scanf("%d",&numOfmonth);
	
//	int total_days;
//	
//	total_days
	
	switch(numOfmonth)
	{
		case 1:
			printf("Total days in month are 31");
			break;
		case 2:
			printf("Toatl number of days are 28");
			break;
		case 3:
			printf("Total days in month are 31");
			break;
		case 4:
			printf("Toatl number of days are 30");
			break;
		case 5:
			printf("Total days in month are 31");
			break;
		case 6:
			printf("Toatl number of days are 30");
			break;
		case 7:
			printf("Total days in month are 31");
			break;
		case 8:
			printf("Toatl number of days are 30");
			break;
		case 9:
			printf("Total days in month are 31");
			break;
		case 10:
			printf("Toatl number of days are 30");
			break;
		case 11:
			printf("Total days in month are 31");
			break;
		case 12:
			printf("Toatl number of days are 30");
			break;
		default :
			printf("Invalid month number");
			break;
		
	}
}
