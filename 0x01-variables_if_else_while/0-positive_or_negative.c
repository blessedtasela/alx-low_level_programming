#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* stdio for input and output function */

/**
* main: checks value of number if it's positive, negative or zero
* conditions: using  if, else-if, else statements
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
