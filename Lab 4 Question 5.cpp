#include <stdio.h>
#include <conio.h>
int main()
{
	int initialunits,units1,units2;
	float bill;
	printf("Enter the number of units \n");
	scanf("%d",&initialunits);
	if (initialunits>0 && initialunits<=50)
	{
		bill = initialunits*0.50;
	}
	else if (initialunits>50 && initialunits<=150)
	{
		bill=50*0.50;
		units1=initialunits-50;
		bill=bill+(units1*0.75);
	}
	else if (initialunits>150 && initialunits<=250)
	{
		bill=50*0.50;
		bill=bill+(100*0.75);
		units1=initialunits-150;
		bill=bill+(units1*1.20);
	}
	else if (initialunits>250)
	{
		bill=50*0.50;
		bill=bill+(100*0.75);
		bill=bill+(100*1.20);
		units1=initialunits-250;
		bill=bill+(units1*1.50);
	}
	bill=bill*1.2;
	printf("Your bill is %f \n",bill);
	return 0;
}
	
