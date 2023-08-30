
// printf 1 to nth natural number using while loop 

#include <stdio.h>

void main()
{
	int num;
	printf("Enter a number upto print natural number\n");
	scanf("%d",&num);
	int i = 0;
	
	while (i <= num)
	{
		printf("%d\n",i);
		i++;
		
	}
	
}
