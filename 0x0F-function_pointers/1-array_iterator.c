#include "function_pointers.h"

/**
 * array_iterator - function that performs action on each element of array
 * @array: array of integers
 * @action: pointer to function
 * @size: size of array
 * Return: return nothing
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	size_t i;

	if (array && action)
	{
	i = 0;
	while (i < size)
	{
	action(array[i]);
	i++;
	}
	}
}
