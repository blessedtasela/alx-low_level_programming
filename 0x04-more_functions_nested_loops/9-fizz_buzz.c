#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 and replace some with 'fizzbuzz'
 * description: uses for loop, multiples of 3 and 5
 * Return: returns 0 on success
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	continue;
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	continue;
	}
	else if (i % 5 == 0)
	{
	printf("Buzz ");
	continue;
	}
	else
	{
	printf("%d", i);
	}
	if (i != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
