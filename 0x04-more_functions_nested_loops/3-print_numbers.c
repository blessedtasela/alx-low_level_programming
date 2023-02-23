#include "main.h"
/*
* main.h for input/output
*/

/**
* print_numbers - from a to z fuction definition
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
	_putchar((i % 10) + '0');
	i++;
	}
	_putchar('\n');
}
