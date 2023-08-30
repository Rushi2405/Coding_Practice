
//

#include <stdio.h>

void main()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d",&n);
	int i,j;
	int count = 1;
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=5;j++)
		{
			if(i%2 != 0)
			{
				printf("*");
			}
			else
			{
				printf("%d",count++);
			}
		}
		printf("\n");
	}
	
}
