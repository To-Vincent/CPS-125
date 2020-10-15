#include <stdio.h>

	int main (void)
{
	/* variables */
	int a;
	
	/* accept user input */
	
	do
	{
	printf("Enter a number ");
	scanf("%d", a);
	printf("%d\n",a);
	}
	while (a < 10);
	
	
	return(0);
}

