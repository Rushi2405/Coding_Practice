//
////perfect num or not
//
//#include <stdio.h>
//
//void main()
//{
//	int num,sum =0,count=0;
//	int i= 1;
//	int temp ;
//	int flag = 0;
//	
//	printf("Enter a number: \n");
//	scanf("%d",&num);
//	
//	temp = num;
//	
//	while(i <= num)
//	{
//		if(num%i==0)
//		{
//			sum = sum + i;
//			//count++;	
//			i++;
//			num = num % 10;	
//		}
//	}
//	
//	
//	if(sum == num)
//	{
//		printf("Perfect");
//	}
//	else
//	{
//		printf("not Per");
//	}
//				
//	
//	//printf("Total sum is : %d\n",sum);
//	
//}


#include <stdio.h>

void main()
{
	int num,rem,i=1;
	int sum = 0;
	int temp = num;
	int count = 1;
	
	
	printf("Enter a number \n");
	scanf("%d",&num);
	
	while(count < num)
	{
		if(num % count == 0)
		{
			sum = sum + count;
		}
		count++;
	}
	if(num == sum)
	{
		printf("Perfect");
	}
	else
	{
		printf("Not perfect");
	}
	
}
