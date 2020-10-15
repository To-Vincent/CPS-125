#include <stdio.h>
#include <stdlib.h>
int
main(void)
{
	double alltemps[365][8], sum[6], average[6], totalaverage, totalsum, largest, smallest;
	int i, j, smallest_lake_index,largest_lake_index, higher_average_index, smaller_average_index;
	char lakes[6][9]={ "Superior", "Michigan", "Huron", "Erie", "Ontario", "St Clair"};
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
	printf("\n\nThe total average is %3.2lf\n\n", totalaverage);

	
	largest=average[0];
	

	for(i=0;i<6;++i)
	{	 
		if(largest<average[i])
		{
		
			largest=average[i];
			largest_lake_index=i;
		}
	}
		
	
	smallest=average[0];
	
	
	for(i=0;i<6;++i)
	{
	
		if(smallest>average[i])
		{
			smallest=average[i];
			smallest_lake_index=i;
		}	 
	}	 
	
	
	
	printf("Lake %s had the warmest average temperature of %3.2lf\n",lakes[largest_lake_index], largest);
	printf("Lake %s had the coldest average temperature of %3.2lf\n\n",lakes[smallest_lake_index], smallest);	    
	
	for(i=0;i<6;++i)
	{
		if(average[i]>totalaverage)
		{
			higher_average_index=i;
			printf("Lake %s is above the total average.\n", lakes[higher_average_index]);
		}
	}	 
	
	printf("\n");
	for(i=0;i<6;++i)
	{
		if(average[i]<totalaverage)
		{
			smaller_average_index=i;
			printf("Lake %s is below the total average.\n", lakes[smaller_average_index]);
		}
	}
	
return 0;
}
