#include <stdio.h>

	int
	main (void)
{
	/* Variables */
 	int num1, num2, num3, num4, totalsum, totaldiff;
	double quotient, conversion;
	
 	/* ask for user input*/
 	printf ("Enter 4 different numbers: ");
    scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);
	printf ("The numbers you chose were %d %d %d %d\n", num1, num2, num3, num4);
	
	/* calculations */
	
	/*sum*/
	totalsum = num1 + num2 + num3 + num4;
	printf ("The sum of the four numbers is:%d\n", totalsum);
	
	/*difference*/
	totaldiff = num1 + num2 - num3 - num4;
	printf ("The difference of the first two numbers minus the second two numbers is:%d\n", totaldiff);
	
	/*quotient*/
	conversion = 1.0;
	totalsum = totalsum * conversion;
    quotient = sqrt(totalsum)/totalsum;
	printf ("the value of the quotient is %3.4lf\n", quotient);
	
	
	return (0);
}
	 

