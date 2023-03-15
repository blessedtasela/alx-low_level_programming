#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* free_grid- function that frees memory allocated dynamically with malloc
* @grid: pointer to pointer address
* @height: array
* Return: returns null
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	free(grid[i]);

	free(grid);
}
