#include "main.h"
/*
* main.h for input/output
*/

/**
* _memcpy - function that copies the first n bytes of the memory area
* @dest: memory that holds pointer
* @n: number of bytes to be filled
* @src: value
* Return: returns a pointer to memory s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = n;

	for (; i < j ; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
