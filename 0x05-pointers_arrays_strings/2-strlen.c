#include "main.h"

/**
 * _strlen - returns length of string
 * @s: variable to be used
 * Return: return lengt of char
 */

int _strlen(char *s)
{
	int i, j;

	for (i = 0 ; i < s[i] ; i++)
	{
	if (s[i] != '\0')
	j = j + 1;
	else
	break;
	}
	return (j);
}
