// reverse number using whileloop

#include <stdio.h>

void main()
{
	int num;
	printf("Enter a number \n");
	scanf("%d",&num);
	
	int rem ;
	int rev = 0;
	
	while(num!=0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num = num / 10;
		
		
	}
	printf("Enter final : %d",rev
	);
}
