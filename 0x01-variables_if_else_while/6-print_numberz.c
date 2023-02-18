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
* main - putchar: prints the number 0 - 9
*
* description: uses putchar function
*
* Return: the value of strcpy
*/
int main(void)
{
	char i;
	char line = '\n';

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
	}
	putchar(line);
	return (0);
}
