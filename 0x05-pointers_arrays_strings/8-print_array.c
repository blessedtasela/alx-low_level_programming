#include "main.h"
#include <stdio.h>

/**
 * print_array - returns numbr of elements of an array
 * @a: name of array
 * @n: number of array elements
 * Return: return array of a and n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1) ; i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == n - 1)
	printf("%d", a[n - 1]);
	printf("\n");
}
