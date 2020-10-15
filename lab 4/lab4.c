#include <stdio.h>

	int main (void)
{
	/* Variables */
 	int a1, a2, t1, t2, totalsum;
	double avg;
	char grade;
	
 	/* ask for user input*/
 	printf ("Enter 4 different evaluation marks (0 to 100): ");
    scanf ("%d%d%d%d", &a1, &a2, &t1, &t2);
	printf ("The marks that were inputted were\n Assignment 1: %d\n Assignment 2: %d\n Test 1: %d\n Test 2: %d\n", a1, a2, t1, t2);
	
	/* calculations*/ 
	
	totalsum = a1 + a2 + t1 +t2;
	avg = totalsum/4;
	
	printf ("Your average is %3.2lf\n", avg);
	
	/* determine letter grade */ 

	while (t1 <50)
		{
		grade = 'F';
		printf ("Your letter grade for the class is an %s ", &grade);
		return (0);
		}     
	while (t2 <50)
		{
		grade = 'F';
		printf ("Your letter grade for the class is an %s ", &grade);
		return (0);
		} 
		    
	if (avg >= 80)
		{
			while (a1 || a2 <50)
			{
		 		grade = 'B';
		 		printf ("Your letter grade for the class is an %s ", &grade);
		 		return(0);
			}
		grade = 'A';
		printf ("Your letter grade for the class is an %s ", &grade);
		}
		
	else if (avg >= 70)
		{
			while (a1 || a2 <50)
			{
			grade = 'C';
			printf ("Your letter grade for the class is an %s ", &grade);
		 	return(0);
			}
		grade = 'B';
			printf ("Your letter grade for the class is an %s ", &grade);
		}
		
	else if (avg >= 60)
		{
			while (a1 || a2 <50)
			{
		 		grade = 'D';
			 	printf ("Your letter grade for the class is an %s ", &grade);
		 		return(0);
			}
		grade = 'C';
		printf ("Your letter grade for the class is an %s ", &grade);
		}
		
	else if (avg >= 50)
		{
			while (a1 || a2 <50)
			{
		 	grade = 'F';
			printf ("Your letter grade for the class is an %s ", &grade);
		 	return(0);
			}
		grade = 'D';
		printf ("Your letter grade for the class is an %s ", &grade);
		}
	
	else 
		{
		grade = 'F';
			printf ("Your letter grade for the class is an %s ", &grade);
		}
		
	return (0);
}
	 

