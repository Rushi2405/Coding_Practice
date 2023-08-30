// using switch positive negative and neutral

#include <stdio.h>

void main()
{
	int num;
	int choice;
	
	printf("Enter a num\n");
	scanf("%d",&num);
	
//	printf("Enter choice\n");
//	scanf("%d",&choice);
	
	switch(num > 0)
	{
		case 1:
			printf("Positive");
			break;
		case 0:
			
			if(num < 0)
			{
				printf("Negative");
			}
			else
			
			{
				
				printf("Zero");
			}
			break;
			
	}
}
