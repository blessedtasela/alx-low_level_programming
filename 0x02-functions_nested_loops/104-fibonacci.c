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
	int i;
	long int num1 = 0, num2 = 1, fb;

		for (i = 1 ; i <= 98 ; i++)
		{
		fb = num1 + num2;
		num1 = num2;
		num2 = fb;
		printf("%lu", fb);
		if (i < 98)
		printf(", ");
		}
		printf("\n");
		return (0);
}
