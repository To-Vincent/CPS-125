#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct lake_ {
	char lakeName[50];
	double averageTemp;
} lake ;

int main()
{
	/*Declaring structures for lakes and their temps*/

	int year, day;
	int i;
	int j;
	double tempLakeSup, tempLakeMich, tempLakeHuron, tempLakeErie, tempLakeOnt, tempLakeStClr;
	int rows;
	int totalDays;
	lake allLakes[6];
	lake tmp;

	/*Declaring structures for lakes and their temps*/
	lake lakeSup = { "Lake Superior", 0 };
	lake lakeMich = { "Lake Michigan", 0 };
	lake lakeHuron = { "Lake Huron", 0 };
	lake lakeErie = { "Lake Erie", 0 };
	lake lakeOnt = { "Lake Ontario", 0 };
	lake lakeStClr = { "Lake St. Clair", 0 };

	FILE *WaterTemperatureData;

	WaterTemperatureData = fopen("WaterTemperatureData.txt", "r");

	totalDays = 0;
	for (rows = 0; rows <= 365; rows++)
	{
		//read whole record at once
		fscanf(WaterTemperatureData, "%d %d %lf %lf %lf %lf %lf %lf", &year, &day, &tempLakeSup, &tempLakeMich, &tempLakeHuron, &tempLakeErie, &tempLakeOnt, &tempLakeStClr);
		
		if (rows >= 1 && rows <= 79)
			{
				//store sum of all temps into .averageTemp. will calculate average later on
				lakeSup.averageTemp += tempLakeSup;
				lakeMich.averageTemp += tempLakeMich;
				lakeHuron.averageTemp += tempLakeHuron;
				lakeErie.averageTemp += tempLakeErie;
				lakeOnt.averageTemp += tempLakeOnt;
				lakeStClr.averageTemp += tempLakeStClr;
	
				totalDays++;
			}
		if(rows >= 355 && rows <= 365)
			{
				//store sum of all temps into .averageTemp. will calculate average later on
				lakeSup.averageTemp += tempLakeSup;
				lakeMich.averageTemp += tempLakeMich;
				lakeHuron.averageTemp += tempLakeHuron;
				lakeErie.averageTemp += tempLakeErie;
				lakeOnt.averageTemp += tempLakeOnt;
				lakeStClr.averageTemp += tempLakeStClr;
	
				totalDays++;
			}
		else
			continue;
	}
	
	//calculate average
	lakeSup.averageTemp /= totalDays;
	lakeMich.averageTemp /= totalDays;
	lakeHuron.averageTemp /= totalDays;
	lakeErie.averageTemp /= totalDays;
	lakeOnt.averageTemp /= totalDays;
	lakeStClr.averageTemp /= totalDays;

	//make array of all lakes as bubble sort works on array
	//NOTE: this makes array of copies of lake info
//	lake allLakes[] = { lakeSup, lakeMich, lakeHuron, lakeErie, lakeOnt, lakeStClr };
	allLakes[0] = lakeSup;
	allLakes[1] = lakeMich;
	allLakes[2] = lakeHuron;
	allLakes[3] = lakeErie;
	allLakes[4] = lakeOnt;
	allLakes[5] = lakeStClr;

	/*Bubble sorting the Array of structs*/

	//Bubble sort, see https://hackr.io/blog/bubble-sort-in-c
	for (i = 0; i < 6; i++) // loop n times - 1 per element
	{
		for (j = 0; j < 6 - i - 1; j++) // last i elements are sorted already  
		{          
			if (allLakes[j].averageTemp < allLakes[j + 1].averageTemp) // swap if order is broken
			{
				tmp = allLakes[j];
				allLakes[j] = allLakes[j + 1];
				allLakes[j + 1] = tmp;
			}
		}
	}
	/*Printing The Output*/
	printf("Winter Average Sorted From Warmest to Coldest:\n");
	for (i = 0; i < 6; i++)
	{
		printf("%-15s %-.2lf\n", allLakes[i].lakeName, allLakes[i].averageTemp);
	}


}
