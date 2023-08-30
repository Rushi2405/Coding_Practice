// find the third angle

#include <stdio.h>

void main()
{
	int T1;
	int T2;
	int total_Size = 180;
	int T3=0;
	
	printf("Enter a sides of triangle\n");
	scanf("%d%d",&T1,&T2);
	
	int sum = T1 + T2;// 60+60 =120
	
//	printf("%d",sum);
	T3 = total_Size - sum;// t3=180-120
	
	printf("Third side of triangle is = %d",T3);
	
	
	
	
}
