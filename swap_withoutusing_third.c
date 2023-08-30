#include <stdio.h>;

void main()
{
	int a = 4;
	int b = 5;
	printf("%d%d\n",a,b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("%d%d",a,b);
}
