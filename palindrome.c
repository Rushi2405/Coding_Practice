// paindrome number

#include<stdio.h>

void main()
{
	int num,sum=0;
	int rem;
	
	printf("Enter a num\n");
	scanf("%d",&num);
	int temp = num;
	
	while(num !=0)
	{
		rem = num % 10;
		sum = sum * 10 + rem;
		num = num / 10;
		
	}
	if(temp == sum)
	{
		printf("palinfrome");
	}
	else
	{
		printf("nonpalindrome"); 
	}
	
}
