#include "main.h"

/**
* print_number - prints number of given input
* @n: number to be printed
* Return: the value of number
*/
void print_number(int n)
{
		if (n / 10 == 0 && n == 0)
		_putchar(n + '0');
		else if (n / 10 == 0)
		{
		_putchar((n % 10) + '0');
		}
		else if (n / 100 == 0)
		{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		}
		else if (n >= 100)
		{
		_putchar('0' + n / 100);
		_putchar('0' + (n - 100) / 10);
		_putchar('0' + n % 10);
		}
		else if (n >= 10000)
		{
		_putchar('0' + n / 100);
		_putchar('0' + (n - 100) / 10);
		_putchar('0' + n % 10);
		}
		else if (n / 10 <= 0)
		_putchar('D');
		else
		_putchar('D');
}
