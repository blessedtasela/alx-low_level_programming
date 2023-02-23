#include "main.h"
/*
* main.h for input/output
*/

/**
* print_diagonal - prints n number of \
* @n: number of \ to be printed
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i < n ; i++)
	{
	for (j = 0 ; j < n ; j++)
	{
	i = i + 1;
	_putchar('\\');
	}
	_putchar('\n');
	_putchar(' ');
	j = j - 1;
	}
	_putchar('\n');
}
