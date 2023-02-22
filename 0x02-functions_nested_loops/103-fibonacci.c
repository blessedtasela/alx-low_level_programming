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
	int i, num1 = 0, num2 = 1, fb, sum = 0;

		for (i = 1 ; i <= 4000000 ; i++)
		{
		fb = num1 + num2;
		num1 = num2;
		num2 = fb;
		if (fb > 4000000)
		break;
		if (fb % 2 == 0)
		sum = sum + fb;
		}
		printf("%d", sum);
		printf("\n");
		return (0);
}
