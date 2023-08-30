/*
1
4 9
16 25 36
49 64 81 100 */

#include<stdio.h>

void main()
{
	int num = 4;
	int n=1;
	int i ,j;
	for(i = 1;i<=4;i++)
	{
		for(j = 1;j<=i;j++)
		{
			printf("%d ",n*n);
			n++;
			
		}
		printf("\n");
	}
}
