#include <stdio.h>
#include <unistd.h>

/*
* stdio libary for input and output
*
* unistd for stand error output
*
* main - Entry point
*
*/

/**
* main - prints string to standard error
*
* description: uses fputs
*
* Return: the value 1 on success
*/
int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
