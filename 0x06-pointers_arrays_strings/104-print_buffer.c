#include "main.h"
#include <stdio.h>
/**
* print_buffer - prints buffer
* @b: parameter to store buffer
* @size: size of parameter
* Return: returns b
*/
void print_buffer(char *b, int size)
{
	int i, x = 0, j, y;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (x < size)
	{
	j = size - x < 10 ? size - x : 10;
	printf("%08x: ", x);
	for (i = 0 ; i < 10 ; i++)
	{
	if (i < j)
	printf("%02x", *(b + x + i));
	else
	printf("  ");
	if (i % 2)
	printf(" ");
	}
	for (i = 0 ; i < j ; i++)
	{
	y = *(b + x + i);
	if (y < 32 || y > 132)
	y = '.';
	printf("%c", y);
	}
	printf("\n");
	x = x + 10;
	}
}
