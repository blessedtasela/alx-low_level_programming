#include "main.h"

/**
 * print_rev - returns array of string in reverse order
 * @s: variable to be used
 * Return: return arrayof char
 */

void rev_string(char *s)
{
	int i, count = 0;
	char rev = s[0];

	while (s[count] != '\0')
	{
	count++;
	}
	for (i = 0 ; i < count ; i++)
	{
	count--;
	rev = s[i];
	s[i] = s[count];
	s[count] = rev;
	}
}
