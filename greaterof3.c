

#include <stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter a values\n");
	scanf("%d%d%d",&a,&b,&c);


	(a > b && a > c )?printf("A"):(b > a && b > c)?printf("B"):printf("C");

//	if(a > b && a > c )
//	{
//		printf("A");
//	}
//	else if(b > a && b > c)
//	{
//		printf("B");
//	}
//	else
//	{
//		printf("C");
//	}

}
