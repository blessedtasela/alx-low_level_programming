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
	int i, j, k;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 10 ; j < i ; j++)
		{
			for (k = j ; k < j ; k++)
			{
		putchar((j % 10) + '0');
		putchar((i % 10) + '0');
		if (i == 9 && j == i-1)
		break;
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
