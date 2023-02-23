#include "main.h"

/*
* stdio libary for input and output
*
* string library for char and puts function
*
* main - Entry point
*
*/

/**
* print_times_table - prints timetable from 0 - 9
* description: prints hours of time from 00:00 to 23:59
* Return: the value of strcpy
*/
void print_times_table(int n)
{
	int table, a, i, j = 0;

	if (n <= 15 && n >=0)
	{
	for (a = 0 ; a <= n ; a++)
	{
	for (i = 0 ; i <= n ; i++)
	{
		table = i * j;
		if (table / 10 == 0 && i == 0)
		{
		_putchar(table + '0');
		}
		else if (table / 10 == 0)
		{
		_putchar(' ');
		_putchar(' ');
		_putchar((table % 10) + '0');
		}
		else if (table / 100 == 0)
		{
		_putchar(' ');
		_putchar((table / 10) + '0');
		_putchar((table % 10) + '0');
		}
		else
		{
		_putchar('0' + table / 100);
		_putchar('0' + (table - 100) / 10);
		_putchar('0' + table % 10);
		}
		if (i != n)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	j = j + 1;
	_putchar('\n');
	}
	}
}
