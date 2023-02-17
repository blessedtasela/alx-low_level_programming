#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* stdio for input and output function
* Main - Entry Point
*/

/**
* main - checks value of last random number using modulo (%)
* description: checks value of random number
* Return: always retuns 0 on success
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, digit);
	}
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	return (0);
}
