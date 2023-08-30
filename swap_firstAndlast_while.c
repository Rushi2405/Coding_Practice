//
//// swap first and last
//
//#include <stdio.h>
//
//void main()
//{
//	int first,last;
//	int num;
//	int total_digit,rem=0,rev = 0,count = 0,i = 0;
//	printf("Enter a num\n");
//	scanf("%d",&num);
//	
//	last = num % 10;
//	
//	printf("last = %d\n",last);
//	num /= 10;
//	printf("num = %d\n",num);
//	
//	while(num != 0)
//	{
//		rem = num % 10;
//		rev = rev * 10 + rem;
//		num /= 10;
//		count++;
//		
//	}
//	printf("reverse num = %d\n and count = %d\n",rev,count);
//	
//	first = rev % 10;
//	
//	
//	printf("first = %d\n",first);
//	
//	rev/= 10;
//	num = rev;
//	
//	printf("num is %d\n",num);
//	rev = 0;
//	
//	
//	while (num!=0)
//	
//	{
//		rem = num % 10;
//		num/=10;
//		rev =  rev *10 + rem;
//		
//	}
//	printf("rev is = %d\n",rev);
//	
//	// power logic
//	
//	while(i <= count)
//	{
//		last *= 10;
//		i++;
//	}
//	printf("last digit is = %d\n",last);
//	
//	rev = rev *10;
//	printf("rev = %d\n",rev);
//	
//	last += rev;
//	
//	printf("last = %d",last);
//	
//	last+=first;
//	
//	printf("last = %d",last);	
//}


