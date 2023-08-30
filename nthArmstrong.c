// nth armstrong number

#include <stdio.h>

void main()
{
	int c = 1,num,sum,r,no;
	int i,j,p;
	
	printf("Enter a number :\n");
	scanf("%d",&no);
	
	for(i =1;i<=no;i++)
	{
		num = i;
		
		while(num > 0)
		{
			c++;
			num /= 10;
		}
		num = i;
		sum = 0;
		while(num > 0)
		{
			r = num % 10;
			num /= 10;
			
			j = 1;
			p = 1;
			while(j<=c)
			{
				p = p * r;
			}
			sum = sum + p;
			
		}
		if(sum == i)
		{
			printf("\t%d",i);
		}
	}
	
	
	
	
	
}
