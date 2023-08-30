// check char is alphabet or not

#include <stdio.h>

void main()
{
	char ch;
	
	printf("Enter a char \n");
	scanf("%c",&ch);
	
	if(ch == 'A' || ch == 'Z' && ch == 'a' || ch == 'z')
	{
		printf("Given char is alphabet");
	}
	else
	{
		printf("char is wrong");
	}
}
