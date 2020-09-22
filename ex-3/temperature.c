#include <stdio.h>
#include <stdlib.h>

void read_values(const char* filename, int* temperatures, unsigned count)
{
	unsigned i;
	char value[100];
	FILE* file;
	file = fopen(filename, "r");
	if(!file)
	{
		printf("Failed to open file: %s, Abort.", filename);
		exit(0);
	}
	
	for (i = 0; i < count ; ++i)
	{
		if(fgets(value, sizeof(value), file)) 
		{
			temperatures[i] = atoi(value);
		}
		else 
		{
			printf("Failed to read values, aborting.");
			exit(0);
		}
	}

	fclose(file);
}

int average_temperature(int* temperatures, int count)
{
	int i;
	int sum = 0;
	for(i = 0; i < count; ++i)
	{
		sum += temperatures[i];
	}
	return sum / count;
}

int main() 
{
	const unsigned MONTHS = 12;
	const char* months[] = {"January", "February", "March", "April", "May", "June",
							  "July", "August", "September", "October", "November", "December"};
	const unsigned days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	unsigned i;
	int average;
	int* temperatures;
	for(i = 0; i < MONTHS; ++i)
	{
		temperatures = (int*)malloc(days[i] * sizeof(int));
		read_values(months[i], temperatures, days[i]);
		average = average_temperature(temperatures, days[i]);
		free(temperatures);
		printf("Average temperature for %s is %d\n", months[i], average);
	}

	return 0;
}