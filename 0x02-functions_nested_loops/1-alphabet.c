#include "main.h"
/*
* main.h for input/output
*/

/**
* print_alphabet - from a to z fuction definition
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
