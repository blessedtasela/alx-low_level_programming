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
	char *str, *sep = "";
	int i = 0;

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
		switch (format[i])
		{
			case 'c':
			printf("%s%c", sep, va_arg(list, int));
			break;
			case 'i':
			printf("%s%d", sep, va_arg(list, int));
			break;
			case 'f':
			printf("%s%f", sep, va_arg(list, double));
			break;
			case 's':
			str = va_arg(list, char *);
			if (!str)
			str = "(nil)";
			printf("%s%s", sep, str);
			break;
			default:
			i++;
			continue;
		}
		sep = ", ";
		i++;
		}
		}
	va_end(list);
	printf("\n");
}
