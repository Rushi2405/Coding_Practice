// // check number is divisible by 5 or 11 or not
//
//#include <stdio.h>
//
//void main()
//{
//	int num;
//	
//	printf("Enter a number \n");
//	
//	scanf("%d",&num);
//	
//	if (num % 5== 0 || num % 11 == 0)
//	{
//		printf("number is true");
//	}
//	else
//	{
//		printf("number is wrong");
//	}
//}

#include <stdio.h>

void main()
{
	char ch;
	
	printf("Enter a ch\n");
	
	scanf("%c",&ch);
	
//	printf("%c",ch);
	
	(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')?printf("vowel"):printf("consonant");
}
