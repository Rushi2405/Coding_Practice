// Chef is watching TV. The current volume of the TV is XX. Pressing the   volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. Chef wants to change the volume from XX to YY. Find the minimum number of button presses required to do so
//The first and only line of each test case contains two integers XX and YY - the initial volume and final volume of the TV
//Output Format
//For each test case, output the minimum number of times Chef has to press a button to change the volume from XX to YY.


#include <stdio.h>

void main()
{
	int initial;
	int final;
	
	printf("Enter a volume for initial and final\n");
	scanf("%d%d",&initial,&final);
	
	(initial > final) ? printf("volume will be decrease by %d", initial - final) :
		printf("Volume will be increase by %d",final - initial);
}
