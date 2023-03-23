#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcode of this program
 * @add: address of the main function
 * @num: number of bytes to print
 * Return: returns nothing
 */

void print_opcodes(char *add, int num)
{
	int i;

	for (i = 0 ; i < num ; i++)
	{
	printf("%.2hhx", add[i]);
	printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcode of it's own function (main)
 * @argc: number of arguements
 * @argv: array of pointers of arguement
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
	printf("Error! Arguement must be 2\n");
	exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
	printf("Error! Operation failed\n");
	exit(2);
	}

	print_opcodes((char *) &main, n);

	return (0);
}
