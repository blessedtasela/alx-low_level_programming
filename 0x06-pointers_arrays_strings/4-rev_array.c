#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that prints array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, x;

	i = 0;
	while (i < n--)
	{
	x = a[i];
	a[i] = a[n];
	a[n] = x;
	i++;
	}
}
