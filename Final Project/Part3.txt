#include <stdio.h>
#include <stdlib.h>

	    
int main(void)
{
/* variables */
	double alltemps[365][8], warmest[6],warmestday[6],warmestmonth[6], coldest[6], coldestday[6], coldestmonth[6];
	int i, j;

	FILE*WaterTemperatureData;

	WaterTemperatureData=fopen("WaterTemperatureData.txt", "r");
	
	for(j=0;j<365;++j)
	{
		for(i=0;i<8;++i)
		{
	   		fscanf(WaterTemperatureData, "%lf", &alltemps[j][i]);
		}
	
	}

	/* determine warmest temp for each lake */
	for(i=2; i<8; ++i)
	{	 
		for(j=0; j<365; ++j)
		{
			if (alltemps[j][i] > warmest[i-2])
			{
				warmest[i-2] = alltemps[j][i];
				warmestday[i-2] = alltemps[j][1];
				
	/* date conversion */
	if (warmestday[i-2] <= 365 && warmestday[i-2] >= 334)
	{
		warmestmonth[i-2] = 12;
		warmestday[i-2] = warmestday[i-2] - 334;
	}
	else if (warmestday[i-2] <= 333 && warmestday[i-2] >= 304)
	{
		warmestmonth[i-2] = 11;
		warmestday[i-2] = warmestday[i-2] - 304;
	}
	else if (warmestday[i-2] <= 303 && warmestday[i-2] >= 273)
	{
		warmestmonth[i-2] = 10;
		warmestday[i-2] = warmestday[i-2] - 273;
	}
	else if (warmestday[i-2] <= 272 && warmestday[i-2] >= 243)
	{
		warmestmonth[i-2] = 9;
		warmestday[i-2] = warmestday[i-2] - 242;
	}
	else if (warmestday[i-2] <= 242 && warmestday[i-2] >= 212)
	{
		warmestmonth[i-2] = 8;
		warmestday[i-2] = warmestday[i-2] - 212;
	}
	else if (warmestday[i-2] <= 211 && warmestday[i-2] >= 181)
	{
		warmestmonth[i-2] = 7;
		warmestday[i-2] = warmestday[i-2] - 181;
	}
	else if (warmestday[i-2] <= 180 && warmestday[i-2] >= 151)
	{
		warmestmonth[i-2] = 6;
		warmestday[i-2] = warmestday[i-2] - 151;
	}
	else if (warmestday[i-2] <= 150 && warmestday[i-2] >= 120)
	{
		warmestmonth[i-2] = 5;
		warmestday[i-2] = warmestday[i-2] - 120;
	}
	else if (warmestday[i-2] <= 119 && warmestday[i-2] >= 90)
	{
		warmestmonth[i-2] = 4;
		warmestday[i-2] = warmestday[i-2] - 90;
	}
	else if (warmestday[i-2] <= 89 && warmestday[i-2] >= 59)
	{
		warmestmonth[i-2] = 3;
		warmestday[i-2] = warmestday[i-2] - 59;
	}
	else if (warmestday[i-2] <= 58 && warmestday[i-2] >= 32)
	{
		warmestmonth[i-2] = 2;
		warmestday[i-2] = warmestday[i-2] - 32;
	}
	else if (warmestday[i-2] <= 31)
	{
		warmestmonth[i-2] = 1;
	}	     	     	     	   	   	   	   
			}
			
		}
	}

	/* output statements */ 
	printf("Date will be printed out in Month / Day format\n\n");	      	    	 
	printf("Warmest Temperature of Lake Superior is %2.2lf on %0.0lf/%0.0lf\n", warmest[0],warmestmonth[0],warmestday[0]);
	printf("Warmest Temperature of Lake Michigan is %2.2lf on %0.0lf/%0.0lf\n", warmest [1],warmestmonth[1],warmestday[1]);
	printf("Warmest Temperature of Lake Huron is %2.2lf on %0.0lf/%0.0lf\n", warmest [2],warmestmonth[2],warmestday[2]);
	printf("Warmest Temperature of Lake Erie is %2.2lf on %0.0lf/%0.0lf\n", warmest [3],warmestmonth[3],warmestday[3]);
	printf("Warmest Temperature of Lake Ontario is %2.2lf on %0.0lf/%0.0lf\n", warmest [4],warmestmonth[4],warmestday[4]);
	printf("Warmest Temperature of Lake St. Clair is %2.2lf on %0.0lf/%0.0lf\n", warmest [5],warmestmonth[5],warmestday[5]);
	  
	  
	/* determine coldest temp for each lake */
	for(i=2; i<8; ++i)
	{	 
		coldest[i-2] = alltemps[0][i];
		for(j=0; j<365; ++j)
		{
			
			if (alltemps[j][i] < coldest[i-2])
			{
				coldest[i-2] = alltemps[j][i];
				coldestday[i-2] = alltemps[j][1];
				
	/* date conversion */
	if (coldestday[i-2] <= 365 && coldestday[i-2] >= 334)
	{
		coldestmonth[i-2] = 12;
		coldestday[i-2] = coldestday[i-2] - 333;
	}
	else if (coldestday[i-2] <= 333 && coldestday[i-2] >= 304)
	{
		coldestmonth[i-2] = 11;
		coldestday[i-2] = coldestday[i-2] - 304;
	}
	else if (coldestday[i-2] <= 303 && coldestday[i-2] >= 273)
	{
		coldestmonth[i-2] = 10;
		coldestday[i-2] = coldestday[i-2] - 273;
	}
	else if (coldestday[i-2] <= 272 && coldestday[i-2] >= 243)
	{
		coldestmonth[i-2] = 9;
		coldestday[i-2] = coldestday[i-2] - 243;
	}
	else if (coldestday[i-2] <= 242 && coldestday[i-2] >= 212)
	{
		coldestmonth[i-2] = 8;
		coldestday[i-2] = coldestday[i-2] - 212;
	}
	else if (coldestday[i-2] <= 211 && coldestday[i-2] >= 181)
	{
		coldestmonth[i-2] = 7;
		coldestday[i-2] = coldestday[i-2] - 181;
	}
	else if (coldestday[i-2] <= 180 && coldestday[i-2] >= 151)
	{
		coldestmonth[i-2] = 6;
		coldestday[i-2] = coldestday[i-2] - 151;
	}
	else if (coldestday[i-2] <= 150 && coldestday[i-2] >= 120)
	{
		coldestmonth[i-2] = 5;
		coldestday[i-2] = coldestday[i-2] - 120;
	}
	else if (coldestday[i-2] <= 119 && coldestday[i-2] >= 90)
	{
		coldestmonth[i-2] = 4;
		coldestday[i-2] = coldestday[i-2] - 90;
	}
	else if (coldestday[i-2] <= 89 && coldestday[i-2] >= 59)
	{
		coldestmonth[i-2] = 3;
		coldestday[i-2] = coldestday[i-2] - 59;
	}
	else if (coldestday[i-2] <= 58 && coldestday[i-2] >= 32)
	{
		coldestmonth[i-2] = 2;
		coldestday[i-2] = coldestday[i-2] - 32;
	}
	else if (coldestday[i-2] <= 31)
	{
		coldestmonth[i-2] = 1;
	}	  	     	   	   	   	   	   	   
			}
		}
	}
	
	/* outout statements */
	printf("\n");
	printf("Coldest Temperature of Lake Superior is %2.2lf on %0.0lf/%0.0lf\n", coldest[0],coldestmonth[0],coldestday[0]);
	printf("Coldest Temperature of Lake Michigan is %2.2lf on %0.0lf/%0.0lf\n", coldest [1],coldestmonth[1],coldestday[1]);
	printf("Coldest Temperature of Lake Huron is %2.2lf on %0.0lf/%0.0lf\n", coldest [2],coldestmonth[2],coldestday[2]);
	printf("Coldest Temperature of Lake Erie is %2.2lf on %0.0lf/%0.0lf\n", coldest [3],coldestmonth[3],coldestday[3]);
	printf("Coldest Temperature of Lake Ontario is %2.2lf on %0.0lf/%0.0lf\n", coldest [4],coldestmonth[4],coldestday[4]);
	printf("Coldest Temperature of Lake St. Clair is %2.2lf on %0.0lf/%0.0lf\n", coldest [5],coldestmonth[5],coldestday[5]);	
	
	return(0);
}
