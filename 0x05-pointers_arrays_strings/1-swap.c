#include "main.h"

/**
 * swap_int - converts integer to pointer and assign it's value
 * @a: variable to be converted
 * @b: variable to be converted
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
