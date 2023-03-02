#include "main.h"
#include <stdio.h>

/**
 * string_toupper -  function converts lowercase to uppercase
 * @n: the character to convert
 * Return: uppercase
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;
	}
	return (n);
}
