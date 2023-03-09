#include "main.h"

/**
 * _pow_recursion - multiply a number by it's given power
 * @x: value to be multiplied
 * @y: power value
 * Return: returns 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y == 0)
	return (1);
	else
	return (x * _pow_recursion(x, (y - 1)));
	_putchar('\n');
}
