#include "main.h"
/*
* main.h for input/output
*/

/**
* print_alphabet_x10 - from a to z 10 times fuction definition
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_alphabet_x10(void)
{
	int j, i;

	for (j = 0 ; j < 10 ; j++)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
	}
}
