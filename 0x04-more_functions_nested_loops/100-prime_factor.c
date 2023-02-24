#include <stdio.h>

/**
 * main - prints largest prime number
 *
 * return: return 0 on success
 */

int main(void)
{
	long num = 612852247143;
	long divisor = 2;
	long large_prime = 0;

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
