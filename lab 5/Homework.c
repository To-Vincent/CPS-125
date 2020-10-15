#include <stdio.h>

int 
main(void)
{
	int i, pollutant;
	double array[4], gram, odo, permit, carbon, hydrocarbons, nitrogen, nonmethane;

	printf("(1) Carbon monoxide \n(2) Hydrocarbons \n(3) Nitrogen \n(4) Nonmethane hydrocarbons.\n");
	printf("Enter pollutant number>> ");
	scanf("%d", &pollutant);
	printf("\nEnter number of grams emitted per mile>> ");
	scanf("%lf", &gram);
	printf("\nEnter odometer reading>> ");
	scanf("%lf", &odo);
	
	if (odo <= 50000)
	{
		carbon = 3.4;
		hydrocarbons = 0.31;
		nitrogen = 0.4;
		nonmethane = 0.25;
	} else
	{
		carbon = 4.2;
		hydrocarbons = 0.39;
		nitrogen = 0.5;
		nonmethane = 0.31;	   	   
	}	   

	pollutant--;
	array[0] = carbon; 
	array[1] = hydrocarbons; 
	array[2] = nitrogen; 
	array[3] = nonmethane; 
	permit = array[pollutant]; 
	
	if (gram >= permit) 
	{
		printf("\nEmissions exceed permitted level of %.2lf grams/mile. \n", permit);
	} else
	{
		printf("\nEmissions are within the standard. ");
	}
	return(0);
}

