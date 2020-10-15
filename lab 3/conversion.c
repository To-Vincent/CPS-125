#include <stdio.h>

	int
	main (void)
{
	/* variables*/
	int dis1, dis2, dis3, dis4;
	double yards, miles, yar1, yar2, yar3, yar4, mile1, mile2, mile3, mile4;
	
	/*user input*/
	printf ("Enter 4 different distances in meters: ");
	scanf ("%d%d%d%d", &dis1, &dis2, &dis3, &dis4);
	printf ("The distances you chose were %dm %dm %dm %dm\n", dis1, dis2, dis3, dis4);
	
	/* conversion*/
	yards = 1.094;
	miles = 0.0006215;
	
	/* calculations*/
	yar1 = dis1 * yards;
	yar2 = dis2 * yards;
	yar3 = dis3 * yards;
	yar4 = dis4 * yards;
	
	mile1 = dis1 * miles;
	mile2 = dis2 * miles;
	mile3 = dis3 * miles;
	mile4 = dis4 * miles;
	
	/*output*/
	printf("Meters         Yards          Miles\n");
	printf("------         -----          -----\n");
	printf("%dm           %3.1lfft        %3.3lf miles\n%dm           %3.1lfft        %3.3lf miles\n%dm           %3.1lfft        %3.3lf miles\n%dm           %3.1lfft        %3.3lf miles\n",dis1, yar1, mile1, dis2, yar2, mile2, dis3, yar3,mile3, dis4, yar4, mile4);

	return (0);
}

