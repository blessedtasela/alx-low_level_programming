#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @cmp: pointer to function to compare elements
 * @size: size of array / number of elements
 * Return: return nothing
 */

int int_index(int *array, int size, int (*cmp) (int))
{
	int i = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (i < size)
	{
	if (cmp(array[i]))
	return (i);
	i++;
	}
	}
	}
	return (-1);
}
