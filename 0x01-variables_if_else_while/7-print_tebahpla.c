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
* description: uses putchar function
*
* Return: the value of strcpy
*/
int main(void)
{
	unsigned char i = 0x64;
	char line = '\n';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar(line);
	return (0);
}
