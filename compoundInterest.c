// find the compound interest

#include <stdio.h>

#include <math.h>

void main()
{
	int p,t;
	float r;
	
	double ci;
	
	printf("Enter the values \n");
	scanf("%d%d%f",&p,&t,&r);
	
	ci = p*pow(1 + r / 100,t);
	
	printf("Compound interest is = %lf",ci);
}
