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
* jack_bauer - procedure used and defined in main.h
* description: prints hours of time from 00:00 to 23:59
* Return: the value of strcpy
*/
void times_table(void)
{
	int table, a, i, j = 0;
	
	for (a = 0 ; a < 10 ; a++)
	{
	for (i = 0 ; i < 10 ; i++)
	{
		
		table = i * j;
		if (table / 10 == 0)
		{
		_putchar(' ');
		_putchar((table % 10) + '0');
		}
		else
		{
		_putchar((table / 10) + '0');
		_putchar((table % 10) + '0');
		}
		if (i != 9)
		{ 
		_putchar(',');
		_putchar(' ');
		}
	}
	j = j + 1;
	_putchar('\n');
	}
}
