#include "main.h"

int prime(int n, int x);
/**
 * is_prime_number - prints prime of a given number
 * @n: value of integer
 * Return: returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime(n, n - 1));
	_putchar('\n');
}

/**
 * prime - checks for prime number
 * @n: value
 * @x: increament
 * Return: natural square root
 */

int prime(int n, int x)
{
	if (x == 0)
	return (1);
	if (n % x == 0 && x > 1)
	return (0);
	else
	return (prime(n, (x - 1)));
}
