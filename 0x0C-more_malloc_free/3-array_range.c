#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* array_range - function that creates an array of integers
* @min: min value
* @max: max value
* Return: returns concatenated strings
*/

int *array_range(int min, int max)
{
	int *x, i = 0;

	if (min > max)
	return (NULL);

	x = malloc((sizeof(int) * (max - min)) * sizeof(int));
	if (x == NULL)
	return (NULL);

	while (min <= max)
	{
	x[i] = min;
	i++;
	min++;
	}
	return (x);
}
