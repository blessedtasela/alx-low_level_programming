#include "main.h"
#include <stdio.h>

/**
 * rot13 -  function encrypts string using ROT13
 * @n: the character to convert
 * Return: encrypted string
 */
char *rot13(char *n)
{
	int i, j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
	for (j = 0 ; j < 52 ; j++)
	{
	if (n[i] == str1[j])
	{
	n[i] = str2[j];
	break;
	}
	}
	}
	return (n);
}
