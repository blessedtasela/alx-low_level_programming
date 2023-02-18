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
* description: uses continue function to skip letters
*
* Return: the value of strcpy
*/
int main(void)
{
	char i;
	char line = '\n';

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == 'e')
		{
		continue;
		}
		else if (i == 'q')
		{
		continue;
		}
		else
		{
		putchar(i);
		}
	}
	putchar(line);
	return (0);
}
