#include "main.h"

/**
 * puts2 - returns array of even numbers
 * @s: variable to be used
 * Return: return arrayof char
 */

void puts2(char *s)
{
	while (*s != '\0')
	{
	if (*s % 2 == 0)
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
