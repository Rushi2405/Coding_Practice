// check triangle is valid or not

#include <stdio.h>

void main()
{
	int fside;
	int sside;
	int tside;
	
	printf("Enter sides of triangle : \n");
	scanf("%d%d%d",&fside,&sside,&tside);

	if ((fside + sside > tside) && (sside + tside > fside) && (tside + fside > sside))
	{
		printf("Valid");
	}
	else
	{
		printf("not valid");
	}
}


