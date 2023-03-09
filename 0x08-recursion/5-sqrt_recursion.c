#include "main.h"

int sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - prints square root of a given number
 * @n: value of integer
 * Return: returns 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (sqrt_recursion(n, 0));
	_putchar('\n');
}

/**
 * sqrt_recursion - gets natural sqare root of number
 * @n: value
 * @x: increament
 * Return: natural square root
 */

int sqrt_recursion(int n, int x)
{
	if (x * x > n)
	return (-1);
	if (x * x == n)
	return (x);
	return (sqrt_recursion(n, (x + 1)));
}
