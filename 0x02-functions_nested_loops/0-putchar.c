#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif
/*
* stdio.h for input/output
*/

/**
* main - prints '_putchar'
*
* description: uses puts function
*
* Return: retuns 0 on success
*/
int main(void)
{
	char test[] = "_putchar\n";

	_putchar(test);
	return (0);
}
