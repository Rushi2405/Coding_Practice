 // finds roots of quadratic equation

# include <stdio.h>
# include <math.h>

void main()
{
	float a;
	float b;
	float c;
	
	float discriminant;
	float root1 , root2;
	
	printf("Enter the values \n");
	
	scanf("%f%f%f",&a,&b,&c);
	
	discriminant = b*b - 4*a*c;
	
//	printf("discriminant %d",discriminant); 
	
	if (discriminant > 0)
	{
		
		root1 = (-b + sqrt(discriminant)) / 2 * a;
		
		root2 = (-b - sqrt(discriminant)) / 2 * a;
		
		printf("Root1 is = %f\n",root1);
		printf("Root2 is = %f\n",root2);

	}
	
	else if(discriminant == 0)
	{
		root1 = - b / (2 * a);
		root2 = - b / (2 * a);
		
		printf("Root1 is = %f\n",root1);
		printf("Root2 is = %f\n",root2);
		
	}
	
	else
	{
		printf("Given root is not come");
	}
	
}
	
	
	

