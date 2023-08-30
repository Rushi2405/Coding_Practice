
//sum of digit

#include <stdio.h>

void main()
{
	int num;
	int m;
	printf("Enter a number \n");
	scanf("%d",&num);
	int sum = 0;
	
	while(num!=0)
	{
		m = num % 10;
		sum = sum + m;
		num = num / 10;
		
	}
	printf("Sum of given digit is : %d",sum);
}
