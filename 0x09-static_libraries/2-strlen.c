#include "main.h"

/**
 * _strlen - returns length of string
 * @s: variable to be used
 * Return: return lengt of char
 */

int _strlen(char *s)
{
	int j;

	j = 0;
	while (*s != '\0')
	{
	j = j + 1;
	s++;
	}
	return (j);
}
