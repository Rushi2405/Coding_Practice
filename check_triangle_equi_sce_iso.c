+

// check given triangle is isosceles ,equilateral,scalene triangel

#include <stdio.h>

void main()
{
	int a ,b,c;
	
	printf("Enter sides of triangle\n");
	
	scanf("%d%d%d",&a,&b,&c);
	
	if (a == b && b == c)
	{
		printf("Given triangle is equilateral triangle");
		
	}
	else if (a == b || b == c || c == a)
	{
		printf("isoscelene");
	}
	else
	{
		printf("scelene");
	}
}
