#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: first parameter
 * @src: second parameter
 * @n: value of byte
 * Return: returns the strings appended to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (len < n && src[len] != '\0')
	{
	dest[len] = src[len];
	len++;
	}
	while (len < n)
	{
	dest[len] = '\0';
	len++;
	}

	return (dest);
}
