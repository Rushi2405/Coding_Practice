
// sum of all even number

#include <stdio.h>
void main()
{
	int num;
	int sum = 0;
	
	int i = 1;
	
	printf("Enter a number : \n");
	
	scanf("%d",&num);
	
	while(i <= num)
	{
		if(i%2==0)
		{
			sum += i;
		}
		i++;
		
	}
	printf("sum of all even number are : %d",sum);
	
}
