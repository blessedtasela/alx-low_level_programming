#include "main.h"
/*
* main.h for input/output
*/

/**
* main - prints '_putchar'
*
* description: uses _putchar function
*
* Return: retuns 0 on success
*/

void print_alphabet(void)
{
	int i='a';

	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
}
