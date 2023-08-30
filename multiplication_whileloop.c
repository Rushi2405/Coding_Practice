// multilpication table

#include <stdio.h>.

void main()
{
	int num;
	printf("Enter a number to print table\n");
	scanf("%d",&num);
	int i = 1;
	
	while (i <= num)
	{
		printf("Multiplication of %d x %d = %d\n",num,i,num*i);
		i++;
	}
}
