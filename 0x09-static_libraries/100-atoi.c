#include "main.h"

/**
 * _atoi - returns array of string in reverse order
 * @s: variable to be used
 * Return: return arrayof char
 */

int _atoi(char *s)
{
	unsigned int i = 0, count = 0, num = 0, min = 1;

	while (s[count])
	{
	if (s[count] == 45)
	{
	min = min * -1;
	}
	while (s[count] >= 48 && s[count] <= 57)
	{
	num = 1;
	i = (i * 10) + (s[count] - '0');
	count++;
	}
	if (num == 1)
	{
	break;
	}
	count++;
	}
	i = i * min;
	return (i);
}
