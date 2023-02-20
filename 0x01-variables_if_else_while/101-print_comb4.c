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
* main - prints possible combination of 3 digit numbers
*
* description: uses for loop, putchar
*
* Return: the value of strcpy
*/
int main(void)
{
	int i, j, k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
		for (k = j + 1 ; k < 10 ; k++)
		{
		if (i < j && i < k)
		{
		putchar('0' + i);
		putchar('0' + j);
		putchar('0' + k);
		if (i == 7 && j == 8 && k == 9)
		break;
		putchar(',');
		putchar(' ');
		}
		}
		}
	}
	putchar('\n');
	return (0);
}
