#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
* main.h for input/output
*/

/**
* malloc_checked - function that allocates memory
* @b: size
* Return: NULL
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);
	return (ptr);
}
