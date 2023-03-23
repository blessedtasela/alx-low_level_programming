#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: string that separates each string
 * @n: number of strings passed to the function
 * @...: varaidic number of strings to be printed
 * Return: nothing. if separator is null, nothing is printed, if one
 * of the strings is null, then '(nil)' is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(string, char *);
	if (str == NULL)
	printf("(nil");
	else
	printf("%s", str);

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
