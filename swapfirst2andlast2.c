
// swap first two and last two digit

#include <stdio.h>

void main()
{
	int num;
	
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	int i,j,rem,k;
	int first,mid,last;
	int count = 0;
	int index;
	
	for(i = num;num>=1;num=num/10)
	{
		count++;
	}
	k = count;
	printf("%d\n",k);
	last = num % 100;
	
	num /= 100;
	
	printf("last :%d\n",last);
	printf("num:%d\n",num);
	
	first = num / 100;
	
	
	printf("first :%d\n",first);
//	
//	printf("num :%d\n",num);
	
	int a ,b;
	a = num % 10;
	num /= 10;
	
//	printf("a: %d\n",a);
//	printf("num: %d\n",num);
	
	b = num % 10;
	num /= 10;
	
//	printf("b: %d\n",b);
//	printf("num: %d\n",num);
//	
	a = a + b;
	b = a - b;
	a = a - b;
	
//	printf("a: %d\n",a);
//	printf("b: %d\n",b);
	
	mid = a*10 + b;
//	printf("mid: %d\n",mid);
	
	int ans;
	index = pow(10,k-2);
	printf("index:%d",index);
	
	ans = last * 10000 + mid * 100 + first;
	
	printf("Final ans : %d",ans);


	
	
	
	
	
	
	
}
