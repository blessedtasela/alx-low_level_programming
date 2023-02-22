#include "main.h"
#include <stdio.h>

/*
* stdio libary for input and output
*
* string library for char and puts function
*
* main - Entry point
*
*/

/**
* print_to_98 - print numbers in range
* @n: number to be printed
* Return: return numbers up to 98 in ascending and descending order
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
		printf("%d", i);
		if (i != 98)
		printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
		printf("%d", i);
		if (i != 98)
		printf(", ");
		}
		printf("\n");
	}
}
