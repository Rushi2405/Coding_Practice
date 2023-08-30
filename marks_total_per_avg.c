// enter marks and calculate the total,avg and per

#include <stdio.h>

void main()
{
	int p,c,m;
	
	printf("Enter marks : \n");
	scanf("%d%d%d",&p,&c,&m);
	
	int totalMarks = p + c + m;
	
	printf("Total Marks : %d\n",totalMarks);
	
	int avg = totalMarks / 3;
	
	printf("The avg of marks : %d\n",avg);
	
	double per = (totalMarks / 300.0) * 100;
	
	printf("Total percentage : %lf",per);
}
