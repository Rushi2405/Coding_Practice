////printf even or odd upto nth number
//
//#include <stdio.h>
//
//void main()
//{
//	int num;
//	printf("Enter a series upto print even or odd numbers\n");
//	scanf("%d",&num);
//	
//	int i = 1;
//	
//	while (i <= num)
//	{
//		if(i %2 == 0)
//		{
//			printf("Even numbers = %d\t",i);
//		
//		}
//		
//		else{
//				printf("Odd numbers = %d\t",i);
//		}
//		i++;	
//	}
//	
//}


#include <stdio.h>

void main()
{
	int num;
	int even = 0;
	int odd = 0;
	
	printf("Enter a series upto print even or odd number\n");
	scanf("%d",&num);
	
	int i = 1;
	printf("Even numbers are :\n");
	
	while(i <= num)
	{
		if(i % 2 == 0)
		{
			printf(" %d \n",i);
		//	even++;
		}
		i++;
	}
	printf("Odd numbers : \n");
	i = 1;
	while (i <= num)
	{
		if(i%2==1)
		{
			printf(" %d ",i);
		//	odd++;
		}
		i++;
	}
	
//	printf("Total even numbers are = %d",even);
//	printf("Total odd numbers are = %d",odd);
//	
}
