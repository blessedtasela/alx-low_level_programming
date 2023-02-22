#include "main.h"
/*
* main.h for input/output
*/

/**
* print_sign - checks for alphabets
* description: function definition set for procedure
* @n: charcter to be checked
* Return: retun 1 if +,  0 if 0, and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	else
		{
		_putchar('-');
		return (-1);
		}

}
