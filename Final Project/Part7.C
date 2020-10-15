#include <stdio.h>
#include <stdlib.h>
int
main(void)
{
	double alltemps[365][8];
	int i, j, sum_swim[6];
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

	
	for(i=2;i<8;++i)
	{
		for(j=0;j<365;++j)
		{
			if(alltemps[j][i]>20)
			
				sum_swim[i-2]++;
			
		}
	}
	printf("Lakes\t\t\tNumber of Swimming Days\n");
	printf("Lake Superior\t\t%d\n", sum_swim[0]);
	printf("Lake Michigan\t\t%d\n", sum_swim[1]);
	printf("Lake Huron\t\t%d\n", sum_swim[2]);
	printf("Lake Erie\t\t%d\n", sum_swim[3]);
	printf("Lake Ontario\t\t%d\n", sum_swim[4]);
	printf("Lake St Clair\t\t%d\n", sum_swim[5]);

	
	

		 
	return(0);
	
}
