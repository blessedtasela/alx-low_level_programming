#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first parameter
 * @s2: second parameter
 * Return: returns the strings value
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (s1[len] != '\0' && s2[len] != '\0')
	{
	if (s1[len] != s2[len])
	{
	return (s1[len] - s2[len]);
	}
	len++;
	}

	return (0);
}
