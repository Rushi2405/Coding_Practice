
#include<stdio.h>

void main()
{
	int num;
	int i=1;
	int sum = 0;
	
	printf("Enter a num\n");
	scanf("%d",&num);
	
	while(i<=num)
	{
		if(i%2==1)
		{
			sum += i;
		}
		i++;
	}
	printf("The sum of odd number is :  %d",sum);
}
