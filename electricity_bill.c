//// electricity bill
//
//#include <stdio.h>
//
//void main()
//{
//	int unit;
//	
//	float total_amount, sur_charge;
//	
//	printf("Enter a unit\n");
//	
//	scanf("%d",&unit);
//	
//	if(unit <= 50 && units >= 0)
//	{
//		total_amount = unit * 0.50;
//		
//		printf("Total charge of first 50 units are = %f",total_amount);
//	}
//	else if(unit > 50 && unit <= 150)
//	{
//		total_amount = ( unit * 0.75) + 0.2;
//		printf("Total charge of second 100 units are = %f",total_amount);
//	}
//	else if(unit > 150 || unit <= 250)
//	{
//		total_amount = (unit * 1.20) + 0.2;
//		printf("Total charge of next 100 units are = %f",total_amount);
//		
//	}
//	else if(unit > 250) 
//	{
//		total_amount = (unit * 1.50) + 0.2;
//		printf("Total charge of first 50 units are = %f",total_amount);
//	}
//	else
//	{
//		printf("Invaalid Input");
//	}
//	
//}



#include <stdio.h>

void main()
{
	int unit;
	int sum = 0;
	
	printf("Enter unit\n");
	scanf("%d",&unit);
	
	if(unit >= 250)
	{
		int x = unit - 250;
		sum = sum + (x * 1.5);
		unit = unit - x;
		
		if(unit >= 150)
		{
			int x = unit - 150;
			sum = sum +(x * 1.2);
			unit = unit - x;
			
			if(unit >= 50)
			{
				int x = unit - 50;
				sum = sum +(x * 0.75); 
				unit = unit - x;
			}
		}
	}
	sum = sum + unit * 0.5;
	
	int sur_charge = sum * 0.2;
	
	int final_bill = sum + sur_charge;
}
