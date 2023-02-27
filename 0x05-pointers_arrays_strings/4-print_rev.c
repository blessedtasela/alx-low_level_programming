#include "main.h"

/**
 * print_rev - returns array of string in reverse order
 * @s: variable to be used
 * Return: return arrayof char
 */

void print_rev(char *s)
{
	int i, rev = 0;

	while (*s != '\0')
	{
	rev = rev + 1;
	s++;
	}
	s--;
	for (i = rev ; i > 0 ; i--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
