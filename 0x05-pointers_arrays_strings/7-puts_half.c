#include "main.h"

/**
 * puts_half - returns half of
 * @s: variable to be used
 * Return: return arrayof char
 */

void puts_half(char *str)
{
	int string = 0, i, j;

	for ( i = 0 ; str[i] != '\0' ; i++)
	{
	string++;
	}
	j = string / 2;
	if (string % 2 == 1)
	j = (string + 1) / 2;
	for (i = j ; str[i] != '\0' ; i++)
	_putchar(str[i]);
	_putchar('\n');
}
