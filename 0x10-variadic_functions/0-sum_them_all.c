#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all given parameter and returns the sum
 * @n: The number of parameters given to the function
 * @...: Variable number of parameters to calculate the sum
 * Return: returns 0 if n == 0, otherwise returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum = sum + va_arg(ap, int);

	va_end(ap);
	return (sum);
}
