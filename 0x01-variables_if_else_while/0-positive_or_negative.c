#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* stdio for input and output function
* main - Entry point
*/

/**
* main - checks value if its positive, negative, or zero
* description: checks value of random number
* Return: always retuns 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	printf("%d is negative\n", n);
	return (0);
}
