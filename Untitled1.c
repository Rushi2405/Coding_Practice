#include <stdio.h>

void main()
{
	int num ;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	(num % 2==0)?printf("Even"):printf("odd");
}
