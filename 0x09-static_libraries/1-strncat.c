#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: value of byte
 * Return: returns the two strings appended to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
	len++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++, len++)
	{
	dest[len] = src[i];
	}

	return (dest);
}
