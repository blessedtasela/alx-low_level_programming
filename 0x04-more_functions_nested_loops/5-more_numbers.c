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
	int i, j;

	for (j = 0 ; j < 10 ; j++)
	{
	for (i = 0 ; i < 15 ; i++)
	{
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
	}
}
