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
* description: uses for loop
*
* Return: the value of strcpy
*/
int main(void)
{
	char i, j;
	char line = '\n';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar(line);
	return (0);
}
