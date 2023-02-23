#include "main.h"
/*
* main.h for input/output
*/

/**
* print_line - prints n number of lines
* @n: number of lines to be printed
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
	_putchar('_');
	i++;
	}
	_putchar('\n');
}
