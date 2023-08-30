// switch -> even or odd

#include <stdio.h>

void main()
{
	int num;
	printf("Enter a num\n");
	scanf("%d",&num);
	int choice;
	printf("Enter a choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			if(num % 2==0)
			{
				printf("Even");
			}
			else
			{
				printf("Odd");
			}
			break;
		case 2:
			printf("Invalid");
			break;
	}
}

