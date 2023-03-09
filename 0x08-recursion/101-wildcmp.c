#include "main.h"
/**
 * wildcmp - comparestrings
 * @s1: first value of string
 * @s2: second value
 * Return: returns 1 on true, 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}
	if (*s2 == '*')
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
	_putchar('\n');
}
