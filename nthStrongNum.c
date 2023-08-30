// upto nth strong number

#include <stdio.h>
void main()
{
	int no;
	printf("Enter a no : \n");
	scanf("%d",&no);
	int num,i,j,sum;
	int rem,fact;
	
	for(i = 1;i<=no;i++)
	{
		num = i;
		sum = 0;
		while(num > 0)
		{
			rem = num % 10;
			num /= 10;
			
			j = 1;
			fact = 1;
			while(j<=rem)
			{
				fact = fact * j;
				j++;
				
			}
			sum = sum + fact;
			
			
		}
		if(sum == i)
		{
			printf("\t%d",i);
		}
	}
}
