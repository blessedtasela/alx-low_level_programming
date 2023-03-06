#include "main.h"
/*
* main.h for input/output
*/

/**
* _memset - function that fills the first n bytes of the memory area
* @b: value to be entered
* @n: number of bytes to be filled
* @s: memory that holds pointer
* Return: returns a pointer to memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
