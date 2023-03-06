#include "main.h"
/*
* main.h for input/output
*/

/**
* print_chessboard - function that prints values of chessboard
* @a: array of char
* Return: returns 0 on success
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
	for (j = 0 ; j < 8 ; j++)
	_putchar(a[i][j]);
	_putchar('\n');
	}
}
