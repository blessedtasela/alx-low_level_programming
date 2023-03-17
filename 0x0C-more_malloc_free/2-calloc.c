#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* _calloc - function that allocates memory to an array
* @nmemb: element of array
* @size: size
* Return: returns concatenated strings
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);

	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
	return (NULL);

	while (i < j)
	{
	ptr[i] = 0;
	i++;
	}
	return (ptr);
}
