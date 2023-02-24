#include <stdio.h>

/**
 * main - prints largest prime number void
 *
 * Descrition: arithmetic and logical operation
 *
 * Return: 0 on success
 */

int main(void)
{
	long int num = 612852475143;
	long int divisor = 2;
	long int large_prime = 0;

	while (num != 1)
	{
	if (num % divisor == 0)
	{
	num = num / divisor;
	large_prime = divisor;
	}
	divisor++;
	}
	printf("%ld\n", large_prime);
	return (0);
}
