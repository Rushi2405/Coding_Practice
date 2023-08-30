//candies

#include <stdio.h>

void main()
{
	int total_Candies;
	int sold_Candies;
	
	int ava_Candies;
	
	printf("Enter total candies\n");
	scanf("%d",&total_Candies);
	
	printf("Enter sold candies\n");
	scanf("%d",&sold_Candies);
	
	printf("The sold candies are %d\n",sold_Candies);
	
	ava_Candies = total_Candies - sold_Candies;
	 
	printf("The total Available_candies %d\n",ava_Candies);
	
	if(ava_Candies >= total_Candies)
	{
		printf("Jar will be right\n");
		
	}
	else
	{
		printf("Invalid Input");
	}
	
	
	
	
}
