//// duck number
//
//#include<stdio.h>
//
//void main()
//{
//	int num;
//	int rem;
//	int flag =0;
//	
//	printf("Enter a number: \n");
//	scanf("%d",&num);
//	
//	while (num != 0)
//	{
//		rem = num % 10;
//		num /= 10;
//	//num = temp;
//	if (rem == 0)
//	{
//		flag = 1;
//		break;
//	}
//}
//	if(flag)
//	{
//		printf("Duck");
//	}
//	else
//	{
//		printf("Not duck");
//	}
//}


#include <stdio.h>

void main()
{
	int i,j,rem,flag =0,no,n;
	
	printf("Enter a number : \n");
	scanf("%d",&n);
	
	for(i = 1;i<=n;i++)
	{
		no = i;
		flag = 0;
		for(; no>0; )
		{
			rem = no % 10;
			no = no / 10;
			
			if(rem == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		{
			printf("\t%d",i);
		}
	}
	
	
}
