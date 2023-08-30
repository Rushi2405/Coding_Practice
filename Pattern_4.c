/*
1 2 3 4 5
A B C D
6 7 8
E F
9 */

#include <stdio.h>


void main()
{
	int i ,j,n=1;
	char ch = 'A';
	for(i = 1;i<=5;i++)
	{
		for(j =1;j<=5;j++)
		{
			if(j>=i)
			{
				if(i%2!=0)
			{
				printf("%d ",n++);
			}
			else
			{
				printf("%c ",ch++);
			}
			}
			
		}
		printf("\n");
	}
}
