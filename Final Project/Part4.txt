#include <stdio.h>
#include <stdlib.h>

	    
int main(void)
{
	double alltemps[365][8], warmest[6],warmestday[6],warmestmonth[6], coldest[6], coldestday[6],coldestmonth[6], warmestlake[6], coldestlake[6];
	int i, j;

	FILE*WaterTemperatureData;
																									/*  j=rows
																										i=columns
																									*/
	WaterTemperatureData=fopen("WaterTemperatureData.txt", "r");
	
	for(j=0;j<365;++j)
	{
		for(i=0;i<8;++i)
		{
	
	   		fscanf(WaterTemperatureData, "%lf", &alltemps[j][i]);
		}
	
	}
	
	/* determine warmest temp out of all lakes*/

	for(i=2; i<8; ++i)
	{	 
		for(j=0; j<365; ++j)
		{
			if (alltemps[j][i] > warmestlake[i-2])
			{
				warmestlake[i-2] = alltemps[j][i];
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
		warmestday[i-2] = warmestday[i-2] - 243;
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

printf("Dates will be printed out in Month/Day format\n");

if (warmestlake[0] > warmestlake[1] && warmestlake[0] > warmestlake[2] && warmestlake[0] > warmestlake[3] && warmestlake[0] > warmestlake[4] && warmestlake[0] > warmestlake[5])
	{
		printf("\n");
		printf("The warmest lake is lake superior at %2.2lf degrees on %0.0lf/%0.0lf\n", warmestlake[0],warmestmonth[0],warmestday[0]);
	}
	else if (warmestlake[1] > warmestlake[0] && warmestlake[1] > warmestlake[2] && warmestlake[1] > warmestlake[3] && warmestlake[1] > warmestlake[4] && warmestlake[1] > warmestlake[5])
	{
		printf("\n");
		printf("The warmest lake is lake michigan at %2.2lf degrees  on %0.0lf/%0.0lf\n", warmestlake[1],warmestmonth[1],warmestday[1]);
	}
	else if (warmestlake[2] > warmestlake[0] && warmestlake[2] > warmestlake[1] && warmestlake[2] > warmestlake[3] && warmestlake[2] > warmestlake[4] && warmestlake[2] > warmestlake[5])
	{
		printf("\n");
		printf("The warmest lake is lake huron at %2.2lf degrees on %0.0lf/%0.0lf\n", warmestlake[2],warmestmonth[2],warmestday[2]);
	}
	else if (warmestlake[3] > warmestlake[0] && warmestlake[3] > warmestlake[2] && warmestlake[3] > warmestlake[1] && warmestlake[3] > warmestlake[3] && warmestlake[3] > warmestlake[5])
	{
		printf("\n");
		printf("The warmest lake is lake erie at %2.2lf degrees on %0.0lf/%0.0lf\n", warmestlake[3],warmestmonth[3],warmestday[3]);
	}
	else if (warmestlake[4] > warmestlake[0] && warmestlake[4] > warmestlake[2] && warmestlake[4] > warmestlake[3] && warmestlake[4] > warmestlake[1] && warmestlake[4] > warmestlake[5])
	{
		printf("\n");
		printf("The warmest lake is lake ontario  at %2.2lf degrees on %0.0lf/%0.0lf\n", warmestlake[4],warmestmonth[4],warmestday[4]);
	}
	else if (warmestlake[5] > warmestlake[0] && warmestlake[5] > warmestlake[2] && warmestlake[5] > warmestlake[3] && warmestlake[5] > warmestlake[4] && warmestlake[5] > warmestlake[1])
	{
		printf("\n");
		printf("The warmest lake is lake st.clair at %2.2lf degrees on %0.0lf/%0.0lf\n", warmestlake[5],warmestmonth[5],warmestday[5]);
	}
	
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
		coldestday[i-2] = coldestday[i-2] - 334;
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
	
	
	/* output statements */
	if(coldest[0] < coldest[1] && coldest[0] < coldest[2] && coldest[0] < coldest[3] && coldest[0] < coldest[4] && coldest[0] < coldest[5])
	{
	printf("\n");
	printf("The coldest lake is lake superior at %2.2lf degrees on %0.0lf/%0.0lf",coldest[0],coldestmonth[0],coldestday[0]);
	}
	else if (coldest[1] < coldest[0] && coldest[1] < coldest[2] && coldest[1] < coldest[3] && coldest[1] < coldest[4] && coldest[1] < coldest[5])
	{
	printf("\n");
	printf("The coldest lake is lake michigan at %2.2lf degrees on %0.0lf/%0.0lf",coldest[1],coldestmonth[1],coldestday[1]);
	}
	else if (coldest[2] < coldest[0] && coldest[2] < coldest[1] && coldest[2] < coldest[3] && coldest[2] < coldest[4] && coldest[2] < coldest[5])
	{
	printf("\n");
	printf("The coldest lake is lake Huron at %2.2lf degrees on %0.0lf/%0.0lf",coldest[2],coldestmonth[2],coldestday[2]);
	}
	else if (coldest[3] < coldest[0] && coldest[3] < coldest[1] && coldest[3] < coldest[2] && coldest[3] < coldest[4] && coldest[3] < coldest[5])
	{
	printf("\n");
	printf("The coldest lake is lake Erie at %2.2lf degrees on %0.0lf/%0.0lf",coldest[3],coldestmonth[3],coldestday[3]);
	}	 		   	     
	else if (coldest[4] < coldest[0] && coldest[4] < coldest[1] && coldest[4] < coldest[3] && coldest[4] < coldest[2] && coldest[4] < coldest[5])
	{
	printf("\n");
	printf("The coldest lake is lake Huron at %2.2lf degrees on %0.0lf/%0.0lf",coldest[4],coldestmonth[4],coldestday[4]);
	}
	else if (coldest[5] < coldest[0] && coldest[5] < coldest[1] && coldest[5] < coldest[3] && coldest[5] < coldest[2] && coldest[5] < coldest[4])
	{
	printf("\n");
	printf("The coldest lake is lake Huron at %2.2lf degrees on %0.0lf/%0.0lf",coldest[5],coldestmonth[5],coldestday[5]);
	}	 		   	  
		return(0);
}
