#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* _strdup- function that duplicates a string with malloc
* @str: string value
* Return: returns duplicated string
*/

char *_strdup(char *str)
{
	int i = 1, a = 0;
	char *s;

	if (str == 0)
	return (NULL);

	while (str[i])
	i++;
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	return (NULL);
	while (a < i)
	{
	s[a] = str[a];
	a++;
	}
	s[a] = '\0';
	return (s);
}
