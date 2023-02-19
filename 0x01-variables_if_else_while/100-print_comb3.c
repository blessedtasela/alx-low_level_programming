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
* main - putchar: prints the numbers 0 - 9
*
* description: uses for loop
*
* Return: the value of strcpy
*/
int main(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
		putchar('0' + j);
		if (((j && i) > (j && i) - 1))
		{
		putchar('0' + i);
		}
		if (i == 9 && j == i-1)
		break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
