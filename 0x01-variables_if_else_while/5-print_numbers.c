#include <stdio.h>
#include <string.h>

/*
* stdio libary for input and output
*
* main - Entry point
*
*/

/**
* main - prints the numbers 0 - 9
*
* description: uses for loop, printf function
*
* Return: reurns 0 on success
*/
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
