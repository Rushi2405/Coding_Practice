
#include <stdio.h>

void main()
{
	char ch;
	
	char b;
	
	printf("Enter a digit\n");
	scanf("%c",&ch);
	
	printf("%c",ch);
		
//	(ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)?printf("alphabet"):(ch >= 48 && ch <= 57)?printf("digit"):printf("spl char");

	(ch >= 65 && ch <= 90 )?printf("Up"):(ch >= 97 && ch <= 122)?printf("low"):printf("no");
}
