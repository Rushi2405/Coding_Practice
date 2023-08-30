/*A
  B C
  D E F
  G H I J
  K L M N O */
  
#include <stdio.h>

void main()
{
	char ch = 'A';
	int i ,j,k;
	
	for(i =  1;i<=5;i++)
	{
		k = i;
		for(j = 1;j<=5;j++,k++)
		{
			if(j<= i)
			{
				printf("%c",(char)(k + 64));
			}
		}
		printf("\n");
	}
}
 

