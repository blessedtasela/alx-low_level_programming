#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: value of integer
 * Return: returns 0
 */

int factorial(int n)
{
	int i = 0;

	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	else
	i = n * factorial(n - 1);
	return (i);
	_putchar('\n');
}
