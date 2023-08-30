
#include <stdio.h>

void main()
{
	int i ,j;
	
	int num = 50;
	int count = 1;
	int sum;
	
	for(i = 1;i<=num;i++)
	{
		sum = 0;
		for(j = 1;j<i;j++)
		{
			if(i % j ==0 )
			{
				sum += j;
			}
		}
		
		if(sum == i)
		{
			printf("\t%d",i);
		}
	}
}
