#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that adds two integers
 * @a: first value
 * @b: second value
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - functions that subracts first value from another
 * @a: first value
 * @b: second value
 * Return: returns the remaining value after substraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: first value
 * @b: second value
 * Return: returns the multiplied value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides first value with second value
 * @a: first value / dividend
 * @b: second value / divider
 * Return: returns the quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error!\nCannot be divided by 0\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that gets the remainder of a divided number
 * @a: first value
 * @b: second value
 * Return: returns the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error!\nCannot divide with 0\n");
	exit(100);
	}
	return (a % b);
}
