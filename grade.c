// grade

#include <stdio.h>

void main()
{
	
	int mark_phy,mark_che,mark_math,mark_bio,mark_comp;
	
	double percentage;
	
	int avg;
	
	printf("Enter sub marks \n");
	scanf("%d%d%d%d%d",&mark_phy,&mark_che,&mark_math,&mark_bio,&mark_comp);
	
	int total_Marks = mark_phy + mark_che + mark_math + mark_bio + mark_comp;
	
	printf("The total marks of student is = %d   \n  ",total_Marks);
	
	
	avg = total_Marks / 5;
	
	printf("Average of student is = %d\n",avg);
	
	
	
	percentage = (  total_Marks / 500.0 ) * 100;
	
	
	printf("Percentage of student is = %lf\n",percentage);
	
	(percentage >= 90)?printf("grade A"):(percentage >= 80)?printf("grade B"):(percentage >= 70)?printf("grade c"):(percentage >= 50)?printf("grade D"):(percentage >= 40)?printf("grade E"):printf("fail");
	
	
}
