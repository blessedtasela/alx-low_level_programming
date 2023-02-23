#include "main.h"
/*
* main.h for input/output
*/

/**
* print_square - prints n number of #
* @size: number of squares to be printed
* description: function definition set for procedure
* Return: retuns 0 on success
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0 ; i < size ; i++)
	{
	for (j = 0 ; j < size ; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
