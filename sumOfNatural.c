
// sum of all natural number

#include <stdio.h>

void main()
{
	int num;
	printf("Enter a num\n");
	scanf("%d",&num);
	int i = 1;
	int sum = 0;
	
	while(i<=num)
	{
		sum += i;
		i++;
	}
	printf("Sum of all natural number is : %d",sum);
}
