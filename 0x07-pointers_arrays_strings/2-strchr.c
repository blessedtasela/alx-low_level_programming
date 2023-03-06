#include "main.h"
/*
* main.h for input/output
*/

/**
* _strchr - function that searches for a character in a string
* @s: string 
* @c: value to be searched
* Return: returns 0 on success
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
