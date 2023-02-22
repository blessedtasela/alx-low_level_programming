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
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
		if (i < j)
		{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
		}
		}
	}
}
