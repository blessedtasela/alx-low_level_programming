#include <stdio.h>
#include <string.h>
#include <stderr.h>

/*
* stdio libary for input and output
*
* string library for char and puts function
*
* main - Entry point
*
*/

/**
* main - printf: prints the value of a string of characters
*
* Return: the value of printf
*/
int main(void)
{
	char a;
	int b = sizeof(b);
	long int c = sizeof(c);
	long long int d = sizeof(d);
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of a long int: %ld byte(s)\n", c);
	printf("Size of a long long int: %lld byte(s)\n", d);
	printf("Size of a float: %zu byte (s)\n", sizeof(e));
	return (0);
}
