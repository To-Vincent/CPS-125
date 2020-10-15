#include <stdio.h>
#include <stdlib.h>
int
main(void)
{
	double alltemps[365][8], sum[6], average[6], totalaverage, totalsum;
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

	fclose(WaterTemperatureData);
	for(i=2; i<8; ++i)
	{	 
		for(j=0; j<365; ++j)
		{
			sum[i-2]+=alltemps[j][i];
			totalsum+=alltemps[j][i];									
		}
		
		average[i-2]=(sum[i-2])/(365);	  
	}
	
	
	totalaverage=(totalsum)/(6*365);
	printf("Lakes\t\t\tAverage Temperatures\n");
	printf("Lake Superior\t\t%3.2lf\n",average[0]);
	printf("Lake Michigan\t\t%3.2lf\n", average[1]);
	printf("Lake Huron\t\t%3.2lf\n", average[2]);
	printf("Lake Erie\t\t%3.2lf\n", average[3]);
	printf("Lake Ontario\t\t%3.2lf\n", average[4]);
	printf("Lake St Clair\t\t%3.2lf\n", average[5]); 
	printf("\nThe total average of all lakes is %3.2lf.", totalaverage);

		 
	return(0);
	
}
