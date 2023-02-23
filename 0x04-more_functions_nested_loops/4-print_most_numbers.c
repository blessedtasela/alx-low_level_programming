#include "main.h"
/*
* main.h for input/output
*/

/**
* print_most_numbers - from a to z fuction definition
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
	if (i == 2 || i == 4)
	continue;
	_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
