#include <stdio.h>

	
int main (void) {
 /* variables */
	int pollutant_number = 0;
	double grams_emitted;
	double odometer_reading;
	
	/* user menu */
	printf("(1) Carbon monoxide");
	printf("\n(2) Hydrocarbons");
	printf("\n(3) Nitrogen Oxides");
	printf("\n(4) Nonmethane hydrocarbons");
	
	/* accept user input */
	printf("\nEnter pollutant number>> ");
	scanf ("%d", &pollutant_number);
	
	/* error check for valid input*/
	while (pollutant_number < 1 || pollutant_number > 4 ) 
	{
		printf("Try again");
		printf("\nEnter pollutant number>> ");
		scanf("%d", &pollutant_number);
	}
	
	/* accept more user input */
	printf("\nEnter number of grams emitted per mile>> ");
	scanf("%lf", &grams_emitted);
	printf("\nEnter odometer reading>> ");
	scanf("%lf", &odometer_reading);
	
	/* enter switch statement */ 
	switch(pollutant_number) {
	
		case 1: {
			if ((grams_emitted <= 3.4) && (odometer_reading <= 50000.0))
				printf("\nEmissions passed permitted level of 3.4 grams/mile");
			else if ((grams_emitted <= 4.2) && (odometer_reading >= 50000.0))
				printf("\nEmissions passed permitted level of 4.2 grams/mile");
			else  {
				if (odometer_reading <= 50000.0)
					printf("\nEmissions exeed permitted level of 3.4 grams/mile");
				else
					printf("\nEmissions exceed permitted level of 4.2 grams/mile");
				}
			break;
		}
		
		case 2: {
				if ((grams_emitted <= 0.31) && (odometer_reading <= 50000.0))
				printf("\nEmissions passed permitted level of 0.31 grams/mile");
			else if ((grams_emitted <= 0.39) && (odometer_reading >= 50000.0))
				printf("\nEmissions passed permitted level of 0.39 grams/mile");
			else  {
				if (odometer_reading <= 50000.0)
					printf("\nEmissions exeed permitted level of 0.31 grams/mile");
				else
					printf("\nEmissions exceed permitted level of 0.39 grams/mile");
				}
			break;
		}
		
		case 3: {
			if ((grams_emitted <= 0.4) && (odometer_reading <= 50000.0))
				printf("\nEmissions passed permitted level of 0.4 grams/mile");
			else if ((grams_emitted <= 0.5) && (odometer_reading >= 50000.0))
				printf("\nEmissions passed permitted level of 0.5 grams/mile");
			else  {
				if (odometer_reading <= 50000.0)
					printf("\nEmissions exeed permitted level of 0.4 grams/mile");
				else
					printf("\nEmissions exceed permitted level of 0.5 grams/mile");
				}
			break;
		}
		
		case 4: {
			if ((grams_emitted <= 0.25) && (odometer_reading <= 50000.0))
				printf("\nEmissions passed permitted level of 0.25 grams/mile");
			else if ((grams_emitted <= 0.31) && (odometer_reading >= 50000.0))
				printf("\nEmissions passed permitted level of 0.31 grams/mile");
			else  {
				if (odometer_reading <= 50000.0)
					printf("\nEmissions exeed permitted level of 0.25 grams/mile");
				else
					printf("\nEmissions exceed permitted level of 0.31 grams/mile");
				}
			break;
		}
			
	}
	return (0);

}

