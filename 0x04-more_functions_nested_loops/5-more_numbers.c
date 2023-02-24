#include "main.h"
/*
* main.h for input/output
*/

/**
* more_numbers - prints number from 0 to 14 10times
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void more_numbers(void)
{
	int i, j, x;

	for (j = 0 ; j < 11 ; j++)
	{
	for (i = 0 ; i < 15 ; i++)
	{
	x = i;
	if (i > 9)
	{
	_putchar('1');
	x = i % 10;
	}
	_putchar(x + '0');
	}
	_putchar('\n');
	}
}
