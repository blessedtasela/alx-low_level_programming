#include "main.h"

/**
 * _strlen_recursion - uses recursion to print length of string
 * @s: value of char
 * Return: returns 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != i)
	{
	i = _strlen_recursion(s + 1);
	i++;
	}
	return (i);
	_putchar('\n');
}
