#include <unistd.h>

/**
 * _isupper - prints character of i
 *
 * @i: uses _isupper function to print i
 *
 * Return: retuns character on success
 */

int _isupper(char i)
{
	return (write(1, &i, 1));
}
