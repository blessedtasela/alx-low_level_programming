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
* main - print sum of multiples 3 and 5
* description: uses for loop and if statement
* Return: return 0 on success
*/
int main(void)
{
	int i, sum = 0;

		for (i = 0 ; i < 1024 ; i++)
		{
		if ((i % 3 == 0) || (i % 5 == 0))
		sum = sum + i;
		}
		printf("%d", sum);
		printf("\n");
		return (0);
}
