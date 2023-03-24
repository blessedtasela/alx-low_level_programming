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
	char *str, *separator = "";
	va_list list;
	int i;

	va_start(list, format);

	i = 0;
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
			if (str == NULL)
			printf("(nil)");
			printf("%s%s", separator, str);
			break;
			default:
			i++;
		}
		separator = ", ";
		i++;
		}
	printf("\n");
	va_end(list);
}
