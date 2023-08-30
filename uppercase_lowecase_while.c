//// printf uppercase and lowercase upto A to Z


#include <stdio.h>

void main()
{
	char uppercase = 'A';
	char lowercase = 'a';
	
	printf("The uppercase and lowercase chr from A to Z are :\n\n\n");
	
	printf("Uppercase:\n");
	
	while (uppercase <= 'Z')
	{
		printf(" %c ",uppercase);
		
		uppercase++;
	}
	printf("\n");
	
	printf("Lowercase :\n"); 
	
	while (lowercase <= 'z')
	{
		printf(" %c",lowercase);
		lowercase++;
	}
}
