#include <stdio.h>
#include <math.h>
#define PI 3.14159265
	int main (void)
{
	/* Variables */
 	int num;
	double fact, rootpt, rootslv;
	
	/* ask for user input*/
 	printf ("Enter a positive interger: ");
    scanf ("%d", &num);
	
	/* calculations */
	rootpt = (1.0/3.0) + (2*num);
	rootslv = sqrt(rootpt*PI);
	fact = (pow(num,num)*exp(-num)) * rootslv;
	
	/*output result*/
	printf ("n! is approximately equal to %3.4lf\n", fact);
	return (0);
}

