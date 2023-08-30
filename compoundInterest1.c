// compound interest 

#include <stdio.h>
#include <math.h>

void main()
{
	int p ,t, r;
	
	printf("Enter a values :\n");
	scanf("%d%d%d",&p,&t,&r);
	
	int ci = p *pow (1 + r / 100 , t);w
	
	printf("Comound Interest : %d",ci);
}
