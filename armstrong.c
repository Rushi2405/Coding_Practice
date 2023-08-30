
#include <stdio.h>

void main()
{
	int num;
	int r,sum=0;
	
	printf("Enter a number : \n");
	scanf("%d",&num);
	int temp = num;
	
	while(num!=0)
	{
		r = num % 10;
		sum = sum + (r*r*r);
		num = num / 10;
	}
	if(temp == sum)
	{
		printf("armstrong number = %d",temp);
		
	}
	else
	{
		printf("Not an armstrong num");
	}
}
