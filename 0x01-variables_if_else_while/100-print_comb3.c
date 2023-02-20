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
* main - prints possible combination of numbers less than 100
*
* description: uses for loop, putchar
*
* Return: the value of strcpy
*/
int main(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i ; j < 10 ; j++)
		{
		if (i < j)
		{
		putchar('0' + i);
		putchar('0' + j);
		if (i == 8 && j == 9)
		break;
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
