#include "main.h"
#include <stdio.h>

/**
 * char *_strcpy - copy string pointer
 * @dest: first parameter
 * @src: second parameter
 * Return: return string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
	i++;
	}
	for ( ; j < i ; j++)
	dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
