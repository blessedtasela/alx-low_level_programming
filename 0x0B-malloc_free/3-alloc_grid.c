#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* alloc_grid - function that prints 2 dimensional array with malloc
* @width: first value
* @height: second value
* Return: returns duplicated string
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	return (NULL);

	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	return (NULL);

	for (i = 0 ; i < height ; i++)
	{
	s[i] = malloc(sizeof(int) * width);
	if (s[i] == NULL)
	{
	for (; i >= 0 ; i--)
	free(s[i]);

	free(s);
	return (NULL);
	}
	}
	for (i = 0 ; i < height ; i++)
	{
	for (j = 0 ; j < width ; j++)
	s[i][j] = 0;
	}
	return (s);
}
