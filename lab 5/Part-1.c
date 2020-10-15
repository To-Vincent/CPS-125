#include <stdio.h>

int
main(void)
{
	int ev1, ev2, ev3, ev4, a1, a2, t1, t2, sum; 
	double avg;
	char grade;
	
	/* Question 1 */
	printf("Assignment 1 mark: ");
	scanf("%d", &ev1); 
	printf("Assignment 2 mark: ");
	scanf("%d", &ev2); 
	printf("Test 1 mark: ");
	scanf("%d", &ev3); 
	printf("Test 2 mark: ");
	scanf("%d", &ev4); 
	   	      
	/* Question 2 */
	a1 = ev1;
	a2 = ev2; 
	t1 = ev3; 
	t2 = ev4;
	printf("Assignment 1 mark: %d \nAssignment 2 mark: %d \nTest 1 mark: %d \nTest 2 mark: %d \n", a1, a2, t1, t2);
	
	/* Question 3 */
	sum = a1 + a2 + t1 + t2;
	
	/* Question 4 */
	avg = sum/4.0;
	printf("Average mark: %.0lf \n", avg);

	/* Question 9 */ 
	if (a1<50 || a2<50)
	{
		avg = avg - 10;	   
	}
	
	/* Question 10 */
	if (t1<50 || t2<50)
	{
		avg = 49;
	}
		   
	/* Question 5 */
	if (avg >= 80) 
	{
		grade = 'A'; 
	} 
	
	/* Question 6 */
	else if (avg >= 70)
	{
		grade = 'B';
	}
	
	/* Question 7 */
	else if (avg >= 60)
	{
		grade = 'C'; 	 	 
	} 
	
	/* Question 8 */
	else if (avg >= 50)
	{
		grade = 'D'; 	 
	} else 
	{
		grade = 'F'; 
	}
	
	printf("Grade: %c\n", grade);	
	
	return(0); 
	
	
}

