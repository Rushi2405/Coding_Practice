
// check num is prime or not

#include <stdio.h>

void main()
{
	int num,i= 1;
	
	int count=0;
	
	printf("Enter a num\n");
	scanf("%d",&num);
	
	
	while(i <= num)
	{
		if(num%i==0)
		{
			count++;
		}
		i++;
	}
	
	if(count == 2)
	{
		printf("Prime");
	}
	else
	{
		printf("not prime");
	}
	

}
