#include "main.h"

/**
 * puts2 - returns array of even numbers
 * @s: variable to be used
 * Return: return arrayof char
 */

void puts2(char *s)
{
	int str, i, j = 0;
	char *x = s;

	while (*x != '\0')
	{
	x++;
	str++;
	}
	j = str - 1;
	for (i = 0 ; i <= j ; i++)
	{
	if (i % 2 == 0)
	_putchar(s[i]);
	}
	_putchar('\n');
}
