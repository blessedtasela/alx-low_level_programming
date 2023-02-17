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
* main - puts: prints the value of a string of characters
*
* Return: the value of strcpy
*/
int main(void)
{
	char string[100];

	strcpy(string, "\"Programming is like building a multilingual puzzle");
	puts(string);
}
