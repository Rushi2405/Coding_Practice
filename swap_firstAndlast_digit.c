// swap first and last number

#include <stdio.h>

void main()
{
	int num;
	
	printf("Enter a number \n");
	scanf("%d",&num);
	
	int first ,last;
	first = num / 1000;
	
	
	last = num % 10;
	
	num = num / 10 - 100;
	
	num = last * 1000 + (num * 10 )+ first;
	
//	printf("%d",num);
	printf("%d",num);
}
