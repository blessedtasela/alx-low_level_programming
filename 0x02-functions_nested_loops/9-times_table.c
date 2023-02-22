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
	int k, a, i = 9;
	
	for (a = 0 ; a < 10 ; a++)
	{
	_putchar(a + '0');
	for (i = 0 ; i < 10 ; i++)
	{
		a = i + 1;
		k = i * a;
		_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	}
}
