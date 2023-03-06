#include "main.h"
/*
* main.h for input/output
*/

/**
* _strspn - function that gets the length of a prefix substring
* @s: string
* @accept: value of substring
* Return: returns 0 on success
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
	for (i = 0 ; accept[i] ; i++)
	{
	if (*s == accept[i])
	{
	n++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (n);
	}
	s++;
	}
	return (n);
}
