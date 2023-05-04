#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: number to be converted
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int value;

	for (i = 63; i >= 0; i--)
	{
	value = n >> i;
	if (value & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
	}
	if (!count)
	_putchar('0');
}
