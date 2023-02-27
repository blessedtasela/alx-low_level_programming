#include "main.h"

/**
 * _puts - returns array of string
 * @str: variable to be used
 * Return: return arrayof char
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
