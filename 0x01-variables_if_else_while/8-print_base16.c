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
* main - putchar: prints the alpabets in lower case
*
* description: uses putchar function to print hexadecimal values
*
* Return: the value of strcpy
*/
int main(void)
{
	char i, j;
	char line = '\n';

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	for (j = 'a' ; j <= 'f' ; j++)
	{
		putchar(j);
	}
	putchar(line);
	return (0);
}
