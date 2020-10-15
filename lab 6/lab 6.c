#include <stdio.h>

	int main (void)
{
	/* variables */
	int a;
	int b;
	int c;
	int larger;
	int largest;
	int smaller;
	int smallest;
	int middle;
	
	/* accept user input */
	printf ("Enter 3 numbers ");
	scanf("%d%d%d", &a, &b, &c);
	
	/*output values for a and b */
	printf ("first number %d\n", a);
	printf ("second number %d\n", b);
	printf ("third number %d\n", c);
	
	/* largest number comparision */
	
	if (a > b)
	{
		larger = a;
	}
		else
	{
		larger = b;
	}
		
		if (larger > c)
	{
		largest = larger;
	}
		else
	{
		largest = c;
	}
	
	/* smallest value comparision */
		if (a < b)
	{
		smaller = a;
	}
		else
	{
		smallest = b;
	}
	
	
		if (smaller < c)
	{
		smallest = smaller;
	}
		else
	{
		smallest = c;
	}
	
	/* middle number*/
	middle = a + b + c - smallest - largest;
	printf ("the largest number is %d\nthe middle number is %d\nthe smallest number is %d\n",largest, middle, smallest);
	
	return (0);
	}

