#include <stdio.h> 

int 
main(void)
{
	int n1, n2, n3;
	
	printf("Type three integers; ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("average = %d", (n1+n2+n3)/3);
	
	return(0);
	
}
