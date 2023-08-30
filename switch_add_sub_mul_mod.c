//

#include <stdio.h>

void main()
{
	int a;
	int b;
	int c;
	
	printf("Enter a amount \n");
	scanf("%d%d",&a,&b);
	
	int choice;
	
	printf("Enter a choice \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition %d + %d = %d",a,b,a+b);
			break;
			
		case 2:
			printf("Sub %d - %d = %d",a,b,a-b);
			break;
		case 3:
			printf("Multiplication %d * %d = %d",a,b,a*b);
			break;
		case 4:
			printf("Module %d % %d = %d",a,b,a%b);
			break;
		default :
			printf("Other");
			break;
			
	}
	
	
}
