#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* create_array- function that creates an array with malloc
* @size: size of array
* @c: characters or values of array
* Return: returns 0 on success
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
	return (NULL);
	for (i = 0 ; i < size ; i++)
	s[i] = c;
	return (s);
}
