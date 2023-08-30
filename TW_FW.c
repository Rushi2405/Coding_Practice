// find two Wheeler and four wheeler

#include <stdio.h>

void main()
{
	
	int v = 200;
	int w = 540;
	
	int Tw;
	int Fw;
	
	if(2<=w && w%2==0 && v<w)
	{
		Tw = v * 4 - w;
		Tw = Tw / 2;
		Fw = v - Tw;
		
		printf("The total Tw are = %d\nThe total Fw are = %d\n",Tw,Fw);
		
		
		
		if ((Tw * 2)+(Fw * 4) == 540)
		{
			printf("Correct\n");
		}
		else
		{
			printf("Invalid Input");
		}
		
	}
	
	
	
}


