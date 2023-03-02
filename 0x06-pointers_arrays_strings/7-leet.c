#include "main.h"
#include <stdio.h>

/**
 * leet -  function converts character to intger
 * @n: the character to convert
 * Return: converted characters
 */
char *leet(char *n)
{
	int i, j;
	char str1[] = "aAeEoOtTlL", str2[] = "4433007711";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
	for (j = 0 ; j < 10 ; j++)
	{
	if (n[i] == str1[j])
	n[i] = str2[j];
	}
	}
	return (n);
}
