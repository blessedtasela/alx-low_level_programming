#include "main.h"

/*
* stdio for input and output function
* main - Entry point
*/

/**
* positive_or_negative - checks value if its positive, negative, or zero
* @n: checks value
* Return: always retuns 0 on success
*/
void positive_or_negative(int n)
{
	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	printf("%d is positive\n", n);
}
