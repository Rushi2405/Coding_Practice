// calculate gross sal

#include <stdio.h>

void main()
{
	int basic_sal;
	int HRA;
	int Da;
	
	float gross_sal;
	
	printf("Enter a basic_sal \n");
	scanf("%d",&basic_sal);
	
	//(basic <= 10000)?printf
	
	if(basic_sal <= 10000)
	{
		Da = basic_sal * 0.8;
		HRA = basic_sal * 0.2;
	}
	else if(basic_sal <= 20000)
	{
		Da = basic_sal * 0.9;
		HRA = basic_sal * 0.25;
	}
	else if(basic_sal > 20000)
	{
		Da = basic_sal * 0.95;
		HRA = basic_sal * 0.3;
	}
	else
	{
		printf("Invalid");
	}
	
	gross_sal = basic_sal + Da + HRA;
	
	printf("The gross sal is = %.2f  \n",gross_sal);
	
//	(basic_sal <= 10000)?printf()

	
	
}
