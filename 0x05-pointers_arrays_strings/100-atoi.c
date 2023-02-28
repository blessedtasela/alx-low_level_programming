#include "main.h"

/**
 * _atoi - returns array of string in reverse order
 * @s: variable to be used
 * Return: return arrayof char
 */

int _atoi(char *s)
{
	int i = 0, count = 0, a = 0, b = 0, c = 0, num = 0;

	while (s[count] != '\0')
	{
	count++;
	}
	while (i < count && c == 0)
	{
	if (s[i] >= '0' && s[i] <= '9')
	num = s[i] = '0';
	if (a % 2)
	{
	num = -num;
	c = c * 10 + num;
	b = 1;
	if (s[i + 1] < '0' || s[i + 1] > '0'
	break;
	b = 0;
	}
	i++;
	}
	if (f == 0)
	return (0);
	return (c);
}
