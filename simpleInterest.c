// simple interest

#include <stdio.h>

void main()
{
	int p,t,r;
	
	printf("Enter a values : \n");
	scanf("%d%d%d",&p,&t,&r);
	
	int si = (p * t * r)/ 100;
	
	printf("Simple Interest = %d",si);
}
