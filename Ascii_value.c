
//all asccci value

#include <stdio.h>

void main()
{
	char ch;
	int val;
	int val1;
	
	printf("Enter a char \n");
	scanf("%c",&ch);
	
	while (ch <= 'z')
	{
		val = ch - 32;
		ch++;
	}
	printf("Value of given char is : %d\n",val);
	
	while (ch <= 'Z')
	{
		val1 = ch + 32;
		ch++;
	}
	printf("Value of given char is : %d",val1);
}
