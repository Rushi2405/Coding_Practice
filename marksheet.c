#include <stdio.h>

void main()
{
	
	int phy,che,bio,math,comp;
	
	float percentage;
	int average;
	int total;
	
	printf("Enter a marks \n");
	
	scanf("%d\n%d\n%d\n%d\n%d",&phy,&che,&bio,&math,&comp);
	
	total = phy + che + bio + math + comp;
	
	printf("Total marks of student is = %d\n",total);
	
	percentage = (total / 5) * 100;
	
	printf("The total percentage of student is = %f\n",percentage);
	
	(percentage >= 90)?printf("Grade A"):(percentage >= 80)?printf("Grade B"):(percentage >= 70)?printf("Grade c"):(percentage >= 60)?printf("Grade D"):(percentage >= 40)?printf("Grade E"):printf("fail");
	
	
	
}
