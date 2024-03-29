#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
* find_len - function that finds length of string
* @str: string value
* Description: finds the length of the string in an array
* Return: return len
*/

int find_len(char *str)
{
	int len = 0;

	while (*str++)
	len++;
	return (len);
}

/**
* create_xarray - creates an array of char and initialize it with 'x'
* @size: size of the array
* Description: the function exits with status 98 if there is insufficient space
* Return: a pointer to array
*/

char *create_xarray(int size)
{
	char *arry;
	int index;

	arry = malloc(sizeof(char) * size);

	if (arry == NULL)
	exit(98);

	for (index = 0 ; index < (size - 1) ; index++)
	arry[index] = 'x';

	arry[index] = '\0';
	return (arry);
}

/**
* iterate_zeroes - iterates through an array of number to find a non-zero value
* @str: array of numbers
* Description: finds non-zero values in array
* Return: return a pointer to the non-zero value
*/

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
	str++;

	return (str);
}

/**
 * get_digit - converts a digit character to a corresponding int
 * @c: thr character to be converted
 * Description: if the value is a non digit, the function exits with status 98
 * Return: the converted int.
 */

int get_digit(char c)
{
	int digit;

	digit = c - '0';
	if (digit < 0 || digit > 9)
	{
	printf("Error\n");
	exit(98);
	}
	return (digit);
}

/**
 * get_prod - Multiplies a string of numbers by a single digit
 * @prod: the buffer to store the result
 * @mult: the string of numbers
 * @digit: the single digit
 * @zeroes: The necessary number of leading zeroes
 * Description: exits with status 98 if mult contains a non-digit value
 * Return: Returns nothing
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult = mult + mult_len;

	while (*prod)
	{
	*prod = 'x';
	prod++;
	}
	prod--;

	while (zeroes--)
	{
	*prod = '0';
	prod--;
	}

	for (; mult_len >= 0 ; mult_len--, mult--, prod--)
	{
	if (*mult < '0' || *mult > '9')
	{
	printf("Error\n");
	exit(98);
	}
	num = (*mult - '0') * digit;
	num = num + tens;
	*prod = (num % 10) + '0';
	tens = num / 10;
	}
	if (tens)
	*prod = (tens % 10) + '0';
}

/**
 * add_nums - add the numbers stored in two strings
 * @final_prod: the buffer that stores the running final product
 * @next_prod: the next product to be added
 * @next_len: the length of next_prod
 * Return: returns nothing
 */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
	final_prod++;

	while (*(next_prod + 1))
	next_prod++;

	for (; *final_prod != 'x' ; final_prod--)
	{
	num = (*final_prod - '0') + (*next_prod - '0');
	num = num + tens;
	*final_prod = (num % 10) + '0';
	tens = num / 10;

	final_prod--;
	next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x' ; next_len--)
	{
	num = (*next_prod - '0');
	num = num + tens;
	*final_prod = (num % 10) + '0';
	tens = num / 10;

	final_prod--;
	next_prod--;
	}
	if (tens)
	*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguements
 * @argv: array of pointers to arguements
 * Description: exits with a status 98 if arguement is incorrect / non-gigit
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
	printf("Error\n");
	exit(98);
	}
	if (*(argv[1]) == '0')
	argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
	argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
	printf("0\n");
	return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1 ; index >= 0 ; index--)
	{
	digit = get_digit(*(argv[2] + index));
	get_prod(next_prod, argv[1], digit, zeroes++);
	add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0 ; final_prod[index] ; index++)
	{
	if (final_prod[index] != 'x')
	_putchar(final_prod[index]);
	}
	_putchar('\n');

	return (0);
}
