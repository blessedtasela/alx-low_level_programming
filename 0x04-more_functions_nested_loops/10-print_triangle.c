#include "main.h"
/*
* main.h for input/output
*/

/**
* print_triangle - prints n number of diagonals
* @size: number of diagonals to be printed
* Return: retuns 0 on success
*/

void print_triangle(int size)
{
	int i = 1, j;

	while (i <= size && size > 0)
	{
	j = 0;
	while(j < size - i)
	{
	_putchar(' ');
	j++;
	}
	j = 0;
	while (j < i)
	{
	_putchar('#');
	j++;
	}
	_putchar('\n');
	i++;
	}
	if (i == 1)
	_putchar('\n');
}
