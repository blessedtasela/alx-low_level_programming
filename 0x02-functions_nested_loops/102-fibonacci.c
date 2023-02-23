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
* main - print fibonnaci number of 50
* description: uses for loop and if statement
* Return: return 0 on success
*/
int main(void)
{
	int i;
	long int num1 = 0, num2 = 1, fb;

		for (i = 1 ; i <= 50 ; i++)
		{
		fb = num1 + num2;
		num1 = num2;
		num2 = fb;
		printf("%lu", fb);
		if (i < 50)
		printf(", ");
		}
		printf("\n");
		return (0);
}
