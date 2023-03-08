#include <unistd.h>

/**
 * _putchar - prints character of i
 *
 * @i: uses _putchar function to print i
 *
 * Return: retuns character on success
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
