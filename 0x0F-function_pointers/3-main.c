#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs function of multiple functions one at a time
 * @argc: arguement counter
 * @argv: array of arguement
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
	printf("Error! Arguements must be 4\n");
	exit(98);
	}
	operation = get_op_func(argv[2]);

	if (!operation)
	{
	printf("Error! Operation not allowed\n");
	exit(99);
	}

	result = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}

