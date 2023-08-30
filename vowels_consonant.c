// vowels and consonant

#include <stdio.h>

void main()
{
	char ch;
	printf("Enter a char \n");
	
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' && ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("%c is vowel",ch);
	}
	else
	{
		printf("%c It is not an vowel",ch);
	}
}
