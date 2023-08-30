// switch - find max of three

#include <stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter a values\n");
	scanf("%d%d%d",&a,&b,&c);
	
	int choice;
	printf("Enter a choice\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			if (a > b && b > c)
			{
				printf("A is greater");
			}
			else if(b > a && b > c)
			{
				printf("B is greater");
			}
			else
			{
				printf("C is greater");
			}
			break;
		case 2:
			printf("Invalid");
			break;
	}
}
