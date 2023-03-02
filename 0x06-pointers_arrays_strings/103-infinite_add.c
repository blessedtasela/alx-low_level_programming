#include "main.h"
/**
 * rev_string - returns array of string in reverse order
 * @s: variable to be used
 * Return: return arrayof char
 */

void rev_string(char *s)
{
        int i, count = 0;
        char rev = s[0];

        while (s[count] != '\0')
        {
        count++;
        }
        for (i = 0 ; i < count ; i++)
        {
        count--;
        rev = s[i];
        s[i] = s[count];
        s[count] = rev;
        }
}
/*
* main.h for input/output
*/

/**
* infinite_add - adds two numbers
* @n1: first parameter
* @n2: second parameter
* @r: holds sum of integers
* @size_r: size of byte(s)
* Return: retuns 0 on success
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, extra = 0, j = 0;
	int num = 0, val1 = 0, val2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
	i++;
	while (*(n2 + j) != '\0')
	j++;

	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || extra == 1)
	{
	if (i < 0)
	val1 = 0;
	else
	val1 = *(n1 + i) - '0';
	if (j < 0)
	val2 = 0;
	else
	val2 = *(n2 + j) - '0';

	temp = val1 + val2 + extra;
	if (temp >= 10)
	extra = 1;
	else
	extra = 0;
	if (num >= (size_r - 1))
	return (0);
	*(r + num) = (temp % 10) + '0';
	num++;
	j--;
	i--;
	}
	if (num == size_r)
	return (0);
	*(r + num) = '\0';
	rev_string(r);
	return (r);
}
