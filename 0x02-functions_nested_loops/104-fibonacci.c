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
* main - print numbers of fibonnaci of 98 starting with 1 and 2
* description: uses for loop and if statement
* Return: return 0 on success
*/
int main(void)
{
	int i, num1 = 0, num2 = 1, fb;

		for (i = 1 ; i <= 98 ; i++)
		{
		fb = num1 + num2;
		num1 = num2;
		num2 = fb;
		printf("%d, ", fb);
		}
		printf("\n");
		return (0);
}
