#include <stdio.h>
#include <string.h>

/*
* stdio libary for input and output
*
* string library for char and puts function
*
* main - Entry point
*
*/

/**
* main - prints possible combination of numbers less than 100 two-two digits
*
* description: uses for loop, putchar
*
* Return: returns 0 on sucess
*/
int main(void)
{
	int i, j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
		if (i < j)
		{
		putchar((j / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((i / 10) + '0');
		putchar((j % 10) + '0');
		if (i == 98 && j == 99)
		break;
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
