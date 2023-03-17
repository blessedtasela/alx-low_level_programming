#include "main.h"
#include <stdlib.h>

/*
* main.h for input/output
*/

/**
* _realloc - function that reallocates memory
* @ptr: pointer to previously allocated memory
* @old_size: size for ptr
* @new_size: new allocated memory size
* Return: new size
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *newptr;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	newptr = malloc(new_size);
	if (newptr == NULL)
	return (NULL);

	return (newptr);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
	return (NULL);

	for (i = 0; i < old_size && i < new_size ; i++)
	newptr[i] = ((char *) ptr)[i];

	free(ptr);
	return (newptr);
}
