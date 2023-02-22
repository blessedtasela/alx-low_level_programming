#include "main.h"
/*
* main.h for input/output
*/

/**
* print_last_digit - prints last value
* @a: value to be printed
* description: function definition set for procedure
* Return: retun a
*/

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
	b = -b;
	_putchar(b + '0');
	return (b);
}
