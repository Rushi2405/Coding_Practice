// enter marks and calculate the total,avg and per

#include <stdio.h>

void main()
{
	int p,c,m;
	
	printf("Enter marks : \n");
	scanf("%d%d%d",&p,&c,&m);
	
	int totalMarks = p + c + m;
	
	printf("Total Marks : %d",totalMarks);
	
	int avg = totalMarks / 3;
	
	printf("The avg of marks : %d",avg);
	
	float per = (avg / 500) * 100;
	
	printf("Total percentage : %d",per);-
}
