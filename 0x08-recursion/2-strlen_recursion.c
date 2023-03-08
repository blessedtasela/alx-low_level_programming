#include "main.h"

/**
 * _puts_recursion - uses recursion to print string
 * @s: value of char
 * Return: returns 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
