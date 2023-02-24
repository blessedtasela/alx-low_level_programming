#include "main.h"
/*
* main.h for input/output
*/

/**
* print_diagonal - prints n number of diagonals
* @n: number of diagonals to be printed
* Return: retuns 0 on success
*/

void print_diagonal(int n)
{
	int i, j;

	if (n != 0 || n > 0)
	{
	for (i = 0 ; i < n ; i++)
	{
	for (j = 0 ; j < i ; j++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	if (i == (n - 1))
	continue;
	_putchar('\n');
	}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
