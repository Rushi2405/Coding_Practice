// depends on cp and sp find the profit or loss

#include <stdio.h>

void main()
{
	
	int cp;
	int sp;
	
	printf("Enter a cost prize \n");
	scanf("%d",&cp);
	
	printf("Enter a selling prize \n");
	scanf("%d",&sp);
	
	if(cp < sp)
	{
		printf("Profit");
	}
	
	else
	{
		printf("Loss");
	}
	
}
