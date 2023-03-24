#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints any datatype
 * @format: list of arguement types passed to the function
 * @...: variable to print given variable data
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", separator, va_arg(list, int));
			case 'i':
			printf("%s%d", separator, va_arg(list, int));
			case 'f':
			printf("%s%f", separator, va_arg(list, double));
			case 's':
			str = va_arg(list, char *);
			if (!str)
			str = "(nil)";
			printf("%s%s", separator, str);
			break;
			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(list);
}
