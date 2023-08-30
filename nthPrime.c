// nth prime number;

#include <stdio.h>

int main()
{
	int num;
	int count = 0;
	int flag = 0;
	int i,j;
	
	
	printf("Enter a num : \n");
	scanf("%d",&num);
	
	printf("Prime Numbers are : ");
	for(i = 1;i<=num;i++)
	{
		count = 0;
		for(j = 1;j<=i;j++)
		{
			if(i % j ==0)
			{
				count++;
			}
		}
		if(count == 2)
		{
			printf("\t%d",i);
		}
		//printf("Prime numbers are : \n");
	}
		
	return 0;
}
