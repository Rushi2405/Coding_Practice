//// converet upper to lower and lower to upper
//
//#include <stdio.h>
//
//void main()
//{
//	char ch;
//	printf("Enter a char :\n");
//	scanf("%c",&ch);
//	int ch1 ;
//	
//	ch1 = ch - 32;
//	
//	printf("%c",ch1);
//}

#include <stdio.h>

void main()
{
	char ch = 'a';
	char ch1 = 'A';
	
	printf("Lowercase letters :\n");
	while(ch <= 'z')
	{
		printf(" %c",ch);
		ch++;
	}
	printf("\n");
	printf("Uppercase letters :\n");
	while(ch1 <= 'Z')
	{
		printf(" %c",ch1);
		ch1++;
	}
}
